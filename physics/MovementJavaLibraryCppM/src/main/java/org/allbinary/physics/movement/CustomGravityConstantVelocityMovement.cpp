
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicConstantVelocityMovement.h"

class CustomGravityConstantVelocityMovement: public BasicConstantVelocityMovement {

    private: int32_t customGravity;

public: CustomGravityConstantVelocityMovement(BasicDecimal speedBasicDecimal, int32_t customGravity) : BasicConstantVelocityMovement(speedBasicDecimal, VelocityProperties(static_cast<int32_t>(speedBasicDecimal.getUnscaled()), static_cast<int32_t>(speedBasicDecimal.getUnscaled()))){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->customGravity= customGravity;
    
}


    private: const GravityUtil gravityUtil = GravityUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer layer){
super.process(layer);
    
this->gravityUtil.process(this->getVelocityProperties(), this->customGravity);
    

    VelocityProperties velocityProperties = this->getVelocityProperties();;
    
velocityProperties.limitMaxYForwardVelocity();
    
}


};

            

