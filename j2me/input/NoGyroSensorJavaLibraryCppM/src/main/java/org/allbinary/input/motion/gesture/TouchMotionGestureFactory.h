
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_TOUCHMOTIONGESTUREFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_GESTURE_TOUCHMOTIONGESTUREFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/gesture/MotionGestureInput.h"

class TouchMotionGestureFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static TouchMotionGestureFactory* getInstance();

    public: MotionGestureInput* LEFT;

    public: MotionGestureInput* RIGHT;

    public: MotionGestureInput* UP;

    public: MotionGestureInput* DOWN;

    public: MotionGestureInput* PRESSED;

    public: MotionGestureInput* RELEASED;

    public: MotionGestureInput* DIAGONAL_DOWN_RIGHT;

    public: MotionGestureInput* DIAGONAL_DOWN_LEFT;

    public: MotionGestureInput* DIAGONAL_UP_RIGHT;

    public: MotionGestureInput* DIAGONAL_UP_LEFT;

    public: MotionGestureInput* SCROLL_UP;

    public: MotionGestureInput* SCROLL_DOWN;

    public: MotionGestureInput* NO_MOTION;

    public: MotionGestureInput* LAST_MOTION;

private: TouchMotionGestureFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_TOUCHMOTIONGESTUREFACTORY_H
