
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

      
#include <org/allbinary/game/physics/velocity/VelocityProperties.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicConstantVelocityMovement.h"

class OscillateVelocityMovement: public BasicConstantVelocityMovement {
        

    private: oscillateMin: int32_t;

    private: oscillateMax: int32_t;

    private: oscillate: int32_t= 0;

    private: oscillatePositive: bool= false;

public constructor (BasicDecimal speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax){
            super(speedBasicDecimal, new VelocityProperties(static_cast<int32_t>(speedBasicDecimal!.getUnscaled()), static_cast<int32_t>(speedBasicDecimal!.getUnscaled())));
                    

                            //For kotlin this is before the body of the constructor.
                    
this.oscillateMin= oscillateMin;
    
this.oscillateMax= oscillateMax;
    
}


                //@Throws(Exception.constructor)
            
    public process(AllBinaryGameLayer layer){
super.process(layer);
    

                        if(this.oscillate < this.oscillateMin)
                        
                                    {
                                    this.oscillatePositive= true;
    

                                    }
                                
                             else 
                        if(this.oscillate > this.oscillateMax)
                        
                                    {
                                    this.oscillatePositive= false;
    

                                    }
                                

                        if(this.oscillatePositive)
                        
                                    {
                                    this.oscillate++;
    
this.getVelocityProperties()!.getVelocityXBasicDecimalP()!.addint(2000);
    

                                    }
                                
                        else {
                            this.oscillate--;
    
this.getVelocityProperties()!.getVelocityXBasicDecimalP()!.subtractint(2000);
    

                        }
                            
}


};

            

