
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicConstantVelocityMovement.h"

class PreciseConstantVelocityMovement: public BasicConstantVelocityMovement {
        

    private: accumulatedX: int32_t= 0;

    private: accumulatedY: int32_t= 0;

    private: accumulatedZ: int32_t= 0;

public constructor (BasicDecimal basicDecimal, BasicVelocityProperties velocityProperties);

    public init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle);

    private: const factorValue: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_VALUE;

                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer);

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_PRECISECONSTANTVELOCITYMOVEMENT_H
