
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/GameConfiguration.h"

class GameConfigurationSingleton
            : public Object
         {

    private: static GameConfigurationSingleton* SINGLETON() { static std::unique_ptr<GameConfigurationSingleton> value(new GameConfigurationSingleton()); return value.get(); }

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
