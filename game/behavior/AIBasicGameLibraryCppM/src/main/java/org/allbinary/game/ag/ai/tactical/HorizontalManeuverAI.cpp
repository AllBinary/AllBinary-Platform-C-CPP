
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HorizontalManeuverAI: public BasicAI {
        

    currentRelativeAngle: int32_t = 0;

    private: currentSpeed: int32_t;

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.currentSpeed= 5;
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    x: int32_t = ownerLayerInterface!.getXP()!;;
    

                        if(ownerLayerInterface!.getXP() -this.currentSpeed <= 0)
                        
                                    {
                                    this.reverse();
    
this.drop();
    

                                    }
                                

                        if(ownerLayerInterface!.getX2() +this.currentSpeed > DisplayInfoSingleton.getInstance()!.getLastWidth())
                        
                                    {
                                    this.reverse();
    
this.accelerate();
    
this.drop();
    

                                    }
                                

                        if(this.currentRelativeAngle == 0)
                        
                                    {
                                    x += this.currentSpeed;
    

                                    }
                                
                             else 
                        if(this.currentRelativeAngle == 180)
                        
                                    {
                                    x -= this.currentSpeed;
    

                                    }
                                
ownerLayerInterface!.setPosition(x, ownerLayerInterface!.getYP(), ownerLayerInterface!.getZP());
    

                        if(this.currentRelativeAngle == 0)
                        
                                    {
                                    super.processKeyAI(Canvas.KEY_NUM0);
    

                                    }
                                
                             else 
                        if(this.currentRelativeAngle == 180)
                        
                                    {
                                    super.processKeyAI(Canvas.KEY_POUND);
    

                                    }
                                
}


    reverse(){

                        if(this.currentRelativeAngle == 180)
                        
                                    {
                                    this.currentRelativeAngle= 0;
    

                                    }
                                
                             else 
                        if(this.currentRelativeAngle == 0)
                        
                                    {
                                    this.currentRelativeAngle= 180;
    

                                    }
                                
}


    accelerate(){

                        if(this.currentSpeed < 20)
                        
                                    {
                                    this.currentSpeed++;
    

                                    }
                                
}


    drop(){

    ownerLayerInterface: AllBinaryLayer = this.getOwnerLayerInterface()!;;
    

    y: int32_t = ownerLayerInterface!.getYP()!;;
    

                        if(ownerLayerInterface!.getY2() +ownerLayerInterface!.getHeight() > DisplayInfoSingleton.getInstance()!.getLastHeight())
                        
                                    {
                                    y= 0;
    

                                    }
                                
                        else {
                            y += ownerLayerInterface!.getHeight() +1;
    

                        }
                            
ownerLayerInterface!.setPosition(ownerLayerInterface!.getXP(), y, ownerLayerInterface!.getZP());
    
}


};

            

