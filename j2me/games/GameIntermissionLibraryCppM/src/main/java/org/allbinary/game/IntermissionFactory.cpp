
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
        



            #include "../../../java/lang/Object.h"
        
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntermissionFactory
            : public Object
         {
        

    private: static const instance: IntermissionFactory = new IntermissionFactory();

    public static IntermissionFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return IntermissionFactory.instance;
    
}


    public const START_LEVEL_INTERMISSION_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("START_LEVEL_INTERMISSION_GAME_STATE")!;

    public const WAIT_LEVEL_INTERMISSION_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("WAIT_LEVEL_INTERMISSION_GAME_STATE")!;

    public const SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE")!;

    public const SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE: GameState = GameStateFactory.getInstance()!.createGameState("SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE")!;

};

            

