
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEventFactory.h"


GameKeyCompleteMotionGestureInputEvent::GameKeyCompleteMotionGestureInputEvent(std::string name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) : CompleteMotionGestureInputEvent(name, motionGestureInput), gameKeyEventFactory(GameKeyEventFactory::getInstance()), SOURCE_ID(this->gameKeyEventFactory->MOTION_GESTURE_SOURCE_ID), gameKey(GameKey::NULL_GAME_KEY), gameKeyEvent(GameKeyEvent::NONE){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->inputToGameKeyMapping= inputToGameKeyMapping;
    
GameKeyCompleteMotionGestureInputEventFactory::getInstance()->add(this);
    
this->update();
    
}


    auto GameKeyCompleteMotionGestureInputEvent::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->SOURCE_ID;
    
}


    auto GameKeyCompleteMotionGestureInputEvent::update() -> void{

        try {
            this->setGameKey(this->inputToGameKeyMapping->getInstance(this->getMotionGestureInput()->getId()));
    
this->setGameKeyEvent(this->gameKeyEventFactory->getInstanceForInput(this, this->getGameKey()));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->UPDATE, &e);
    
}

}


    auto GameKeyCompleteMotionGestureInputEvent::setGameKeyEvent(GameKeyEvent* gameKeyEvent) -> void{
this->gameKeyEvent= gameKeyEvent;
    
}


    auto GameKeyCompleteMotionGestureInputEvent::getGameKeyEvent() -> GameKeyEvent*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameKeyEvent;
    
}


    auto GameKeyCompleteMotionGestureInputEvent::setGameKey(GameKey* gameKey) -> void{
this->gameKey= gameKey;
    
}


    auto GameKeyCompleteMotionGestureInputEvent::getGameKey() -> GameKey*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameKey;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_CPP
