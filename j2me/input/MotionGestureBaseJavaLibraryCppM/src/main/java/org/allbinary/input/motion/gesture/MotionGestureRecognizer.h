
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Line.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>

      
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>

      
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>

      
#include <org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h>

      
#include <org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/J2SEMath.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TouchMotionGestureFactory.h"
#include "MotionGestureInput.h"

class MotionGestureRecognizer
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const J2SEMath j2seMath = J2SEMath::getInstance();

    private: const GPoint origin = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint previous = this->origin;

    private: GPoint intermediate = this->origin;

    private: const Line line = Line(this->origin, this->origin);

    private: BasicMotionGesturesHandler motionGesturesHandler;

    private: BasicEventHandler movedMotionGesturesHandler;

    private: BasicEventHandler scrolledMotionGesturesHandler;

    private: MotionEventCircularPool motionEventCircularPool;

public: MotionGestureRecognizer(int32_t id);

                //@Throws(Exception.constructor)
            
    public: bool processPressedMotionEvent(GPoint current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: bool processReleasedMotionEvent(GPoint current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(GPoint current, int32_t deviceId, int32_t buttonMask);

                //@Throws(Exception.constructor)
            
    public: bool processMovedMotionEvent(GPoint current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: bool processScrolledMotionEvent(GPoint current, int32_t deviceId, int32_t button);

    public: BasicMotionGesturesHandler getMotionGesturesHandler();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H
