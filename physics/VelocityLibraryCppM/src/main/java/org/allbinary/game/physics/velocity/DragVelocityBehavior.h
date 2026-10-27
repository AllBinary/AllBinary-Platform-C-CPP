
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicDecimal;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"
class BasicVelocityProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DragVelocityBehavior: public VelocityBehaviorBase {

    private: static DragVelocityBehavior* instance_owner();
    public: static DragVelocityBehavior* instance;


            
    public: DragVelocityBehavior();
        
    public: void reduce(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceX(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceY(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include("org/allbinary/game/physics/velocity/VelocityBehaviorBase.h")
#include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"
#endif
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif

        #endif
    
