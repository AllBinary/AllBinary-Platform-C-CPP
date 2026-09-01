
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

    private: static int32_t index = 0;

    private: static const GPointCircularPool pointCircularPool = GPointCircularPool(40);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: MotionGestureRecognizer motionGestureRecognizer;

    private: bool touchButtonProcessing = false;

    private: TouchButtonRecognizer touchButtonRecognizer;

    private: int32_t id;

public: AllMotionRecognizer();

                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

    private: int32_t lastX= 0;

    private: int32_t lastY= 0;

                //@Throws(Exception.constructor)
            
    public: void processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

    public: MotionGestureRecognizer getMotionGestureRecognizer();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
