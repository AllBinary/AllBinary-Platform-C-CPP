
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

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameTypeFactory.h"
#include "GameMode.h"
#include "PlayerTypesFactory.h"
#include "GameInfoData.h"
#include "GameType.h"
#include "PlayerType.h"

class GameInfo
            : public Object
         {

    public: static const GameInfo NONE = GameInfo(GameTypeFactory::getInstance().NONE, GameMode::NONE, PlayerTypesFactory::getInstance().PLAYER_TYPE_ONE,  -1,  -1);

    public: static const std::string LEVEL_NAME = "LEVEL";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const GameInfoData gameInfoData = GameInfoData::getInstance();

    private: GameType gameType;

    private: GameMode gameMode;

    private: PlayerType playerType;

    private: int32_t highestLevel= 0;

    private: int32_t currentLevel;

public: GameInfo(GameType gameType, GameMode gameMode, PlayerType playerType, int32_t highestLevel, int32_t currentLevel);

    public: GameType getGameType();

    public: GameMode getGameMode();

    public: PlayerType getPlayerType();

    public: int32_t getHighestLevel();

    public: void setHighestLevel(int32_t highestLevel);

    public: int32_t getCurrentLevel();

    private: const std::string NEW_LEVEL = "New Level: ";

    private: const std::string SET_CURRENT_LEVEL = "setCurrentLevel";

    public: void setCurrentLevel(int32_t currentLevel);

    private: const std::string NEXT = "Next ";

    private: const std::string NEXT_GAME_LEVEL = "nextGameLevel";

    public: void nextGameLevel();

    public: void previousGameLevel();

    public: bool isLastLevel();

    public: Hashtable<any, any> toHashtable();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_GAMEINFO_H
