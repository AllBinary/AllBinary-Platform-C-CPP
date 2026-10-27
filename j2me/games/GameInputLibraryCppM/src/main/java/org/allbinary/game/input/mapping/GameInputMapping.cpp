
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
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameInputMapping
            : public Object
         {

    private: std::string name = StringUtil::getInstance()->EMPTY_STRING;

    private: GameKey* gameKey = GameKey::NULL_GAME_KEY;

public: GameInputMapping(std::string name, GameKey* gameKey){
this->setName(name);
    
this->setGameKey(gameKey);
    
}


    private: void setGameKey(GameKey* gameKey){
this->gameKey= gameKey;
    
}


    public: GameKey* getGameKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKey;
    
}


    private: void setName(std::string name){
this->name= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

