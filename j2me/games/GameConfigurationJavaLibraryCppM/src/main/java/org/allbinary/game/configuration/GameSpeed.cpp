
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameSpeed.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/game/configuration/GameConfiguration.h"


GameSpeed::GameSpeed() {
        }
        auto GameSpeed::instance_owner() -> GameSpeed* { static std::unique_ptr<GameSpeed> value(new GameSpeed()); return value.get(); }
GameSpeed* GameSpeed::instance = GameSpeed::instance_owner();

    auto GameSpeed::getSpeed() -> int32_t{

    GameConfiguration* speedGameConfiguration = GameConfigurationCentral::getInstance()->SPEED;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (speedGameConfiguration->getMaxValue()->intValue() -speedGameConfiguration->getValue()->intValue() +1);
    
}


    auto GameSpeed::getDelay() -> int32_t{

    GameConfiguration* speedGameConfiguration = GameConfigurationCentral::getInstance()->SPEED;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 19 *(speedGameConfiguration->getMaxValue()->intValue() -speedGameConfiguration->getValue()->intValue());
    
}


    auto GameSpeed::getInstance() -> GameSpeed*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameSpeed::instance;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_CPP
