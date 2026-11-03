
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
        



        #ifndef ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_CPP
        #define ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/IntermissionFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

IntermissionFactory::IntermissionFactory() : START_LEVEL_INTERMISSION_GAME_STATE(GameStateFactory::getInstance()->createGameState("START_LEVEL_INTERMISSION_GAME_STATE")), WAIT_LEVEL_INTERMISSION_GAME_STATE(GameStateFactory::getInstance()->createGameState("WAIT_LEVEL_INTERMISSION_GAME_STATE")), SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE(GameStateFactory::getInstance()->createGameState("SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE")), SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE(GameStateFactory::getInstance()->createGameState("SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE")) {
        }
        auto IntermissionFactory::instance_owner() -> IntermissionFactory* { static std::unique_ptr<IntermissionFactory> value(new IntermissionFactory()); return value.get(); }
IntermissionFactory* IntermissionFactory::instance = IntermissionFactory::instance_owner();

    auto IntermissionFactory::getInstance() -> IntermissionFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return IntermissionFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_INTERMISSIONFACTORY_CPP
