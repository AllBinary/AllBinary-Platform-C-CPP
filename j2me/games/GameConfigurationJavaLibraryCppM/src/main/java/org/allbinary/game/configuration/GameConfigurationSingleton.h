
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class GameConfiguration;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameConfigurationSingleton
            : public virtual Object
         {

    private: static GameConfigurationSingleton* SINGLETON_owner();
    private: static GameConfigurationSingleton* SINGLETON;

    public: static GameConfigurationSingleton* getInstance();

    private: BasicArrayList* list;

    private: ABHashtable<Object*, Object*>* hashtable;

private: GameConfigurationSingleton();

    public: GameConfiguration* getInstanceByName(std::string name);

    public: BasicArrayList* getOptionsBasicArrayList();

    public: void add(GameConfiguration* gameConfiguration);

    public: ABHashtable<Object*, Object*>* getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/configuration/GameConfiguration.h")
#include "org/allbinary/game/configuration/GameConfiguration.h"
#endif

        #endif
    
