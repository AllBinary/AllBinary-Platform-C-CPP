
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/acceleration/GravityUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

GravityUtil::GravityUtil() {
        }
        auto GravityUtil::instance_owner() -> GravityUtil* { static std::unique_ptr<GravityUtil> value(new GravityUtil()); return value.get(); }
GravityUtil* GravityUtil::instance = GravityUtil::instance_owner();

    auto GravityUtil::getInstance() -> GravityUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GravityUtil::instance;
    
}


    auto GravityUtil::process(BasicVelocityProperties* velocityProperties, int32_t customGravity) -> void{
velocityProperties->getVelocityYBasicDecimalP()->addint(customGravity);
    
}




        #endif //ORG_ALLBINARY_GAME_PHYSICS_ACCELERATION_GRAVITYUTIL_CPP
