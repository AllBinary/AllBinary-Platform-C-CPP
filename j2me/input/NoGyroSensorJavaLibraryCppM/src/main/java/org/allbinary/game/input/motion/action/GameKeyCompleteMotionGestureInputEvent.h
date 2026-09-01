
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
        #define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H

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

public: GameKeyCompleteMotionGestureInputEvent(std::string name, MotionGestureInput motionGestureInput, InputToGameKeyMapping inputToGameKeyMapping);

    public: int32_t getSourceId();

    public: void update();

    protected: void setGameKeyEvent(GameKeyEvent gameKeyEvent);

    public: GameKeyEvent getGameKeyEvent();

    protected: void setGameKey(GameKey gameKey);

    public: GameKey getGameKey();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
