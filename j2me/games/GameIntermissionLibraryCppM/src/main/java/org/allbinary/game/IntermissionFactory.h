
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
        



        #ifndef ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H
        #define ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntermissionFactory
            : public Object
         {

    private: static IntermissionFactory instance() { return IntermissionFactory(); }

    public: static IntermissionFactory getInstance();

    public: const GameState START_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance().createGameState("START_LEVEL_INTERMISSION_GAME_STATE");

    public: const GameState WAIT_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance().createGameState("WAIT_LEVEL_INTERMISSION_GAME_STATE");

    public: const GameState SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance().createGameState("SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE");

    public: const GameState SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance().createGameState("SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE");

};

            


        #endif //ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H
