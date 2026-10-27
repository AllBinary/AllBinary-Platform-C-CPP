
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
        



        #ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/physics/velocity/DragVelocityBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/physics/velocity/VelocityBehaviorBase.h"
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"


DragVelocityBehavior::DragVelocityBehavior() {
        }
        auto DragVelocityBehavior::instance_owner() -> DragVelocityBehavior* { static std::unique_ptr<DragVelocityBehavior> value(new DragVelocityBehavior()); return value.get(); }
DragVelocityBehavior* DragVelocityBehavior::instance = DragVelocityBehavior::instance_owner();

    auto DragVelocityBehavior::reduce(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) -> void{

                        if(velocityProperties->getVelocityXBasicDecimalP()->getUnscaled() != 0)
                        
                                    {
                                    
    BasicDecimal* basicDecimal = velocityProperties->getVelocityXBasicDecimalP();;
    
basicDecimal->multiplyint(nominator);
    
basicDecimal->divideint(denominator);
    

                                    }
                                

                        if(velocityProperties->getVelocityYBasicDecimalP()->getUnscaled() != 0)
                        
                                    {
                                    
    BasicDecimal* basicDecimal = velocityProperties->getVelocityYBasicDecimalP();;
    
basicDecimal->multiplyint(nominator);
    
basicDecimal->divideint(denominator);
    

                                    }
                                
}


    auto DragVelocityBehavior::reduceX(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) -> void{

    BasicDecimal* basicDecimal = velocityProperties->getVelocityXBasicDecimalP();;
    

                        if(basicDecimal->getUnscaled() != 0)
                        
                                    {
                                    basicDecimal->multiplyint(nominator);
    
basicDecimal->divideint(denominator);
    

                                    }
                                
}


    auto DragVelocityBehavior::reduceY(BasicVelocityProperties* velocityProperties, int32_t nominator, int32_t denominator) -> void{

                        if(velocityProperties->getVelocityYBasicDecimalP()->getUnscaled() != 0)
                        
                                    {
                                    
    BasicDecimal* basicDecimal = velocityProperties->getVelocityYBasicDecimalP();;
    
basicDecimal->multiplyint(nominator);
    
basicDecimal->divideint(denominator);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_DRAGVELOCITYBEHAVIOR_CPP
