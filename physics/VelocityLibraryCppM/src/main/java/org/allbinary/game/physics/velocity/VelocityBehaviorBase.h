
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicVelocityProperties;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VelocityBehaviorBase
            : public virtual Object
         {


            
    public: VelocityBehaviorBase();
        
    public: void reduce(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceX(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

    public: void reduceY(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator);

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYBEHAVIORBASE_H_COMPLETE
        #if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif

        #endif
    
