
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class MotionGestureInput;
class TouchMotionGestureFactory;
class ForcedLogUtil;
class LogUtil;
class StringMaker;
class StringUtil;
class AllBinaryEventObject;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"
class CompleteMotionGestureListenerInterface;
class MotionGestureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameMotionGestureListener
            : public virtual Object
        , public virtual MotionGestureEventListener {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: BasicArrayList* motionGestureCollection;

    private: BasicArrayList* touchGestureCollection;

    private: CompleteMotionGestureListenerInterface* signed_;

public: GameMotionGestureListener(CompleteMotionGestureListenerInterface* signed_);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void onUpMotionGestureEvent(MotionGestureEvent* ev);

    public: void onDownMotionGestureEvent(MotionGestureEvent* ev);

    public: void onLeftMotionGestureEvent(MotionGestureEvent* ev);

    public: void onRightMotionGestureEvent(MotionGestureEvent* ev);

    public: void onDiagonalDownRightMotionGestureEvent(MotionGestureEvent* ev);

    public: void onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent* ev);

    public: void onDiagonalUpRightMotionGestureEvent(MotionGestureEvent* ev);

    public: void onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent* ev);

    public: void onPressedMotionGestureEvent(MotionGestureEvent* ev);

    public: void released(MotionGestureEvent* ev);

    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    public: void onMotionGestureEvent(MotionGestureEvent* ev);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/ForcedLogUtil.h>)
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h")
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

        #endif
    
