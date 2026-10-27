
        /* Generated Code Do Not Modify */
        



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
        
class GameMidletStateFactory
            : public Object
         {

    private: static GameMidletStateFactory* INSTANCE() { static std::unique_ptr<GameMidletStateFactory> value(new GameMidletStateFactory()); return value.get(); }

    public: static GameMidletStateFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameMidletStateFactory::INSTANCE();
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: GameState* currentGameState = GameStateFactory::getInstance()->NO_GAME_STATE;

private: GameMidletStateFactory(){
}


    public: GameState* getCurrentGameState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentGameState;
    
}


    public: void setCurrentGameState(GameState* currentGameState){
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->CURRENT)->append(" GameState: ")->append(StringUtil::getInstance()->toString(currentGameState))->toString(), this, "setCurrentGameState");
    
this->currentGameState= currentGameState;
    
}


};

            

