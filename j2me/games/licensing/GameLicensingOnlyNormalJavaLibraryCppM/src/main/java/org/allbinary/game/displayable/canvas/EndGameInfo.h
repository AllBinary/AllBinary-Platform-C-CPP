
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
        

    private: const NORMAL_GAME_OVER: string = "Game Over";

    const NORMAL_GAME_OVER_WIN: string = "You Won";

    private: gameOverStr: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: winStr: string = this.gameOverStr;

public constructor ();

    public update(GameInfo gameInfo, MyCanvas myCanvas);

    public string getGameOverStr();

    public setGameOverStr(string gameOverStr);

    public string getWinStr();

    public setWinStr(string winStr);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_ENDGAMEINFO_H
