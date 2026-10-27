
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_CPP
        #define ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/behavior/topview/TopViewGameLayerBehavior.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/layer/behavior/GameLayerBehavior.h>

      
#include <org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/behavior/topview/InitialJumpBehavior.h"


TopViewGameLayerBehavior::TopViewGameLayerBehavior(int32_t maxGravityActionIndex){
this->maxGravityActionIndex= maxGravityActionIndex;
    
}


    auto TopViewGameLayerBehavior::gravity() -> void{

                        if(this->gravityActionIndex == 0)
                        
                                    {
                                    this->gravityActionIndex++;
    
this->isFallingWithoutJumpAttempt= true;
    

                                    }
                                
}


    auto TopViewGameLayerBehavior::land(VelocityProperties* velocityProperties) -> void{
velocityProperties->getVelocityYBasicDecimalP()->setint(0);
    
this->landReset();
    
}


    auto TopViewGameLayerBehavior::landReset() -> void{
this->gravityActionIndex= 0;
    
this->isFallingWithoutJumpAttempt= false;
    
this->isJumpAction= true;
    
this->isJumpOver= false;
    
}


    auto TopViewGameLayerBehavior::up(VelocityProperties* velocityProperties, BasicAccelerationProperties* acceleration, InitialJumpBehavior* jumpBehavior, int32_t accelerationMultiplier) -> void{

                        if(!this->isJumpOver)
                        
                                    {
                                    
                        if(this->gravityActionIndex < this->maxGravityActionIndex)
                        
                                    {
                                    
    int32_t acceleration2 =  -acceleration->getForward() *accelerationMultiplier;;
    
velocityProperties->getVelocityYBasicDecimalP()->addint(acceleration2);
    
velocityProperties->limitXYToForwardAndReverseMaxVelocity();
    
this->gravityActionIndex++;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        }
                            

                        if(this->isJumpAction)
                        
                                    {
                                    jumpBehavior->process();
    
this->isJumpAction= false;
    

                                    }
                                
}


    auto TopViewGameLayerBehavior::inputFrames(VelocityProperties* velocityProperties) -> void{

                        if(this->gravityActionIndex > 0 && velocityProperties->getVelocityYBasicDecimalP()->getUnscaled() > 0)
                        
                                    {
                                    this->isJumpOver= true;
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_GAME_BEHAVIOR_TOPVIEW_TOPVIEWGAMELAYERBEHAVIOR_CPP
