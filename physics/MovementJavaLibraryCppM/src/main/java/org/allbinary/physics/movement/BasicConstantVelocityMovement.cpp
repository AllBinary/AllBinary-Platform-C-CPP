
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

class BasicConstantVelocityMovement: public Movement, public VelocityInterfaceCompositeInterface {

    private: BasicVelocityProperties velocityProperties;

    private: BasicDecimal speedBasicDecimal = BasicDecimal::ZERO_BIGDECIMAL;

    private: const AxisMathVectorUtil axisMathVectorUtil = AxisMathVectorUtil::getInstance();

public: BasicConstantVelocityMovement(BasicDecimal basicDecimal, BasicVelocityProperties velocityProperties){
this->setSpeedBasicDecimal(basicDecimal);
    
this->velocityProperties= velocityProperties;
    
}


    public: void init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle){
this->speedBasicDecimal= speedBasicDecimal;
    

    AngleFactory angleFactory = AngleFactory::getInstance();;
    
this->velocityProperties.setVelocityWithBigDecimal(speedBasicDecimal, angleFactory.getAt(angle), angleFactory.getAt(otherAngle));
    
}


    public: void moveOutsideRadius(AllBinaryLayer layer, int64_t radius, int32_t angle, int32_t otherAngle){

    int32_t scaleFactorValue = this->speedBasicDecimal.getScaledFactorValue();;
    

    int32_t xVector = static_cast<int32_t>((this->axisMathVectorUtil.calculateX(radius, angle) /scaleFactorValue));;
    

    int32_t yVector = static_cast<int32_t>((this->axisMathVectorUtil.calculateY(radius, angle) /scaleFactorValue));;
    

    int32_t zVector = static_cast<int32_t>((this->axisMathVectorUtil.calculateZ(radius, otherAngle) /scaleFactorValue));;
    
layer.moveDXYZ(xVector, yVector, zVector);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer layer){
layer.moveDXYZ(this->velocityProperties.getVelocityXBasicDecimalP().getScaled(), this->velocityProperties.getVelocityYBasicDecimalP().getScaled(), this->velocityProperties.getVelocityZBasicDecimalP().getScaled());
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityProperties.toString();;
    
}


    public: void stop(){
this->velocityProperties.zero();
    
}


    public: BasicVelocityProperties getVelocityProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocityProperties;
    
}


    public: void setVelocityProperties(BasicVelocityProperties velocityProperties){
this->velocityProperties= velocityProperties;
    
}


    protected: void setSpeedBasicDecimal(BasicDecimal speedBasicDecimal){
this->speedBasicDecimal= speedBasicDecimal;
    
}


    protected: BasicDecimal getSpeedBasicDecimal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->speedBasicDecimal;
    
}


};

            

