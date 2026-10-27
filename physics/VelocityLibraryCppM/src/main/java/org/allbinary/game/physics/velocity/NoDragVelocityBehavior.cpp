
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/velocity/NoDragVelocityBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"


NoDragVelocityBehavior::NoDragVelocityBehavior() {
        }
        auto NoDragVelocityBehavior::instance_owner() -> NoDragVelocityBehavior* { static std::unique_ptr<NoDragVelocityBehavior> value(new NoDragVelocityBehavior()); return value.get(); }
NoDragVelocityBehavior* NoDragVelocityBehavior::instance = NoDragVelocityBehavior::instance_owner();



        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_NODRAGVELOCITYBEHAVIOR_CPP
