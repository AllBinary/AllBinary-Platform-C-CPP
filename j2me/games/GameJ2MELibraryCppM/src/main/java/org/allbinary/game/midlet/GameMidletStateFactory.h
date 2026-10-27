
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class GameState;
class GameStateFactory;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameMidletStateFactory
            : public virtual Object
         {

    private: static GameMidletStateFactory* INSTANCE_owner();
    private: static GameMidletStateFactory* INSTANCE;

    public: static GameMidletStateFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    private: GameState* currentGameState;

private: GameMidletStateFactory();

    public: GameState* getCurrentGameState();

    public: void setCurrentGameState(GameState* currentGameState);

};

            


        #endif //ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_MIDLET_GAMEMIDLETSTATEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/state/GameState.h>)
#include <org/allbinary/game/state/GameState.h>
#endif
#if __has_include(<org/allbinary/game/state/GameStateFactory.h>)
#include <org/allbinary/game/state/GameStateFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif

        #endif
    
