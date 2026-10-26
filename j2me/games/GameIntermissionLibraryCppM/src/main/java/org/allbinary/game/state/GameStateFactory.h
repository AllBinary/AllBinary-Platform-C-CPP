
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

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameState.h"

class GameStateFactory
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static GameStateFactory getInstance();

    private: int32_t index = 0;

    public: const GameState NO_GAME_STATE = this->createGameState("NO_GAME_STATE");

    public: const GameState PLAYING_GAME_STATE = this->createGameState("PLAYING_GAME_STATE");

    public: const GameState SHOW_END_RESULT_GAME_STATE = this->createGameState("SHOW_END_RESULT_GAME_STATE");

    public: const GameState SHOW_HIGH_SCORE_GAME_STATE = this->createGameState("SHOW_HIGH_SCORE_GAME_STATE");

private: GameStateFactory();

    public: GameState createGameState(std::string name);

};

            


        #endif //ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
