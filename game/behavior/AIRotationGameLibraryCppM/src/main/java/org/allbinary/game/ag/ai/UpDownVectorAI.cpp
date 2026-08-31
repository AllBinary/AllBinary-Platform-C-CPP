
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UpDownVectorAI: public BasicAI {
        

    private: const velocityInterface: BasicVelocityProperties;

    private: index: int32_t = 0;

public constructor (AllBinaryLayer ownerLayerInterface, GameInput gameInput){
            super(ownerLayerInterface, gameInput);
                    

                            //For kotlin this is before the body of the constructor.
                    

    velocityInterfaceCompositeInterface: VelocityInterfaceCompositeInterface = this.getOwnerLayerInterface() as unknown as VelocityInterfaceCompositeInterface;;
    
this.velocityInterface= velocityInterfaceCompositeInterface!.getVelocityProperties();
    
this.velocityInterface!.getVelocityYBasicDecimalP()!.setint(0);
    
}


                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager){

    y: int32_t = this.getOwnerLayerInterface()!.getHeight() *270;;
    

                        if(this.index < 5)
                        
                                    {
                                    
    basicDecimal: BasicDecimal = this.velocityInterface!.getVelocityYBasicDecimalP()!;;
    
basicDecimal!.setint(0);
    
basicDecimal!.addint(y);
    
this.index++;
    

                                    }
                                
                             else 
                        if(this.index < 10)
                        
                                    {
                                    
    basicDecimal: BasicDecimal = this.velocityInterface!.getVelocityYBasicDecimalP()!;;
    
basicDecimal!.setint(0);
    
basicDecimal!.subtractint(y);
    
this.index++;
    

                                    }
                                
                        else {
                            this.index= 0;
    
this.processAI(allBinaryLayerManager);
    

                        }
                            
}


};

            

