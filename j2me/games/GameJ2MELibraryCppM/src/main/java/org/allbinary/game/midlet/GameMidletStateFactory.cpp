
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/midlet/GameMidletStateFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameMidletStateFactory::INSTANCE_owner() -> GameMidletStateFactory* { static std::unique_ptr<GameMidletStateFactory> value(new GameMidletStateFactory()); return value.get(); }
GameMidletStateFactory* GameMidletStateFactory::INSTANCE = GameMidletStateFactory::INSTANCE_owner();

GameMidletStateFactory::GameMidletStateFactory() : logUtil(LogUtil::getInstance()), currentGameState(GameStateFactory::getInstance()->NO_GAME_STATE){
}


    auto GameMidletStateFactory::getInstance() -> GameMidletStateFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameMidletStateFactory::INSTANCE;
    
}


    auto GameMidletStateFactory::getCurrentGameState() -> GameState*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGameState;
    
}


    auto GameMidletStateFactory::setCurrentGameState(GameState* currentGameState) -> void{
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->CURRENT)->append(" GameState: ")->append(StringUtil::getInstance()->toString(currentGameState))->toString(), this, "setCurrentGameState");
    
this->currentGameState= currentGameState;
    
}




        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_CPP
