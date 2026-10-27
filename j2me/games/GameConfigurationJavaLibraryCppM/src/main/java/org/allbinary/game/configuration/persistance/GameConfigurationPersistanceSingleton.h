
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"

class GameConfigurationPersistanceSingleton: public KeyValuePersistance {

    private: static GameConfigurationPersistanceSingleton* GAME_PERSISTANCE() { static std::unique_ptr<GameConfigurationPersistanceSingleton> value(new GameConfigurationPersistanceSingleton()); return value.get(); }

    public: static GameConfigurationPersistanceSingleton* getInstance();

private: GameConfigurationPersistanceSingleton();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
