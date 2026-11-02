
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMEINFO_CPP
        #define ORG_ALLBINARY_GAME_GAMEINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/GameInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/GameTypeFactory.h"
#include "org/allbinary/game/GameMode.h"
#include "org/allbinary/game/PlayerTypesFactory.h"
#include "org/allbinary/game/GameInfoData.h"
#include "org/allbinary/game/GameType.h"
#include "org/allbinary/game/PlayerType.h"

auto GameInfo::NONE_owner() -> GameInfo* { static std::unique_ptr<GameInfo> value(new GameInfo(GameTypeFactory::getInstance()->NONE, GameMode::NONE, PlayerTypesFactory::getInstance()->PLAYER_TYPE_ONE,  -1,  -1)); return value.get(); }
GameInfo* GameInfo::NONE = GameInfo::NONE_owner();

GameInfo::GameInfo(GameType* gameType, GameMode* gameMode, PlayerType* playerType, int32_t highestLevel, int32_t currentLevel) : logUtil(LogUtil::getInstance()), gameInfoData(GameInfoData::getInstance()){
this->gameType= gameType;
    
this->gameMode= gameMode;
    
this->setHighestLevel(highestLevel);
    
this->currentLevel= currentLevel;
    
this->playerType= playerType;
    
}


    auto GameInfo::getGameType() -> GameType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameType;
    
}


    auto GameInfo::getGameMode() -> GameMode*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameMode;
    
}


    auto GameInfo::getPlayerType() -> PlayerType*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->playerType;
    
}


    auto GameInfo::getHighestLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highestLevel;
    
}


    auto GameInfo::setHighestLevel(int32_t highestLevel) -> void{
this->highestLevel= highestLevel;
    
}


    auto GameInfo::getCurrentLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentLevel;
    
}


    auto GameInfo::setCurrentLevel(int32_t currentLevel) -> void{
this->currentLevel= currentLevel;
    
this->logUtil->putF((new StringMaker())->append(this->NEW_LEVEL)->appendint(this->getCurrentLevel())->toString(), this, this->SET_CURRENT_LEVEL);
    
}


    auto GameInfo::nextGameLevel() -> void{

                        if(this->getCurrentLevel() < this->getHighestLevel())
                        
                                    {
                                    this->currentLevel++;
    

                                    }
                                
this->logUtil->putF((new StringMaker())->append(CommonLabels::getInstance()->NEXT)->append(CommonSeps::getInstance()->SPACE)->append(this->NEW_LEVEL)->appendint(this->getCurrentLevel())->toString(), this, this->NEXT_GAME_LEVEL);
    
}


    auto GameInfo::previousGameLevel() -> void{

                        if(this->getCurrentLevel() > 1)
                        this->currentLevel--;
                                
}


    auto GameInfo::isLastLevel() -> bool{

                        if(this->getCurrentLevel() >= this->getHighestLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto GameInfo::toHashtable() -> ABHashtable<Object*, Object*>*{

    ABHashtable<Object*, Object*>* hashtable = StdUtil::getInstance()->createHashtable();;
    
hashtable->put(this->gameInfoData->GAME_TYPE, this->getGameType()->toString());
    
hashtable->put(this->gameInfoData->GAME_MODE, this->gameMode->toString());
    
hashtable->put(this->gameInfoData->PLAYER_TYPE, this->playerType->toString());
    
hashtable->put(this->gameInfoData->HIGHEST_LEVEL, std::to_string(this->getHighestLevel()));
    
hashtable->put(this->gameInfoData->CURRENT_LEVEL, std::to_string(this->currentLevel));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashtable;
    
}


    auto GameInfo::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    
stringBuffer->append(this->gameInfoData->GAME_TYPE);
    
stringBuffer->append(commonSeps->EQUALS);
    
stringBuffer->append(this->getGameType()->toString());
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
stringBuffer->append(this->gameInfoData->GAME_MODE);
    
stringBuffer->append(commonSeps->EQUALS);
    
stringBuffer->append(this->gameMode->toString());
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
stringBuffer->append(this->gameInfoData->PLAYER_TYPE);
    
stringBuffer->append(commonSeps->EQUALS);
    
stringBuffer->append(StringUtil::getInstance()->toString(this->playerType));
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
stringBuffer->append(this->gameInfoData->HIGHEST_LEVEL);
    
stringBuffer->append(commonSeps->EQUALS);
    
stringBuffer->appendint(this->getHighestLevel());
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
stringBuffer->append(this->gameInfoData->CURRENT_LEVEL);
    
stringBuffer->append(commonSeps->EQUALS);
    
stringBuffer->appendint(this->currentLevel);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_GAMEINFO_CPP
