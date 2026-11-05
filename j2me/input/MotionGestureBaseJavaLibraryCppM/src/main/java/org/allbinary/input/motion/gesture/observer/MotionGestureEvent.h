
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GPoint;
class PointFactory;
class MotionGestureInput;
class TouchMotionGestureFactory;
class TsUtil;
class StringMaker;
class StringUtil;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionGestureEvent: public AllBinaryEventObject {

    private: static inline const std::string PREVIOUS = " Previous: ";

    private: static inline const std::string HASHCODE = " hashcode: ";

    private: MotionGestureInput* motionGesture;

    private: int32_t id;

    private: GPoint* previousPoint;

    private: GPoint* currentPoint;

public: MotionGestureEvent(Object* source, int32_t id, MotionGestureInput* motionGesture);
public: MotionGestureEvent(const std::string& source, int32_t id, MotionGestureInput* motionGesture) : MotionGestureEvent(JavaString::box(source), id, motionGesture) { }
public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> MotionGestureEvent(BoxValue source, int32_t id, MotionGestureInput* motionGesture) : MotionGestureEvent(JavaBoxes::toObject(source), id, motionGesture) { }
public: template<typename BoxElement> MotionGestureEvent(const std::vector<BoxElement>& source, int32_t id, MotionGestureInput* motionGesture) : MotionGestureEvent(JavaBoxes::toObject(source), id, motionGesture) { }

    public: MotionGestureInput* getMotionGesture();

    public: void setMotionGesture(MotionGestureInput* motionGesture);

    public: GPoint* getPreviousPoint();

    public: void setPreviousPoint(GPoint* previousPoint);

    public: GPoint* getCurrentPoint();

    public: void setCurrentPoint(GPoint* currentPoint);

    private: CommonLabels* commonLabels;

    public: std::string toString();

    public: int32_t getId();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H_COMPLETE
        #if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/PointFactory.h>)
#include <org/allbinary/graphics/PointFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
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
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
