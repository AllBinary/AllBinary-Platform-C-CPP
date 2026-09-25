
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangle.h"
#include "Rectangle.h"

class ConsolidateMotionRectangles: public MotionRectangles {

    private: static const std::string NAME = "consolidatedMotionRectangles_";

    protected: const LogUtil logUtil = LogUtil::getInstance();

public: ConsolidateMotionRectangles(MotionRectangles motionRectangles){
            super(NAME, motionRectangles.getImageComparisonResult());
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicArrayList vector = motionRectangles.getVector();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle motionRectangle = vector.get(index) as MotionRectangle;;
    
vector.add(motionRectangle.clone());
    
}

this->consolidateMotionRectangles();
    
}


    private: void consolidateMotionRectangles(){

    BasicArrayList vector = this->getVector();;
    
this->logUtil.putF("Start - Size Before: " +vector.size(), this, "consolidateMotionRectangleConstraints");
    

    BasicArrayList removeVector = BasicArrayListD();;
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle motionRectangle = vector.get(index) as MotionRectangle;;
    




                        for (
    int32_t i = index +1;i < vector.size(); i++)
        {

    MotionRectangle motionRectangle2 = vector.get(i) as MotionRectangle;;
    

    Rectangle rectangle = motionRectangle.getRectangle();;
    

    Rectangle rectangle2 = motionRectangle2.getRectangle();;
    

    int32_t x2 = rectangle.x +rectangle.width;;
    

    int32_t y2 = rectangle.y +rectangle.height;;
    

    int32_t rightX = rectangle2.x +rectangle2.width;;
    

    int32_t bottomY = rectangle2.y +rectangle2.height;;
    

                        if(rectangle.x <= rectangle2.x && rectangle.y <= rectangle2.y && x2 >= rightX && y2 >= bottomY)
                        
                                    {
                                    removeVector.add(motionRectangle2);
    

                                    }
                                
}

}

this->remove(removeVector);
    
}


    private: void remove(BasicArrayList removeVector){

    BasicArrayList vector = this->getVector();;
    

    int32_t size = removeVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
vector.remove(removeVector.get(index));
    
}

}


};

            

