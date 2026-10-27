
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt/Rectangle.h>

      
#include <java/awt/image/BufferedImage.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"

class ConstrainedMotionRectangles: public MotionRectangles {

    private: static inline const std::string NAME = "constrainedMotionRectangles_";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface;

public: ConstrainedMotionRectangles(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles) : MotionRectangles(NAME, motionRectangles->getImageComparisonResult()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setMotionRectangleConstraintsInterface(motionRectangleConstraintsInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void applyMotionRectangleConstraints(MotionRectangles* motionRectangles){
this->logUtil->putF("Start - Size Before: " +motionRectangles->getVector()->size(), this, "applyMotionRectangleConstraints");
    

    std::vector<BufferedImage*> bufferedImageArray = motionRectangles->getImageComparisonResult()->getBufferedImages();;
    

    BufferedImage* bufferedImage = bufferedImageArray[1];;
    

    BasicArrayList* vector = new BasicArrayListD();;
    

    BasicArrayList* vector2 = motionRectangles->getVector();;
    

    int32_t size = vector2->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    MotionRectangle* motionRectangle = dynamic_cast<MotionRectangle*>(vector2->get(index));;
    

    Rectangle* rectangle = motionRectangle->getRectangle();;
    

    bool isTooSmall = this->getMotionRectangleConstraintsInterface()->isTooSmall(rectangle);;
    

                        if(isTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isAreaTooSmall = this->getMotionRectangleConstraintsInterface()->isAreaTooSmall(rectangle);;
    

                        if(isAreaTooSmall)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isTooBig = this->getMotionRectangleConstraintsInterface()->isTooBig(rectangle);;
    

                        if(isTooBig)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

    bool isValid = this->getMotionRectangleConstraintsInterface()->isValid(this->getImageComparisonResult()->getFrameTwo(), bufferedImage, motionRectangle->getRectangle());;
    

                        if(!isValid)
                        
                                    {
                                    

                        continue
                    

                                    }
                                

                        if(!isTooSmall && !isAreaTooSmall && !isTooBig && isValid)
                        vector->add(motionRectangle);
                                
}

this->setVector(vector);
    
}


    public: MotionRectangleConstraintsInterface* getMotionRectangleConstraintsInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->motionRectangleConstraintsInterface;
    
}


    public: void setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface){
this->motionRectangleConstraintsInterface= motionRectangleConstraintsInterface;
    
}


};

            

