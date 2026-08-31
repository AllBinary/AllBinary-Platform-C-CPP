
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

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class OrientationMotionGestureFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static OrientationMotionGestureFactory getInstance();

    public const LEFT: MotionGestureInput;

    public const RIGHT: MotionGestureInput;

    public const UP: MotionGestureInput;

    public const DOWN: MotionGestureInput;

    public const ROLL_LEFT: MotionGestureInput;

    public const ROLL_RIGHT: MotionGestureInput;

private constructor ();

};

            


        #endif //ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
