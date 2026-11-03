
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/touch/action/ReleaseTouchInputToGameKeyEventAction.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* ReleaseTouchInputToGameKeyEventAction::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto ReleaseTouchInputToGameKeyEventAction::getInstance() -> GameKeyCompleteMotionGestureInputEvent*{

                        if(ReleaseTouchInputToGameKeyEventAction::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ReleaseTouchInputToGameKeyEventAction::instance= new ReleaseTouchInputToGameKeyEventAction();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GameKeyCompleteMotionGestureInputEvent*>(ReleaseTouchInputToGameKeyEventAction::instance);
    
}


ReleaseTouchInputToGameKeyEventAction::ReleaseTouchInputToGameKeyEventAction() : GameKeyCompleteMotionGestureInputEvent("Release Action", TouchMotionGestureFactory::getInstance()->RELEASED, PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()), NONE(GameKeyFactory::getInstance()->NONE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this->setGameKey(this->NONE);
    
this->setGameKeyEvent(GameKeyEventFactory::getInstance()->getInstanceForInput(this, this->NONE));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, &e);
    
}

}


    auto ReleaseTouchInputToGameKeyEventAction::update() -> void{
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_CPP
