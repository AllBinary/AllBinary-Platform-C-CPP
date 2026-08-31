
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H

            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/state/GameState.h>

      
#include <org/allbinary/game/state/GameStateFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameMidletStateFactory
            : public Object
         {
        

    private: static const INSTANCE: GameMidletStateFactory = new GameMidletStateFactory();

    public static GameMidletStateFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: currentGameState: GameState = GameStateFactory.getInstance()!.NO_GAME_STATE;

private constructor ();

    public GameState getCurrentGameState();

    public setCurrentGameState(GameState currentGameState);

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
