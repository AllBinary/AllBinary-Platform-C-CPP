
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_CPP
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/physics/movement/NoZBasicConstantVelocityMovement.h"
        

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


NoZBasicConstantVelocityMovement::NoZBasicConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) : speedBasicDecimal(BasicDecimal::ZERO_BIGDECIMAL), axisMathVectorUtil(AxisMathVectorUtil::getInstance()){
this->setSpeedBasicDecimal(basicDecimal);
    
this->velocityProperties= velocityProperties;
    
}


    auto NoZBasicConstantVelocityMovement::init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) -> void{
this->speedBasicDecimal= speedBasicDecimal;
    

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    
this->velocityProperties->setVelocityWithBigDecimal(speedBasicDecimal, angleFactory->getAt(angle), angleFactory->getAt(otherAngle));
    
}


    auto NoZBasicConstantVelocityMovement::moveOutsideRadius(AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) -> void{

    int32_t scaleFactorValue = this->speedBasicDecimal->getScaledFactorValue();;
    

    int32_t xVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateX(radius, angle) /scaleFactorValue));;
    

    int32_t yVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateY(radius, angle) /scaleFactorValue));;
    
layer->moveDXYZ(xVector, yVector, 0);
    
}


                //@Throws(Exception.constructor)
            
    auto NoZBasicConstantVelocityMovement::process(AllBinaryGameLayer* layer) -> void{
layer->moveDXYZ(this->velocityProperties->getVelocityXBasicDecimalP()->getScaled(), this->velocityProperties->getVelocityYBasicDecimalP()->getScaled(), 0);
    
}


    auto NoZBasicConstantVelocityMovement::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityProperties->toString();;
    
}


    auto NoZBasicConstantVelocityMovement::stop() -> void{
this->velocityProperties->zero();
    
}


    auto NoZBasicConstantVelocityMovement::getVelocityProperties() -> BasicVelocityProperties*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->velocityProperties;
    
}


    auto NoZBasicConstantVelocityMovement::setVelocityProperties(BasicVelocityProperties* velocityProperties) -> void{
this->velocityProperties= velocityProperties;
    
}


    auto NoZBasicConstantVelocityMovement::setSpeedBasicDecimal(BasicDecimal* speedBasicDecimal) -> void{
this->speedBasicDecimal= speedBasicDecimal;
    
}


    auto NoZBasicConstantVelocityMovement::getSpeedBasicDecimal() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->speedBasicDecimal;
    
}




        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_CPP
