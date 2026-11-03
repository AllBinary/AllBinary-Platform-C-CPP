
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMEMODE_CPP
        #define ORG_ALLBINARY_GAME_GAMEMODE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/GameMode.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto GameMode::NONE_owner() -> GameMode* { static std::unique_ptr<GameMode> value(new GameMode(StringUtil::getInstance()->NULL_STRING)); return value.get(); }
GameMode* GameMode::NONE = GameMode::NONE_owner();
auto GameMode::SERVER_owner() -> GameMode* { static std::unique_ptr<GameMode> value(new GameMode("Server")); return value.get(); }
GameMode* GameMode::SERVER = GameMode::SERVER_owner();
auto GameMode::CLIENT_owner() -> GameMode* { static std::unique_ptr<GameMode> value(new GameMode("Client")); return value.get(); }
GameMode* GameMode::CLIENT = GameMode::CLIENT_owner();

GameMode::GameMode(std::string name) : name(StringUtil::getInstance()->EMPTY_STRING){
this->setName(name);
    
}


    auto GameMode::setName(std::string name) -> void{
this->name= name;
    
}


    auto GameMode::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto GameMode::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getName();;
    
}




        #endif //ORG_ALLBINARY_GAME_GAMEMODE_CPP
