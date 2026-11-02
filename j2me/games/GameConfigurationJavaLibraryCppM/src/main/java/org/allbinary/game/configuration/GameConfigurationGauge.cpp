
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfigurationGauge.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Gauge.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfiguration.h"


GameConfigurationGauge::GameConfigurationGauge(GameConfiguration* gameConfiguration) : Gauge(gameConfiguration->getName(), JavaBoxes::value<bool>(gameConfiguration->isModifiable()), JavaBoxes::value<int32_t>(gameConfiguration->getMaxValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue()), JavaBoxes::value<int32_t>(gameConfiguration->getValue()) -JavaBoxes::value<int32_t>(gameConfiguration->getMinValue())){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONGAUGE_CPP
