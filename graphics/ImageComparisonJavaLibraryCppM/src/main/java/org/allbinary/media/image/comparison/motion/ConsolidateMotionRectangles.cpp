
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_CPP
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/media/image/comparison/motion/ConsolidateMotionRectangles.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"


ConsolidateMotionRectangles::ConsolidateMotionRectangles(MotionRectangles* motionRectangles) : MotionRectangles(NAME, motionRectangles->getImageComparisonResult()), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    BasicArrayList* vector = motionRectangles->getVector();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle* motionRectangle = dynamic_cast<MotionRectangle*>(vector->get(index));;
    
vector->add(motionRectangle->clone());
    
}

this->consolidateMotionRectangles();
    
}


    auto ConsolidateMotionRectangles::consolidateMotionRectangles() -> void{

    BasicArrayList* vector = this->getVector();;
    
this->logUtil->putF(JavaString::valueOf("Start - Size Before: ") +JavaString::valueOf(vector->size()), this, "consolidateMotionRectangleConstraints");
    

    BasicArrayList* removeVector = new BasicArrayListD();;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle* motionRectangle = dynamic_cast<MotionRectangle*>(vector->get(index));;
    




                        for (
    int32_t i = index +1;i < vector->size(); i++)
        {

    MotionRectangle* motionRectangle2 = dynamic_cast<MotionRectangle*>(vector->get(i));;
    

    Rectangle* rectangle = motionRectangle->getRectangle();;
    

    Rectangle* rectangle2 = motionRectangle2->getRectangle();;
    

    int32_t x2 = rectangle->x +rectangle->width;;
    

    int32_t y2 = rectangle->y +rectangle->height;;
    

    int32_t rightX = rectangle2->x +rectangle2->width;;
    

    int32_t bottomY = rectangle2->y +rectangle2->height;;
    

                        if(rectangle->x <= rectangle2->x && rectangle->y <= rectangle2->y && x2 >= rightX && y2 >= bottomY)
                        
                                    {
                                    removeVector->add(motionRectangle2);
    

                                    }
                                
}

}

this->remove(removeVector);
    
}


    auto ConsolidateMotionRectangles::remove(BasicArrayList* removeVector) -> void{

    BasicArrayList* vector = this->getVector();;
    

    int32_t size = removeVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
vector->remove(removeVector->get(index));
    
}

}




        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_CPP
