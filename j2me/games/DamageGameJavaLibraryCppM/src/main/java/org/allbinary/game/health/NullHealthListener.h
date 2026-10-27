
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H
        #define ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthListenerInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullHealthListener
            : public virtual Object
        , public HealthListenerInterface {

    private: static NullHealthListener* NULL_HEALTH_LISTENER_owner();
    public: static NullHealthListener* NULL_HEALTH_LISTENER;


            
    public: NullHealthListener();
        
    public: void onHealthChange();

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_HEALTH_NULLHEALTHLISTENER_H_COMPLETE
        #if __has_include("org/allbinary/game/health/HealthListenerInterface.h")
#include "org/allbinary/game/health/HealthListenerInterface.h"
#endif

        #endif
    
