
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CustomGPoint;
class GPointCircularPool;
class MotionGestureRecognizer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GestureOnlyMotionRecognizer: public MotionRecognizer {

    private: static inline int32_t index = 0;

    private: static GPointCircularPool* pointCircularPool_owner();
    private: static GPointCircularPool* pointCircularPool;

    private: MotionGestureRecognizer* motionGestureRecognizer;

    private: int32_t id;

public: GestureOnlyMotionRecognizer();

                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/CustomGPoint.h>)
#include <org/allbinary/graphics/CustomGPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/GPointCircularPool.h>)
#include <org/allbinary/graphics/GPointCircularPool.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>
#endif
#if __has_include("org/allbinary/input/motion/MotionRecognizer.h")
#include "org/allbinary/input/motion/MotionRecognizer.h"
#endif

        #endif
    
