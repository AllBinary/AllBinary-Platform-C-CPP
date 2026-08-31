
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
        

    const NORMAL_GAME_OVER_WIN: string = "You Won";

    private: const TEASER_DEMO_GAME_END_LAST_LEVEL: string = "End of Demo.";

    private: const TEASER_DEMO_GAME_END: string = "Demo Game Over.";

    private: gameOverStr: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: winStr: string = this.gameOverStr;

    public update(GameInfo gameInfo, MyCanvas myCanvas){

                        if(gameInfo!.isLastLevel())
                        
                                    {
                                    this.setWinStr(this.TEASER_DEMO_GAME_END_LAST_LEVEL);
    
this.setGameOverStr(this.TEASER_DEMO_GAME_END_LAST_LEVEL);
    

                                    }
                                
                        else {
                            this.setWinStr(this.NORMAL_GAME_OVER_WIN);
    
this.setGameOverStr(this.TEASER_DEMO_GAME_END);
    

                        }
                            
}


    public string getGameOverStr(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameOverStr;
    
}


    public setGameOverStr(string gameOverStr){
this.gameOverStr= gameOverStr;
    
}


    public string getWinStr(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.winStr;
    
}


    public setWinStr(string winStr){
this.winStr= winStr;
    
}


};

            

