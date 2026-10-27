
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
class GamePersistanceStrings;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameConfigurationPersistanceSingleton: public KeyValuePersistance {

    private: static GameConfigurationPersistanceSingleton* GAME_PERSISTANCE_owner();
    private: static GameConfigurationPersistanceSingleton* GAME_PERSISTANCE;

    public: static GameConfigurationPersistanceSingleton* getInstance();

private: GameConfigurationPersistanceSingleton();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMECONFIGURATIONPERSISTANCESINGLETON_H_COMPLETE
        #if __has_include("org/allbinary/game/configuration/persistance/KeyValuePersistance.h")
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/GamePersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"
#endif

        #endif
    
