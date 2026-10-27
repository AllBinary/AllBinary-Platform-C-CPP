
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Input;
class InputFactory;
class MotionGestureInput;
class TouchMotionGestureFactory;
class AllBinaryEventObject;
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MotionGestureEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionEventFactory
            : public virtual Object
        , public AllBinaryEventObjectFactoryInterface {

    private: static inline int32_t index = 0;

    private: Object* source;

    private: int32_t id;

public: MotionEventFactory(Object* source, int32_t id);

    public: AllBinaryEventObject* getInstance();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/MotionGestureInput.h>)
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>
#endif
#if __has_include(<org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>)
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObjectFactoryInterface.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

        #endif
    
