
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H
        #define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicVelocityProperties;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GravityUtil
            : public virtual Object
         {

    private: static GravityUtil* instance_owner();
    private: static GravityUtil* instance;

    public: static GravityUtil* getInstance();


            
    public: GravityUtil();
        
    public: const int32_t GAME_GRAVITY_VELOCITY = 1800;

    public: const int32_t MAX_GAME_VELOCITY = 18000;

    public: void process(BasicVelocityProperties* velocityProperties, int32_t customGravity);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/game/physics/velocity/BasicVelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>
#endif

        #endif
    
