
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
        



            #include <vector>
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRectangles.h"
#include "MotionRectangleConstraintsInterface.h"
#include "MotionRectangle.h"

class ConstrainedMotionRectangles: public MotionRectangles {

    private: static const std::string NAME = "constrainedMotionRectangles_";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: MotionRectangleConstraintsInterface motionRectangleConstraintsInterface;

public: ConstrainedMotionRectangles(MotionRectangleConstraintsInterface motionRectangleConstraintsInterface, MotionRectangles motionRectangles){
            super(NAME, motionRectangles.getImageComparisonResult());
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setMotionRectangleConstraintsInterface(motionRectangleConstraintsInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void applyMotionRectangleConstraints(MotionRectangles motionRectangles){
this->logUtil.putF("Start - Size Before: " +motionRectangles.getVector().size(), this, "applyMotionRectangleConstraints");
    

    std::vector<BufferedImage> bufferedImageArray = motionRectangles.getImageComparisonResult().getBufferedImages();;
    

    BufferedImage bufferedImage = bufferedImageArray[1];;
    

    BasicArrayList vector = BasicArrayListD();;
    

    BasicArrayList vector2 = motionRectangles.getVector();;
    

    int32_t size = vector2.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle motionRectangle = vector2.get(index) as MotionRectangle;;
    

    Rectangle rectangle = motionRectangle.getRectangle();;
    

    bool isTooSmall = this->getMotionRectangleConstraintsInterface().isTooSmall(rectangle);;
    

                        if(isTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isAreaTooSmall = this->getMotionRectangleConstraintsInterface().isAreaTooSmall(rectangle);;
    

                        if(isAreaTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isTooBig = this->getMotionRectangleConstraintsInterface().isTooBig(rectangle);;
    

                        if(isTooBig)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isValid = this->getMotionRectangleConstraintsInterface().isValid(this->getImageComparisonResult().getFrameTwo(), bufferedImage, motionRectangle.getRectangle());;
    

                        if(!isValid)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

                        if(!isTooSmall && !isAreaTooSmall && !isTooBig && isValid)
                        vector.add(motionRectangle);
                                
}

this->setVector(vector);
    
}


    public: MotionRectangleConstraintsInterface getMotionRectangleConstraintsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectangleConstraintsInterface;
    
}


    public: void setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface motionRectangleConstraintsInterface){
this->motionRectangleConstraintsInterface= motionRectangleConstraintsInterface;
    
}


};

            

