
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"

class ReleaseControlledMotionGestureListener
            : public Object
        , public MotionGestureEventListener {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: MotionGestureInput* currentMotionGesture = TouchMotionGestureFactory::getInstance()->NO_MOTION;

    private: bool isMouseGestureOccurring = false;

    private: BasicArrayList* motionGestureCollection = new BasicArrayListD();

    private: CompleteMotionGestureListenerInterface* signed_;

public: ReleaseControlledMotionGestureListener(CompleteMotionGestureListenerInterface* signed_);

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

    public: void onScrolledMotionGestureEvent(MotionGestureEvent* motionGestureEvent);

    public: void released(MotionGestureEvent* ev);

    public: void onMotionGestureEvent(MotionGestureEvent* ev);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H
