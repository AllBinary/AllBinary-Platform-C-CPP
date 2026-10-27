
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/NullHealthListener.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthListenerInterface.h"


NullHealthListener::NullHealthListener() {
        }
        auto NullHealthListener::NULL_HEALTH_LISTENER_owner() -> NullHealthListener* { static std::unique_ptr<NullHealthListener> value(new NullHealthListener()); return value.get(); }
NullHealthListener* NullHealthListener::NULL_HEALTH_LISTENER = NullHealthListener::NULL_HEALTH_LISTENER_owner();

    auto NullHealthListener::onHealthChange() -> void{
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_CPP
