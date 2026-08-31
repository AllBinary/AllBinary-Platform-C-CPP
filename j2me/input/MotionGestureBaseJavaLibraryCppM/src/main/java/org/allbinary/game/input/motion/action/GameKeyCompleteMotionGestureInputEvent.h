
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/CompleteMotionGestureInputEvent.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyEventSourceInterface.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/input/motion/gesture/MotionGestureInput.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyCompleteMotionGestureInputEventFactory.h"

class GameKeyCompleteMotionGestureInputEvent: public CompleteMotionGestureInputEvent: public GameKeyEventSourceInterface {
        

    private: const gameKeyEventFactory: GameKeyEventFactory = GameKeyEventFactory.getInstance()!;

    private: const SOURCE_ID: int32_t = this.gameKeyEventFactory!.MOTION_GESTURE_SOURCE_ID;

    private: gameKey: GameKey = GameKey.NULL_GAME_KEY;

    private: gameKeyEvent: GameKeyEvent = GameKeyEvent.NONE;

    private: inputToGameKeyMapping: InputToGameKeyMapping;

public constructor (string name, MotionGestureInput motionGestureInput, InputToGameKeyMapping inputToGameKeyMapping);

    public int32_t getSourceId();

    public update();

    setGameKeyEvent(GameKeyEvent gameKeyEvent);

    public GameKeyEvent getGameKeyEvent();

    setGameKey(GameKey gameKey);

    public GameKey getGameKey();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
