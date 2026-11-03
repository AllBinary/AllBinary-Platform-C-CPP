
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/GameDifficultyFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GameDifficultyFactory::GameDifficultyFactory() {
        }
        auto GameDifficultyFactory::instance_owner() -> GameDifficultyFactory* { static std::unique_ptr<GameDifficultyFactory> value(new GameDifficultyFactory()); return value.get(); }
GameDifficultyFactory* GameDifficultyFactory::instance = GameDifficultyFactory::instance_owner();

    auto GameDifficultyFactory::getInstance() -> GameDifficultyFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameDifficultyFactory::instance;
    
}


    auto GameDifficultyFactory::setLevel(int32_t level) -> void{
this->level= level;
    
}


    auto GameDifficultyFactory::getLevel() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->level;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_CPP
