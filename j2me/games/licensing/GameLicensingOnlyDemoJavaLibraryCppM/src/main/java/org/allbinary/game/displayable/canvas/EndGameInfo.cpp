
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EndGameInfo
            : public Object
         {

    protected: const std::string NORMAL_GAME_OVER_WIN = "You Won";

    private: const std::string TEASER_DEMO_GAME_END_LAST_LEVEL = "End of Demo.";

    private: const std::string TEASER_DEMO_GAME_END = "Demo Game Over.";

    private: std::string gameOverStr = StringUtil::getInstance().EMPTY_STRING;

    private: std::string winStr = this->gameOverStr;

    public: void update(GameInfo gameInfo, MyCanvas myCanvas){

                        if(gameInfo.isLastLevel())
                        
                                    {
                                    this->setWinStr(this->TEASER_DEMO_GAME_END_LAST_LEVEL);
    
this->setGameOverStr(this->TEASER_DEMO_GAME_END_LAST_LEVEL);
    

                                    }
                                
                        else {
                            this->setWinStr(this->NORMAL_GAME_OVER_WIN);
    
this->setGameOverStr(this->TEASER_DEMO_GAME_END);
    

                        }
                            
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

            

