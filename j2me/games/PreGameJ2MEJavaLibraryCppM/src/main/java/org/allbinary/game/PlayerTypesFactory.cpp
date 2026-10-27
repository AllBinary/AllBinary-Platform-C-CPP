
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
        



        #ifndef ORG_ALLBINARY_GAME_PLAYERTYPESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_PLAYERTYPESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/PlayerTypesFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/PlayerType.h"


PlayerTypesFactory::PlayerTypesFactory() : PLAYER_TYPE_ONE(new PlayerType("Player Type One", 0)), PLAYER_TYPE_TWO(new PlayerType("Player Type Two", 1)), PLAYER_TYPE_THREE(new PlayerType("Player Type Three", 2)) {
        }
        auto PlayerTypesFactory::SINGLETON_owner() -> PlayerTypesFactory* { static std::unique_ptr<PlayerTypesFactory> value(new PlayerTypesFactory()); return value.get(); }
PlayerTypesFactory* PlayerTypesFactory::SINGLETON = PlayerTypesFactory::SINGLETON_owner();

    auto PlayerTypesFactory::getInstance() -> PlayerTypesFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlayerTypesFactory::SINGLETON;
    
}




        #endif //ORG_ALLBINARY_GAME_PLAYERTYPESFACTORY_CPP
