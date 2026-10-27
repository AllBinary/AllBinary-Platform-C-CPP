
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/GamePersistanceSingleton.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"
#include "org/allbinary/game/configuration/persistance/GamePersistanceStrings.h"

auto GamePersistanceSingleton::GAME_PERSISTANCE_owner() -> GamePersistanceSingleton* { static std::unique_ptr<GamePersistanceSingleton> value(new GamePersistanceSingleton()); return value.get(); }
GamePersistanceSingleton* GamePersistanceSingleton::GAME_PERSISTANCE = GamePersistanceSingleton::GAME_PERSISTANCE_owner();

    auto GamePersistanceSingleton::getInstance() -> GamePersistanceSingleton*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GamePersistanceSingleton::GAME_PERSISTANCE;
    
}


GamePersistanceSingleton::GamePersistanceSingleton() : KeyValuePersistance(GamePersistanceStrings::getInstance()->SAVED_GAME_RECORD_ID){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEPERSISTANCESINGLETON_CPP
