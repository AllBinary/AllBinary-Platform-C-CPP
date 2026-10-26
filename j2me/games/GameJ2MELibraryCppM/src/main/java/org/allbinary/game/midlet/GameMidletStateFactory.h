
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H

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

    private: static const GameMidletStateFactory INSTANCE = GameMidletStateFactory();

    public: static GameMidletStateFactory getInstance();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GameState currentGameState = GameStateFactory::getInstance().NO_GAME_STATE;

private: GameMidletStateFactory();

    public: GameState getCurrentGameState();

    public: void setCurrentGameState(GameState currentGameState);

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
