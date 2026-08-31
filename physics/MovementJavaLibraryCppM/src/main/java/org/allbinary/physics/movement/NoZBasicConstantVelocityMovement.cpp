
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
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Movement.h"

class NoZBasicConstantVelocityMovement: public Movement: public VelocityInterfaceCompositeInterface {
        

    private: velocityProperties: BasicVelocityProperties;

    private: speedBasicDecimal: BasicDecimal = BasicDecimal.ZERO_BIGDECIMAL;

    private: const axisMathVectorUtil: AxisMathVectorUtil = AxisMathVectorUtil.getInstance()!;

public constructor (BasicDecimal basicDecimal, BasicVelocityProperties velocityProperties){

            super();
        this.setSpeedBasicDecimal(basicDecimal);
    
this.velocityProperties= velocityProperties;
    
}


    public init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle){
this.speedBasicDecimal= speedBasicDecimal;
    

    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    
this.velocityProperties!.setVelocityWithBigDecimal(speedBasicDecimal, angleFactory!.getAt(angle), angleFactory!.getAt(otherAngle));
    
}


    public moveOutsideRadius(AllBinaryLayer layer, int64_t radius, int32_t angle, int32_t otherAngle){

    scaleFactorValue: int32_t = this.speedBasicDecimal!.getScaledFactorValue()!;;
    

    xVector: int32_t = static_cast<int32_t>((this.axisMathVectorUtil!.calculateX(radius, angle) /scaleFactorValue));;
    

    yVector: int32_t = static_cast<int32_t>((this.axisMathVectorUtil!.calculateY(radius, angle) /scaleFactorValue));;
    
layer.moveDXYZ(xVector, yVector, 0);
    
}


                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer){
layer.moveDXYZ(this.velocityProperties!.getVelocityXBasicDecimalP()!.getScaled(), this.velocityProperties!.getVelocityYBasicDecimalP()!.getScaled(), 0);
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.velocityProperties!.toString();;
    
}


    public stop(){
this.velocityProperties!.zero();
    
}


    public BasicVelocityProperties getVelocityProperties(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.velocityProperties;
    
}


    public setVelocityProperties(BasicVelocityProperties velocityProperties){
this.velocityProperties= velocityProperties;
    
}


    setSpeedBasicDecimal(BasicDecimal speedBasicDecimal){
this.speedBasicDecimal= speedBasicDecimal;
    
}


    BasicDecimal getSpeedBasicDecimal(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.speedBasicDecimal;
    
}


};

            

