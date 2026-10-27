
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

class GameKeyCompleteMotionGestureInputEvent: public CompleteMotionGestureInputEvent, public GameKeyEventSourceInterface {

    private: GameKeyEventFactory* gameKeyEventFactory = GameKeyEventFactory::getInstance();

    private: const int32_t SOURCE_ID = this->gameKeyEventFactory->MOTION_GESTURE_SOURCE_ID;

    private: GameKey* gameKey = GameKey::NULL_GAME_KEY;

    private: GameKeyEvent* gameKeyEvent = GameKeyEvent::NONE;

    private: InputToGameKeyMapping* inputToGameKeyMapping;

public: GameKeyCompleteMotionGestureInputEvent(std::string name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping) : CompleteMotionGestureInputEvent(name, motionGestureInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->inputToGameKeyMapping= inputToGameKeyMapping;
    
GameKeyCompleteMotionGestureInputEventFactory::getInstance()->add(this);
    
this->update();
    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->SOURCE_ID;
    
}


    public: void update(){

        try {
            this->setGameKey(this->inputToGameKeyMapping->getInstance(this->getMotionGestureInput()->getId()));
    
this->setGameKeyEvent(this->gameKeyEventFactory->getInstanceForInput(this, this->getGameKey()));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings->EXCEPTION, this, commonStrings->UPDATE, &e);
    
}

}


    protected: void setGameKeyEvent(GameKeyEvent* gameKeyEvent){
this->gameKeyEvent= gameKeyEvent;
    
}


    public: GameKeyEvent* getGameKeyEvent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyEvent;
    
}


    protected: void setGameKey(GameKey* gameKey){
this->gameKey= gameKey;
    
}


    public: GameKey* getGameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKey;
    
}


};

            

