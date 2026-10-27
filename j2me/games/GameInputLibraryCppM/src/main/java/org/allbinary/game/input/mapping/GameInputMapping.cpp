
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/GameInputMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameInputMapping::GameInputMapping(std::string name, GameKey* gameKey) : name(StringUtil::getInstance()->EMPTY_STRING), gameKey(GameKey::NULL_GAME_KEY){
this->setName(name);
    
this->setGameKey(gameKey);
    
}


    auto GameInputMapping::setGameKey(GameKey* gameKey) -> void{
this->gameKey= gameKey;
    
}


    auto GameInputMapping::getGameKey() -> GameKey*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->gameKey;
    
}


    auto GameInputMapping::setName(std::string name) -> void{
this->name= name;
    
}


    auto GameInputMapping::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_CPP
