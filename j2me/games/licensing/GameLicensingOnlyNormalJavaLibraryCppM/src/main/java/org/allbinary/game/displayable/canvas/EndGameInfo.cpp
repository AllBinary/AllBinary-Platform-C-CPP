
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EndGameInfo
            : public Object
         {

    private: const std::string NORMAL_GAME_OVER = "Game Over";

    protected: const std::string NORMAL_GAME_OVER_WIN = "You Won";

    private: std::string gameOverStr = StringUtil::getInstance()->EMPTY_STRING;

    private: std::string winStr = this->gameOverStr;

public: EndGameInfo(){
}


    public: void update(GameInfo* gameInfo, MyCanvas* myCanvas){
this->setGameOverStr(this->NORMAL_GAME_OVER);
    
this->setWinStr(this->NORMAL_GAME_OVER_WIN);
    
}


    public: std::string getGameOverStr(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameOverStr;
    
}


    public: void setGameOverStr(std::string gameOverStr){
this->gameOverStr= gameOverStr;
    
}


    public: std::string getWinStr(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->winStr;
    
}


    public: void setWinStr(std::string winStr){
this->winStr= winStr;
    
}


};

            

