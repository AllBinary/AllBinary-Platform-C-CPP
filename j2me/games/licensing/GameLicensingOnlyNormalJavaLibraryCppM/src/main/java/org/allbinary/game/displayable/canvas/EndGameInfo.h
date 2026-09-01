
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EndGameInfo
            : public Object
         {

    private: const std::string NORMAL_GAME_OVER = "Game Over";

    protected: const std::string NORMAL_GAME_OVER_WIN = "You Won";

    private: std::string gameOverStr = StringUtil::getInstance().EMPTY_STRING;

    private: std::string winStr = this->gameOverStr;

public: EndGameInfo();

    public: void update(GameInfo gameInfo, MyCanvas myCanvas);

    public: std::string getGameOverStr();

    public: void setGameOverStr(std::string gameOverStr);

    public: std::string getWinStr();

    public: void setWinStr(std::string winStr);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
