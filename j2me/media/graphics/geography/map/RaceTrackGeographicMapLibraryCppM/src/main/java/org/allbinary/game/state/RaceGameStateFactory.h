
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/state/GameStateFactory.h"
#include "org/allbinary/game/state/GameState.h"

class RaceGameStateFactory
            : public Object
         {

    private: static inline Object* instance = NullUtil::getInstance()->NULL_OBJECT;

    public: static RaceGameStateFactory* getInstance();

    public: GameState* START_GAME_STATE = GameStateFactory::getInstance()->createGameState("START_GAME_STATE");

    public: GameState* YELLOW_LIGHT_GAME_STATE = GameStateFactory::getInstance()->createGameState("YELLOW_LIGHT_GAME_STATE");

    public: GameState* RED_LIGHT_GAME_STATE = GameStateFactory::getInstance()->createGameState("RED_LIGHT_GAME_STATE");

};

            


        #endif //ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H
