
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
        



        #ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
        #define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrientationMotionGestureFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static OrientationMotionGestureFactory getInstance();

    public: MotionGestureInput LEFT;

    public: MotionGestureInput RIGHT;

    public: MotionGestureInput UP;

    public: MotionGestureInput DOWN;

    public: MotionGestureInput ROLL_LEFT;

    public: MotionGestureInput ROLL_RIGHT;

private: OrientationMotionGestureFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
