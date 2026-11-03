
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
        



        #ifndef ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/state/GameStateFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/state/GameState.h"

Object* GameStateFactory::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto GameStateFactory::getInstance() -> GameStateFactory*{

                        if(GameStateFactory::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    GameStateFactory::instance= new GameStateFactory();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<GameStateFactory*>(GameStateFactory::instance);
    
}


GameStateFactory::GameStateFactory() : NO_GAME_STATE(this->createGameState("NO_GAME_STATE")), PLAYING_GAME_STATE(this->createGameState("PLAYING_GAME_STATE")), SHOW_END_RESULT_GAME_STATE(this->createGameState("SHOW_END_RESULT_GAME_STATE")), SHOW_HIGH_SCORE_GAME_STATE(this->createGameState("SHOW_HIGH_SCORE_GAME_STATE")){
}


    auto GameStateFactory::createGameState(std::string name) -> GameState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new GameState(name, this->index++);
    
}




        #endif //ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_CPP
