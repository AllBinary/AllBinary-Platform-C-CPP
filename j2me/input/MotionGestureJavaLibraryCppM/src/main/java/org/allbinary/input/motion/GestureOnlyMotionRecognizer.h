
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"

class GestureOnlyMotionRecognizer: public MotionRecognizer {

    private: static inline int32_t index = 0;

    private: static GPointCircularPool* pointCircularPool() { static std::unique_ptr<GPointCircularPool> value(new GPointCircularPool(40)); return value.get(); }

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
