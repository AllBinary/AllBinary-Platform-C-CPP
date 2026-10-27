
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H

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

public: ConstrainedMotionRectangles(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles);

                //@Throws(Exception.constructor)
            
    public: void applyMotionRectangleConstraints(MotionRectangles* motionRectangles);

    public: MotionRectangleConstraintsInterface* getMotionRectangleConstraintsInterface();

    public: void setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H
