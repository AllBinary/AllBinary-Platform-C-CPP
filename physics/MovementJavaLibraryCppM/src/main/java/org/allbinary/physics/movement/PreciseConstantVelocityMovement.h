
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayer;
class BasicVelocityProperties;
class BasicDecimal;
class MathUtil;
class ScaleFactorFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PreciseConstantVelocityMovement: public BasicConstantVelocityMovement {

    private: int32_t accumulatedX= 0;

    private: int32_t accumulatedY= 0;

    private: int32_t accumulatedZ= 0;

public: PreciseConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

    public: void init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

    private: const int32_t factorValue;

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer* layer);

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H_COMPLETE)
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayer.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
#endif
#if __has_include(<org/allbinary/game/physics/velocity/BasicVelocityProperties.h>)
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>
#endif
#if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/ScaleFactorFactory.h>)
#include <org/allbinary/logic/math/ScaleFactorFactory.h>
#endif
#if __has_include("org/allbinary/physics/movement/BasicConstantVelocityMovement.h")
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
#endif

        #endif
    
