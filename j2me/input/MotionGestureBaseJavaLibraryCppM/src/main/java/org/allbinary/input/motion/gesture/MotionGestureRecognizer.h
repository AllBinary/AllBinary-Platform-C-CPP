
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Math.h"
        
class GPoint;
class Line;
class PointFactory;
class MotionGestureConfiguration;
class MotionGestureConfigurationFactory;
class BasicMotionGesturesHandler;
class MotionEventCircularPool;
class MotionGestureEvent;
class MovedMotionGesturesHandler;
class ScrolledMotionGesturesHandler;
class LogUtil;
class J2SEMath;
class BasicEventHandler;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchMotionGestureFactory;
class MotionGestureInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionGestureRecognizer
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: J2SEMath* j2seMath;

    private: GPoint* origin;

    private: GPoint* previous;

    private: GPoint* intermediate;

    private: Line* line;

    private: BasicMotionGesturesHandler* motionGesturesHandler;

    private: BasicEventHandler* movedMotionGesturesHandler;

    private: BasicEventHandler* scrolledMotionGesturesHandler;

    private: MotionEventCircularPool* motionEventCircularPool;

public: MotionGestureRecognizer(int32_t id);

                //@Throws(Exception.constructor)
            
    public: bool processPressedMotionEvent(GPoint* current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: bool processReleasedMotionEvent(GPoint* current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(GPoint* current, int32_t deviceId, int32_t buttonMask);

                //@Throws(Exception.constructor)
            
    public: bool processMovedMotionEvent(GPoint* current, int32_t deviceId, int32_t button);

                //@Throws(Exception.constructor)
            
    public: bool processScrolledMotionEvent(GPoint* current, int32_t deviceId, int32_t button);

    public: BasicMotionGesturesHandler* getMotionGesturesHandler();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MOTIONGESTURERECOGNIZER_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Line.h>)
#include <org/allbinary/graphics/Line.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>)
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>)
#include <org/allbinary/input/motion/gesture/configuration/MotionGestureConfigurationFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>)
#include <org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/MovedMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h>)
#include <org/allbinary/input/motion/gesture/observer/ScrolledMotionGesturesHandler.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/J2SEMath.h>)
#include <org/allbinary/logic/math/J2SEMath.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h")
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

        #endif
    
