
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMELIMITEDCOMMANDTEXTITEMARRAYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMELIMITEDCOMMANDTEXTITEMARRAYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameLimitedCommandTextItemArrayFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/LimitCommandsVisitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameLimitedCommandTextItemArrayFactory::GameLimitedCommandTextItemArrayFactory() : commandTextItemArrayFactory(new CommandTextItemArrayFactory(new LimitCommandsVisitor())) {
        }
        auto GameLimitedCommandTextItemArrayFactory::instance_owner() -> GameLimitedCommandTextItemArrayFactory* { static std::unique_ptr<GameLimitedCommandTextItemArrayFactory> value(new GameLimitedCommandTextItemArrayFactory()); return value.get(); }
GameLimitedCommandTextItemArrayFactory* GameLimitedCommandTextItemArrayFactory::instance = GameLimitedCommandTextItemArrayFactory::instance_owner();

    auto GameLimitedCommandTextItemArrayFactory::getInstance() -> GameLimitedCommandTextItemArrayFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameLimitedCommandTextItemArrayFactory::instance;
    
}


    auto GameLimitedCommandTextItemArrayFactory::getCommandTextItemArrayFactory() -> CommandTextItemArrayFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandTextItemArrayFactory;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMELIMITEDCOMMANDTEXTITEMARRAYFACTORY_CPP
