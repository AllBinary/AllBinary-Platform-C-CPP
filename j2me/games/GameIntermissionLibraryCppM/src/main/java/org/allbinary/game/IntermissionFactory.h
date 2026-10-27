
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class IntermissionFactory
            : public Object
         {

    private: static IntermissionFactory* instance() { static std::unique_ptr<IntermissionFactory> value(new IntermissionFactory()); return value.get(); }

    public: static IntermissionFactory* getInstance();

    public: GameState* START_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance()->createGameState("START_LEVEL_INTERMISSION_GAME_STATE");

    public: GameState* WAIT_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance()->createGameState("WAIT_LEVEL_INTERMISSION_GAME_STATE");

    public: GameState* SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance()->createGameState("SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE");

    public: GameState* SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory::getInstance()->createGameState("SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE");

};

            


        #endif //ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_H
