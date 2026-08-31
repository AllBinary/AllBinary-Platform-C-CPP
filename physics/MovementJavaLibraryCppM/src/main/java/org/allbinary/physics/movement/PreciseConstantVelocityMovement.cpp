
        /* Generated Code Do Not Modify */
        



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

public constructor (BasicDecimal basicDecimal, BasicVelocityProperties velocityProperties){
            super(basicDecimal, velocityProperties);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public init(BasicDecimal speedBasicDecimal, int32_t angle, int32_t otherAngle){
}


    private: const factorValue: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_VALUE;

                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer){

    mathUtil: MathUtil = MathUtil.getInstance()!;;
    

    velocityProperties: BasicVelocityProperties = this.getVelocityProperties()!;;
    
this.accumulatedX= static_cast<int32_t>((this.accumulatedX +velocityProperties!.getVelocityXBasicDecimalP()!.getUnscaled()));
    
this.accumulatedY= static_cast<int32_t>((this.accumulatedY +velocityProperties!.getVelocityYBasicDecimalP()!.getUnscaled()));
    
this.accumulatedZ= static_cast<int32_t>((this.accumulatedZ +velocityProperties!.getVelocityZBasicDecimalP()!.getUnscaled()));
    
layer.moveDXYZ(this.accumulatedX /this.factorValue, this.accumulatedY /this.factorValue, this.accumulatedZ /this.factorValue);
    

                        if(mathUtil!.abs(this.accumulatedX) > this.factorValue)
                        
                                    {
                                    this.accumulatedX= 0;
    

                                    }
                                

                        if(mathUtil!.abs(this.accumulatedY) > this.factorValue)
                        
                                    {
                                    this.accumulatedY= 0;
    

                                    }
                                

                        if(mathUtil!.abs(this.accumulatedZ) > this.factorValue)
                        
                                    {
                                    this.accumulatedZ= 0;
    

                                    }
                                
}


};

            

