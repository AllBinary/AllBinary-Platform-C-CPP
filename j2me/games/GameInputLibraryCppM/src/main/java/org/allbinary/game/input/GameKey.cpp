
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

        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/Input.h"

class GameKey: public Input {

    public: static GameKey* NULL_GAME_KEY() { static std::unique_ptr<GameKey> value(new GameKey( -1, StringUtil::getInstance()->NULL_STRING)); return value.get(); }

: GameKey(int32_t key, std::string name) : Input(key, name){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append("GameKey ")->append(super.toString())->toString();;
    
}


};

            

