
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

            #include "../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameStateFactory.h"
#include "GameState.h"

class RaceGameStateFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static RaceGameStateFactory getInstance();

    public: const GameState START_GAME_STATE = GameStateFactory::getInstance().createGameState("START_GAME_STATE");

    public: const GameState YELLOW_LIGHT_GAME_STATE = GameStateFactory::getInstance().createGameState("YELLOW_LIGHT_GAME_STATE");

    public: const GameState RED_LIGHT_GAME_STATE = GameStateFactory::getInstance().createGameState("RED_LIGHT_GAME_STATE");

};

            


        #endif //ORG_ALLBINARY_GAME_STATE_RACEGAMESTATEFACTORY_H
