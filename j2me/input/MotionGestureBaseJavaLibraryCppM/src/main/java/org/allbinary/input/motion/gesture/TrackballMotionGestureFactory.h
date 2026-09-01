
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

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MotionGestureInput.h"

class TrackballMotionGestureFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static TrackballMotionGestureFactory getInstance();

    public: MotionGestureInput LEFT;

    public: MotionGestureInput RIGHT;

    public: MotionGestureInput UP;

    public: MotionGestureInput DOWN;

private: TrackballMotionGestureFactory();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H
