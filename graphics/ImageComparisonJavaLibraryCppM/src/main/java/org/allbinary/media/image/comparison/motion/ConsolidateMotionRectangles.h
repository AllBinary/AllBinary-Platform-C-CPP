
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <java/awt.h>
class BasicArrayList;
class BasicArrayListD;

class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"
class MotionRectangle;
class Rectangle;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ConsolidateMotionRectangles: public MotionRectangles {

    private: static inline const std::string NAME = "consolidatedMotionRectangles_";

    /*protected*/ public: LogUtil* logUtil;

public: ConsolidateMotionRectangles(MotionRectangles* motionRectangles);

    private: void consolidateMotionRectangles();

    private: void remove(BasicArrayList* removeVector);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H_COMPLETE)
        #define ORG_ALLBINARY_MEDIA_IMAGE_COMPARISON_MOTION_CONSOLIDATEMOTIONRECTANGLES_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
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
#if __has_include("org/allbinary/media/image/comparison/motion/MotionRectangle.h")
#include "org/allbinary/media/image/comparison/motion/MotionRectangle.h"
#endif
#if __has_include("org/allbinary/media/image/comparison/motion/Rectangle.h")
#include "org/allbinary/media/image/comparison/motion/Rectangle.h"
#endif

        #endif
    
