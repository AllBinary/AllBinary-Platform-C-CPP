
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/Movement.h"

class BasicConstantVelocityMovement: public Movement, public VelocityInterfaceCompositeInterface {

    private: BasicVelocityProperties* velocityProperties;

    private: BasicDecimal* speedBasicDecimal = BasicDecimal::ZERO_BIGDECIMAL;

    private: AxisMathVectorUtil* axisMathVectorUtil = AxisMathVectorUtil::getInstance();

public: BasicConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

    public: void init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

    public: void moveOutsideRadius(AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer* layer);

    public: std::string toString();

    public: void stop();

    public: BasicVelocityProperties* getVelocityProperties();

    public: void setVelocityProperties(BasicVelocityProperties* velocityProperties);

    protected: void setSpeedBasicDecimal(BasicDecimal* speedBasicDecimal);

    protected: BasicDecimal* getSpeedBasicDecimal();

};

            


        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
