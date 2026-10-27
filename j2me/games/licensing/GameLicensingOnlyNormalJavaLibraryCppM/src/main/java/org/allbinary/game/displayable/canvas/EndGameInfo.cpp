
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/EndGameInfo.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

EndGameInfo::EndGameInfo() : gameOverStr(StringUtil::getInstance()->EMPTY_STRING), winStr(this->gameOverStr){
}


    auto EndGameInfo::update(GameInfo* gameInfo, MyCanvas* myCanvas) -> void{
this->setGameOverStr(this->NORMAL_GAME_OVER);
    
this->setWinStr(this->NORMAL_GAME_OVER_WIN);
    
}


    auto EndGameInfo::getGameOverStr() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameOverStr;
    
}


    auto EndGameInfo::setGameOverStr(std::string gameOverStr) -> void{
this->gameOverStr= gameOverStr;
    
}


    auto EndGameInfo::getWinStr() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->winStr;
    
}


    auto EndGameInfo::setWinStr(std::string winStr) -> void{
this->winStr= winStr;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_CPP
