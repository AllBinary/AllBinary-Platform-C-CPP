
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/GameConfigurationSingleton.h"
        

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

auto GameConfigurationSingleton::SINGLETON_owner() -> GameConfigurationSingleton* { static std::unique_ptr<GameConfigurationSingleton> value(new GameConfigurationSingleton()); return value.get(); }
GameConfigurationSingleton* GameConfigurationSingleton::SINGLETON = GameConfigurationSingleton::SINGLETON_owner();

    auto GameConfigurationSingleton::getInstance() -> GameConfigurationSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationSingleton::SINGLETON;
    
}


GameConfigurationSingleton::GameConfigurationSingleton(){
this->list= new BasicArrayListD();
    
this->hashtable= StdUtil::getInstance()->createHashtable();
    
}


    auto GameConfigurationSingleton::getInstanceByName(std::string name) -> GameConfiguration*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<GameConfiguration*>(this->hashtable->get(name));
    
}


    auto GameConfigurationSingleton::getOptionsBasicArrayList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    auto GameConfigurationSingleton::add(GameConfiguration* gameConfiguration) -> void{
this->list->add(gameConfiguration);
    
}


    auto GameConfigurationSingleton::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_GAMECONFIGURATIONSINGLETON_CPP
