
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureEvent: public AllBinaryEventObject {
        

    private: static const CURRENT: string = CommonLabels.getInstance()!.CURRENT;

    private: static const PREVIOUS: string = " Previous: ";

    private: static const HASHCODE: string = " hashcode: ";

    private: motionGesture: MotionGestureInput = TouchMotionGestureFactory.getInstance()!.NO_MOTION;

    private: const id: int32_t;

    private: previousPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

    private: currentPoint: GPoint = PointFactory.getInstance()!.ZERO_ZERO;

public constructor (any = {} source, int32_t id, MotionGestureInput motionGesture);

    public MotionGestureInput getMotionGesture();

    public setMotionGesture(MotionGestureInput motionGesture);

    public GPoint getPreviousPoint();

    public setPreviousPoint(GPoint previousPoint);

    public GPoint getCurrentPoint();

    public setCurrentPoint(GPoint currentPoint);

    public string toString();

    public int32_t getId();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
