
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
        



#include <org/allbinary/game/layer/behavior/GameLayerBehavior.h>

      
#include <org/allbinary/game/physics/acceleration/BasicAccelerationProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitialJumpBehavior.h"

class TopViewGameLayerBehavior: public GameLayerBehavior {
        

    public const maxGravityActionIndex: int32_t;

    public isJumpAction: bool = true;

    public isJumpOver: bool = false;

    public isFallingWithoutJumpAttempt: bool = false;

    public gravityActionIndex: int32_t = 0;

public constructor (int32_t maxGravityActionIndex){

            super();
        this.maxGravityActionIndex= maxGravityActionIndex;
    
}


    public gravity(){

                        if(this.gravityActionIndex == 0)
                        
                                    {
                                    this.gravityActionIndex++;
    
this.isFallingWithoutJumpAttempt= true;
    

                                    }
                                
}


    public land(VelocityProperties velocityProperties){
velocityProperties!.getVelocityYBasicDecimalP()!.setint(0);
    
this.landReset();
    
}


    public landReset(){
this.gravityActionIndex= 0;
    
this.isFallingWithoutJumpAttempt= false;
    
this.isJumpAction= true;
    
this.isJumpOver= false;
    
}


    public up(VelocityProperties velocityProperties, BasicAccelerationProperties acceleration, InitialJumpBehavior jumpBehavior, int32_t accelerationMultiplier){

                        if(!this.isJumpOver)
                        
                                    {
                                    
                        if(this.gravityActionIndex < this.maxGravityActionIndex)
                        
                                    {
                                    
    acceleration2: int32_t =  -acceleration.getForward() *accelerationMultiplier;;
    
velocityProperties!.getVelocityYBasicDecimalP()!.addint(acceleration2);
    
velocityProperties!.limitXYToForwardAndReverseMaxVelocity();
    
this.gravityActionIndex++;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            
                        }
                            

                        if(this.isJumpAction)
                        
                                    {
                                    jumpBehavior!.process();
    
this.isJumpAction= false;
    

                                    }
                                
}


    public inputFrames(VelocityProperties velocityProperties){

                        if(this.gravityActionIndex > 0 && velocityProperties!.getVelocityYBasicDecimalP()!.getUnscaled() > 0)
                        
                                    {
                                    this.isJumpOver= true;
    

                                    }
                                
}


};

            

