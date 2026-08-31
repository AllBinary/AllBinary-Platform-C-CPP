
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
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
        #include "MotionGestureEventListener.h"
#include "CompleteMotionGestureListenerInterface.h"
#include "MotionGestureEvent.h"

class GameMotionGestureListener
            : public Object
        : public MotionGestureEventListener {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: motionGestureCollection: BasicArrayList = new BasicArrayListD();

    private: touchGestureCollection: BasicArrayList = new BasicArrayListD();

    private: scrolledGestureCollection: BasicArrayList = new BasicArrayListD();

    private: signed: CompleteMotionGestureListenerInterface;

public constructor (CompleteMotionGestureListenerInterface signed);

    public onEvent(AllBinaryEventObject eventObject);

    public onUpMotionGestureEvent(MotionGestureEvent ev);

    public onDownMotionGestureEvent(MotionGestureEvent ev);

    public onLeftMotionGestureEvent(MotionGestureEvent ev);

    public onRightMotionGestureEvent(MotionGestureEvent ev);

    public onDiagonalDownRightMotionGestureEvent(MotionGestureEvent ev);

    public onDiagonalDownLeftMotionGestureEvent(MotionGestureEvent ev);

    public onDiagonalUpRightMotionGestureEvent(MotionGestureEvent ev);

    public onDiagonalUpLeftMotionGestureEvent(MotionGestureEvent ev);

    public onPressedMotionGestureEvent(MotionGestureEvent ev);

    public released(MotionGestureEvent ev);

    public onScrolledMotionGestureEvent(MotionGestureEvent motionGestureEvent);

    public onMotionGestureEvent(MotionGestureEvent ev);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H
