
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Movement.h"

class BasicConstantVelocityMovement: public Movement: public VelocityInterfaceCompositeInterface {
        

    private: velocityProperties: BasicVelocityProperties;

    private: speedBasicDecimal: BasicDecimal = BasicDecimal.ZERO_BIGDECIMAL;

    private: const axisMathVectorUtil: AxisMathVectorUtil = AxisMathVectorUtil.getInstance()!;

public constructor (BasicDecimal basicDecimal, BasicVelocityProperties velocityProperties);

    public init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle);

    public moveOutsideRadius(AllBinaryLayer layer, int64_t radius, int32_t angle, int32_t otherAngle);

                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer);

    public string toString();

    public stop();

    public BasicVelocityProperties getVelocityProperties();

    public setVelocityProperties(BasicVelocityProperties velocityProperties);

    setSpeedBasicDecimal(BasicDecimal speedBasicDecimal);

    BasicDecimal getSpeedBasicDecimal();

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
