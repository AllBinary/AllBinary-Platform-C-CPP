
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VelocityInterface: public BasicVelocityInterface {

    public: virtual int32_t getMaxForwardVelocity() = 0;

    public: virtual int32_t getMaxReverseVelocity() = 0;

    public: virtual void limitMaxXYForwardVelocity() = 0;

    public: virtual void limitMaxXYReverseVelocity() = 0;

    public: virtual void limitXYToForwardAndReverseMaxVelocity() = 0;

    public: virtual void limitMaxXYVelocity(int32_t maxVelocity) = 0;

    public: virtual void setMaxForwardVelocity(int32_t maxForwardVelocity) = 0;

    public: virtual void setMaxReverseVelocity(int32_t maxReverseVelocity) = 0;

};

            


        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H_COMPLETE
        #if __has_include("org/allbinary/game/physics/velocity/BasicVelocityInterface.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"
#endif

        #endif
    
