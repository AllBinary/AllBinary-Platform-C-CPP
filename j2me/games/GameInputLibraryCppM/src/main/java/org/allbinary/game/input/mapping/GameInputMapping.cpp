
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

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMapping
            : public Object
         {
        

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: gameKey: GameKey = GameKey.NULL_GAME_KEY;

public constructor (string name, GameKey gameKey){

            super();
        this.setName(name);
    
this.setGameKey(gameKey);
    
}


    setGameKey(GameKey gameKey){
this.gameKey= gameKey;
    
}


    public GameKey getGameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.gameKey;
    
}


    setName(string name){
this.name= name;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

