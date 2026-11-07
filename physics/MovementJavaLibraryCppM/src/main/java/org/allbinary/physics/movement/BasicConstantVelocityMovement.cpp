
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_CPP
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"
        

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


BasicConstantVelocityMovement::BasicConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) : speedBasicDecimal(BasicDecimal::ZERO_BIGDECIMAL), axisMathVectorUtil(AxisMathVectorUtil::getInstance()){
this->setSpeedBasicDecimal(basicDecimal);
    
this->velocityProperties= velocityProperties;
    
}


    auto BasicConstantVelocityMovement::init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) -> void{
this->speedBasicDecimal= speedBasicDecimal;
    

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    
this->velocityProperties->setVelocityWithBigDecimal(speedBasicDecimal, angleFactory->getAt(angle), angleFactory->getAt(otherAngle));
    
}


    auto BasicConstantVelocityMovement::moveOutsideRadius(AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) -> void{

    int32_t scaleFactorValue = this->speedBasicDecimal->getScaledFactorValue();;
    

    int32_t xVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateX(radius, angle) /scaleFactorValue));;
    

    int32_t yVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateY(radius, angle) /scaleFactorValue));;
    

    int32_t zVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateZ(radius, otherAngle) /scaleFactorValue));;
    
layer->moveDXYZ(xVector, yVector, zVector);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicConstantVelocityMovement::process(AllBinaryGameLayer* layer) -> void{
layer->moveDXYZ(this->velocityProperties->getVelocityXBasicDecimalP()->getScaled(), this->velocityProperties->getVelocityYBasicDecimalP()->getScaled(), this->velocityProperties->getVelocityZBasicDecimalP()->getScaled());
    
}


    auto BasicConstantVelocityMovement::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->velocityProperties);;
    
}


    auto BasicConstantVelocityMovement::stop() -> void{
this->velocityProperties->zero();
    
}


    auto BasicConstantVelocityMovement::getVelocityProperties() -> BasicVelocityProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityProperties;
    
}


    auto BasicConstantVelocityMovement::setVelocityProperties(BasicVelocityProperties* velocityProperties) -> void{
this->velocityProperties= velocityProperties;
    
}


    auto BasicConstantVelocityMovement::setSpeedBasicDecimal(BasicDecimal* speedBasicDecimal) -> void{
this->speedBasicDecimal= speedBasicDecimal;
    
}


    auto BasicConstantVelocityMovement::getSpeedBasicDecimal() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->speedBasicDecimal;
    
}




        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_CPP
