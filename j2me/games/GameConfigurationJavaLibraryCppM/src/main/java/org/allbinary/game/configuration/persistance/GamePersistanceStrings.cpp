
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GamePersistanceStrings::GamePersistanceStrings() {
        }
        auto GamePersistanceStrings::instance_owner() -> GamePersistanceStrings* { static std::unique_ptr<GamePersistanceStrings> value(new GamePersistanceStrings()); return value.get(); }
GamePersistanceStrings* GamePersistanceStrings::instance = GamePersistanceStrings::instance_owner();

    auto GamePersistanceStrings::getInstance() -> GamePersistanceStrings*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GamePersistanceStrings::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESTRINGS_CPP
