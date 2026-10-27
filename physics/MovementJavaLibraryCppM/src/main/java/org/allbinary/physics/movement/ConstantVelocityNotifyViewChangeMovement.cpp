
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_CPP
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/physics/movement/ConstantVelocityNotifyViewChangeMovement.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/Movement.h"


ConstantVelocityNotifyViewChangeMovement::ConstantVelocityNotifyViewChangeMovement() : axisMathVectorUtil(AxisMathVectorUtil::getInstance()){
this->speedBasicDecimal= BasicDecimal::ZERO_BIGDECIMAL;
    
this->basicVelocityProperties= new BasicVelocityProperties();
    
}


    auto ConstantVelocityNotifyViewChangeMovement::init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle) -> void{
this->speedBasicDecimal= speedBasicDecimal;
    

    AngleFactory* angleFactory = AngleFactory::getInstance();;
    
this->basicVelocityProperties->setVelocityWithBigDecimal(speedBasicDecimal, angleFactory->getAt(angle), angleFactory->getAt(otherAngle));
    
}


    auto ConstantVelocityNotifyViewChangeMovement::moveOutsideRadius(AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle) -> void{

    int32_t scaleFactorValue = this->speedBasicDecimal->getScaledFactorValue();;
    

    int32_t xVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateX(radius, angle) /scaleFactorValue));;
    

    int32_t yVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateY(radius, angle) /scaleFactorValue));;
    

    int32_t zVector = static_cast<int32_t>((this->axisMathVectorUtil->calculateZ(radius, otherAngle) /scaleFactorValue));;
    
layer->moveDXYZ(xVector, yVector, zVector);
    
}


                //@Throws(Exception.constructor)
            
    auto ConstantVelocityNotifyViewChangeMovement::process(AllBinaryGameLayer* layer) -> void{

    int32_t x = this->basicVelocityProperties->getVelocityXBasicDecimalP()->getScaled();;
    

    int32_t y = this->basicVelocityProperties->getVelocityYBasicDecimalP()->getScaled();;
    

    int32_t z = this->basicVelocityProperties->getVelocityZBasicDecimalP()->getScaled();;
    
layer->moveDXYZ(x, y, z);
    

                        if(x != 0 || y != 0 || z != 0)
                        
                                    {
                                    layer->onViewPositionChangeEvent();
    

                                    }
                                
}


    auto ConstantVelocityNotifyViewChangeMovement::stop() -> void{
this->basicVelocityProperties->zero();
    
}




        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_CONSTANTVELOCITYNOTIFYVIEWCHANGEMOVEMENT_CPP
