
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/graphics/CustomGPoint.h>

      
#include <org/allbinary/graphics/GPointCircularPool.h>

      
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureRecognizer.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionRecognizer.h"

class AllMotionRecognizer: public MotionRecognizer {
        

    private: static index: int32_t = 0;

    private: static const pointCircularPool: GPointCircularPool = new GPointCircularPool(40);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const motionGestureRecognizer: MotionGestureRecognizer;

    private: touchButtonProcessing: bool = false;

    private: const touchButtonRecognizer: TouchButtonRecognizer;

    private: const id: int32_t;

public constructor ();

                //@Throws(Exception.constructor)
            
    public processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

    private: lastX: int32_t= 0;

    private: lastY: int32_t= 0;

                //@Throws(Exception.constructor)
            
    public processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

    public MotionGestureRecognizer getMotionGestureRecognizer();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
