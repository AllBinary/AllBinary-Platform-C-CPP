
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/ScaleFactorFactory.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

class PreciseConstantVelocityMovement: public BasicConstantVelocityMovement {

    private: int32_t accumulatedX= 0;

    private: int32_t accumulatedY= 0;

    private: int32_t accumulatedZ= 0;

public: PreciseConstantVelocityMovement(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties) : BasicConstantVelocityMovement(basicDecimal, velocityProperties){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void init(BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle){
}


    private: const int32_t factorValue = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_VALUE;

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer* layer){

    MathUtil* mathUtil = MathUtil::getInstance();;
    

    BasicVelocityProperties* velocityProperties = this->getVelocityProperties();;
    
this->accumulatedX= static_cast<int32_t>((this->accumulatedX +velocityProperties->getVelocityXBasicDecimalP()->getUnscaled()));
    
this->accumulatedY= static_cast<int32_t>((this->accumulatedY +velocityProperties->getVelocityYBasicDecimalP()->getUnscaled()));
    
this->accumulatedZ= static_cast<int32_t>((this->accumulatedZ +velocityProperties->getVelocityZBasicDecimalP()->getUnscaled()));
    
layer->moveDXYZ(this->accumulatedX /this->factorValue, this->accumulatedY /this->factorValue, this->accumulatedZ /this->factorValue);
    

                        if(mathUtil->abs(this->accumulatedX) > this->factorValue)
                        
                                    {
                                    this->accumulatedX= 0;
    

                                    }
                                

                        if(mathUtil->abs(this->accumulatedY) > this->factorValue)
                        
                                    {
                                    this->accumulatedY= 0;
    

                                    }
                                

                        if(mathUtil->abs(this->accumulatedZ) > this->factorValue)
                        
                                    {
                                    this->accumulatedZ= 0;
    

                                    }
                                
}


};

            

