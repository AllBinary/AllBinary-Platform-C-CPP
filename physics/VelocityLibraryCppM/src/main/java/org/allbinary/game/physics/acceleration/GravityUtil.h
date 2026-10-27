
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GravityUtil
            : public Object
         {

    private: static GravityUtil* instance() { static std::unique_ptr<GravityUtil> value(new GravityUtil()); return value.get(); }

    public: static GravityUtil* getInstance();

    public: const int32_t GAME_GRAVITY_VELOCITY = 1800;

    public: const int32_t MAX_GAME_VELOCITY = 18000;

    public: void process(BasicVelocityProperties* velocityProperties, int32_t customGravity);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_H
