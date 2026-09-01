
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

class XYOscillateVelocityMovement: public BasicConstantVelocityMovement {

    private: int32_t oscillateMin;

    private: int32_t oscillateMax;

    private: int32_t oscillate= 0;

    private: bool oscillatePositive= false;

public: XYOscillateVelocityMovement(BasicDecimal speedBasicDecimal, int32_t oscillateMin, int32_t oscillateMax){
            super(speedBasicDecimal, VelocityProperties(static_cast<int32_t>(speedBasicDecimal.getUnscaled()), static_cast<int32_t>(speedBasicDecimal.getUnscaled())));
                    

                            //For kotlin this is before the body of the constructor.
                    
this->oscillateMin= oscillateMin;
    
this->oscillateMax= oscillateMax;
    
}


                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryGameLayer layer){
super.process(layer);
    

                        if(this->oscillate < this->oscillateMin)
                        
                                    {
                                    this->oscillatePositive= true;
    
this->getVelocityProperties().getVelocityYBasicDecimalP().addint(3000);
    

                                    }
                                
                             else 
                        if(this->oscillate > this->oscillateMax)
                        
                                    {
                                    this->oscillatePositive= false;
    
this->getVelocityProperties().getVelocityYBasicDecimalP().subtractint(3000);
    

                                    }
                                

                        if(this->oscillatePositive)
                        
                                    {
                                    this->oscillate++;
    
this->getVelocityProperties().getVelocityXBasicDecimalP().addint(5000);
    

                                    }
                                
                        else {
                            this->oscillate--;
    
this->getVelocityProperties().getVelocityXBasicDecimalP().subtractint(5000);
    

                        }
                            
}


};

            

