
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
        



        #ifndef ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameState.h"

class GameStateFactory
            : public Object
         {
        

    private: static instance: any = NullUtil.getInstance()!.NULL_OBJECT;

    public static GameStateFactory getInstance();

    private: index: int32_t = 0;

    public const NO_GAME_STATE: GameState = this.createGameState("NO_GAME_STATE")!;

    public const PLAYING_GAME_STATE: GameState = this.createGameState("PLAYING_GAME_STATE")!;

    public const SHOW_END_RESULT_GAME_STATE: GameState = this.createGameState("SHOW_END_RESULT_GAME_STATE")!;

    public const SHOW_HIGH_SCORE_GAME_STATE: GameState = this.createGameState("SHOW_HIGH_SCORE_GAME_STATE")!;

private constructor ();

    public GameState createGameState(string name);

};

            


        #endif //ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
