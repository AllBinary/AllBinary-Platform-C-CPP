
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/gyro/action/UpOrientationInputToGameKeyEventAction.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/gyro/OrientationMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* UpOrientationInputToGameKeyEventAction::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto UpOrientationInputToGameKeyEventAction::getInstance() -> GameKeyCompleteMotionGestureInputEvent*{

                        if(UpOrientationInputToGameKeyEventAction::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    UpOrientationInputToGameKeyEventAction::instance= new UpOrientationInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(UpOrientationInputToGameKeyEventAction::instance);
    
}


UpOrientationInputToGameKeyEventAction::UpOrientationInputToGameKeyEventAction() : GameKeyCompleteMotionGestureInputEvent("Up Action", OrientationMotionGestureFactory::getInstance()->UP, PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_CPP
