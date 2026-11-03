
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
        



        #ifndef ORG_ALLBINARY_GAME_GAMETYPEFACTORY_CPP
        #define ORG_ALLBINARY_GAME_GAMETYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/GameTypeFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/GameType.h"


GameTypeFactory::GameTypeFactory() : NULL_GAME_TYPE_ARRAY({}), NONE(new GameType(StringUtil::getInstance()->NULL_STRING)), SINGLE_PLAYER(new GameType("Single Player")), MULTI_PLAYER(new GameType("Multi Player")), BOT(new GameType("Artificial Player")) {
        }
        auto GameTypeFactory::instance_owner() -> GameTypeFactory* { static std::unique_ptr<GameTypeFactory> value(new GameTypeFactory()); return value.get(); }
GameTypeFactory* GameTypeFactory::instance = GameTypeFactory::instance_owner();

    auto GameTypeFactory::getInstance() -> GameTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_GAMETYPEFACTORY_CPP
