
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/touch/action/DiagonalUpRightTouchInputToGameKeyEventAction.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* DiagonalUpRightTouchInputToGameKeyEventAction::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto DiagonalUpRightTouchInputToGameKeyEventAction::getInstance() -> GameKeyCompleteMotionGestureInputEvent*{

                        if(DiagonalUpRightTouchInputToGameKeyEventAction::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    DiagonalUpRightTouchInputToGameKeyEventAction::instance= new DiagonalUpRightTouchInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(DiagonalUpRightTouchInputToGameKeyEventAction::instance);
    
}


DiagonalUpRightTouchInputToGameKeyEventAction::DiagonalUpRightTouchInputToGameKeyEventAction() : GameKeyCompleteMotionGestureInputEvent("Diagonal Up Right Action", TouchMotionGestureFactory::getInstance()->DIAGONAL_UP_RIGHT, PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_DIAGONALUPRIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_CPP
