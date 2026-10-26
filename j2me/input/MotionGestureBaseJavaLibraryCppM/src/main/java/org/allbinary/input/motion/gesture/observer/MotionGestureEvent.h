
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

#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MotionGestureEvent: public AllBinaryEventObject {

    private: static const std::string PREVIOUS = " Previous: ";

    private: static const std::string HASHCODE = " hashcode: ";

    private: MotionGestureInput motionGesture = TouchMotionGestureFactory::getInstance().NO_MOTION;

    private: int32_t id;

    private: GPoint previousPoint = PointFactory::getInstance().ZERO_ZERO;

    private: GPoint currentPoint = PointFactory::getInstance().ZERO_ZERO;

public: MotionGestureEvent(Object* source, int32_t id, MotionGestureInput motionGesture);

    public: MotionGestureInput getMotionGesture();

    public: void setMotionGesture(MotionGestureInput motionGesture);

    public: GPoint getPreviousPoint();

    public: void setPreviousPoint(GPoint previousPoint);

    public: GPoint getCurrentPoint();

    public: void setCurrentPoint(GPoint currentPoint);

    private: const CommonLabels commonLabels = CommonLabels::getInstance();

    public: std::string toString();

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
