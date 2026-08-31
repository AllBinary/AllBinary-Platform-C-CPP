
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

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureInput.h"

class TouchMotionGestureFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static TouchMotionGestureFactory getInstance();

    public const LEFT: MotionGestureInput;

    public const RIGHT: MotionGestureInput;

    public const UP: MotionGestureInput;

    public const DOWN: MotionGestureInput;

    public const PRESSED: MotionGestureInput;

    public const RELEASED: MotionGestureInput;

    public const DIAGONAL_DOWN_RIGHT: MotionGestureInput;

    public const DIAGONAL_DOWN_LEFT: MotionGestureInput;

    public const DIAGONAL_UP_RIGHT: MotionGestureInput;

    public const DIAGONAL_UP_LEFT: MotionGestureInput;

    public const SCROLL_UP: MotionGestureInput;

    public const SCROLL_DOWN: MotionGestureInput;

    public const NO_MOTION: MotionGestureInput;

    public const LAST_MOTION: MotionGestureInput;

private constructor ();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_TOUCHMOTIONGESTUREFACTORY_H
