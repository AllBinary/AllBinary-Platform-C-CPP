
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
class MotionRectangleConstraintsInterface;
class MotionRectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ConstrainedMotionRectangles: public MotionRectangles {

    private: static inline const std::string NAME = "constrainedMotionRectangles_";

    /*protected*/ public: LogUtil* logUtil;

    private: MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface;

public: ConstrainedMotionRectangles(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface, MotionRectangles* motionRectangles);

                //@Throws(Exception.constructor)
            
    public: void applyMotionRectangleConstraints(MotionRectangles* motionRectangles);

    public: MotionRectangleConstraintsInterface* getMotionRectangleConstraintsInterface();

    public: void setMotionRectangleConstraintsInterface(MotionRectangleConstraintsInterface* motionRectangleConstraintsInterface);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSTRAINEDMOTIONRECTANGLES_H_COMPLETE
        #if __has_include(<java/awt/Rectangle.h>)
#include <java/awt/Rectangle.h>
#endif
#if __has_include(<java/awt/image/BufferedImage.h>)
#include <java/awt/image/BufferedImage.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangles.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangleConstraintsInterface.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangle.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#endif

        #endif
    
