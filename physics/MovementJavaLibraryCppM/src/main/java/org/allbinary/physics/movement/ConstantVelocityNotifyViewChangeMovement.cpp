
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

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/vector/AxisMathVectorUtil.h>

      
#include <org/allbinary/math/AngleFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Movement.h"

class ConstantVelocityNotifyViewChangeMovement: public Movement {
        

    basicVelocityProperties: BasicVelocityProperties;

    private: speedBasicDecimal: BasicDecimal;

    private: const axisMathVectorUtil: AxisMathVectorUtil = AxisMathVectorUtil.getInstance()!;

public constructor (){

            super();
        this.speedBasicDecimal= BasicDecimal.ZERO_BIGDECIMAL;
    
this.basicVelocityProperties= new BasicVelocityProperties();
    
}


    public init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle){
this.speedBasicDecimal= speedBasicDecimal;
    

    angleFactory: AngleFactory = AngleFactory.getInstance()!;;
    
this.basicVelocityProperties!.setVelocityWithBigDecimal(speedBasicDecimal, angleFactory!.getAt(angle), angleFactory!.getAt(otherAngle));
    
}


    public moveOutsideRadius(AllBinaryLayer layer, int64_t radius, int32_t angle, int32_t otherAngle){

    scaleFactorValue: int32_t = this.speedBasicDecimal!.getScaledFactorValue()!;;
    

    xVector: int32_t = static_cast<int32_t>((this.axisMathVectorUtil!.calculateX(radius, angle) /scaleFactorValue));;
    

    yVector: int32_t = static_cast<int32_t>((this.axisMathVectorUtil!.calculateY(radius, angle) /scaleFactorValue));;
    

    zVector: int32_t = static_cast<int32_t>((this.axisMathVectorUtil!.calculateZ(radius, otherAngle) /scaleFactorValue));;
    
layer.moveDXYZ(xVector, yVector, zVector);
    
}


                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer){

    x: int32_t = this.basicVelocityProperties!.getVelocityXBasicDecimalP()!.getScaled()!;;
    

    y: int32_t = this.basicVelocityProperties!.getVelocityYBasicDecimalP()!.getScaled()!;;
    

    z: int32_t = this.basicVelocityProperties!.getVelocityZBasicDecimalP()!.getScaled()!;;
    
layer.moveDXYZ(x, y, z);
    

                        if(x != 0 || y != 0 || z != 0)
                        
                                    {
                                    layer.onViewPositionChangeEvent();
    

                                    }
                                
}


    public stop(){
this.basicVelocityProperties!.zero();
    
}


};

            

