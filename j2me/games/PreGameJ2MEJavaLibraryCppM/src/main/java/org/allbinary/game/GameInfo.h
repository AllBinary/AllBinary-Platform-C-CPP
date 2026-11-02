
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMEINFO_H
        #define ORG_ALLBINARY_GAME_GAMEINFO_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class LogUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
class StdUtil;
class CommonLabels;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameTypeFactory;
class GameMode;
class PlayerTypesFactory;
class GameInfoData;
class GameType;
class PlayerType;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInfo
            : public virtual Object
         {

    private: static GameInfo* NONE_owner();
    public: static GameInfo* NONE;

    public: static inline const std::string LEVEL_NAME = "LEVEL";

    /*protected*/ public: LogUtil* logUtil;

    private: GameInfoData* gameInfoData;

    private: GameType* gameType;

    private: GameMode* gameMode;

    private: PlayerType* playerType;

    private: int32_t highestLevel= 0;

    private: int32_t currentLevel;

public: GameInfo(GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel);

    public: GameType* getGameType();

    public: GameMode* getGameMode();

    public: PlayerType* getPlayerType();

    public: int32_t getHighestLevel();

    public: void setHighestLevel(int32_t highestLevel);

    public: int32_t getCurrentLevel();

    private: const std::string NEW_LEVEL = "New Level: ";

    private: const std::string SET_CURRENT_LEVEL = "setCurrentLevel";

    public: void setCurrentLevel(int32_t currentLevel);

    private: const std::string NEXT_GAME_LEVEL = "nextGameLevel";

    public: void nextGameLevel();

    public: void previousGameLevel();

    public: bool isLastLevel();

    public: ABHashtable<Object*, Object*>* toHashtable();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_GAMEINFO_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_GAMEINFO_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_GAMEINFO_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/GameTypeFactory.h")
#include "org/allbinary/game/GameTypeFactory.h"
#endif
#if __has_include("org/allbinary/game/GameMode.h")
#include "org/allbinary/game/GameMode.h"
#endif
#if __has_include("org/allbinary/game/PlayerTypesFactory.h")
#include "org/allbinary/game/PlayerTypesFactory.h"
#endif
#if __has_include("org/allbinary/game/GameInfoData.h")
#include "org/allbinary/game/GameInfoData.h"
#endif
#if __has_include("org/allbinary/game/GameType.h")
#include "org/allbinary/game/GameType.h"
#endif
#if __has_include("org/allbinary/game/PlayerType.h")
#include "org/allbinary/game/PlayerType.h"
#endif

        #endif
    
