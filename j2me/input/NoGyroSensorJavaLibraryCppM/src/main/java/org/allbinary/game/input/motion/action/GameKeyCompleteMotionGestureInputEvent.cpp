
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
        



#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameKeyCompleteMotionGestureInputEvent: public CompleteMotionGestureInputEvent, public GameKeyEventSourceInterface {

    private: GameKey gameKey = GameKey::NULL_GAME_KEY;

    private: GameKeyEvent gameKeyEvent = GameKeyEvent::NONE;

public: GameKeyCompleteMotionGestureInputEvent(std::string name, MotionGestureInput motionGestureInput, InputToGameKeyMapping inputToGameKeyMapping) : CompleteMotionGestureInputEvent(name, motionGestureInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: int32_t getSourceId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void update(){
}


    protected: void setGameKeyEvent(GameKeyEvent gameKeyEvent){
this->gameKeyEvent= gameKeyEvent;
    
}


    public: GameKeyEvent getGameKeyEvent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKeyEvent;
    
}


    protected: void setGameKey(GameKey gameKey){
this->gameKey= gameKey;
    
}


    public: GameKey getGameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKey;
    
}


};

            

