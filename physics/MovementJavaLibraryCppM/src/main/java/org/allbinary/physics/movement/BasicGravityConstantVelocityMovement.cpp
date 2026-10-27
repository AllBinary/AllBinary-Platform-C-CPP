
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
        



        #ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_CPP
        #define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/physics/movement/BasicGravityConstantVelocityMovement.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>

      
#include <org/allbinary/game/physics/acceleration/GravityUtil.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"


BasicGravityConstantVelocityMovement::BasicGravityConstantVelocityMovement(BasicDecimal* speedBasicDecimal) : BasicConstantVelocityMovement(speedBasicDecimal, new VelocityProperties(static_cast<int32_t>(speedBasicDecimal->getUnscaled()), static_cast<int32_t>(speedBasicDecimal->getUnscaled()))), gravityUtil(GravityUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto BasicGravityConstantVelocityMovement::process(AllBinaryGameLayer* layer) -> void{
BasicConstantVelocityMovement::process(layer);
    
this->gravityUtil->process(this->getVelocityProperties(), this->gravityUtil->GAME_GRAVITY_VELOCITY);
    
}




        #endif //ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_CPP
