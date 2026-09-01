
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

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "KeyValuePersistance.h"
#include "GamePersistanceStrings.h"

class GameConfigurationPersistanceSingleton: public KeyValuePersistance {

    private: static GameConfigurationPersistanceSingleton GAME_PERSISTANCE = GameConfigurationPersistanceSingleton();

    public: static GameConfigurationPersistanceSingleton getInstance();

private: GameConfigurationPersistanceSingleton();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H
