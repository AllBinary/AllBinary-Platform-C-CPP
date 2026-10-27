
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class InputFactory;
class NullUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class MotionGestureInput;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TrackballMotionGestureFactory
            : public virtual Object
         {

    private: static Object* instance;

    public: static TrackballMotionGestureFactory* getInstance();

    public: MotionGestureInput* LEFT;

    public: MotionGestureInput* RIGHT;

    public: MotionGestureInput* UP;

    public: MotionGestureInput* DOWN;

private: TrackballMotionGestureFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

        #endif
    
