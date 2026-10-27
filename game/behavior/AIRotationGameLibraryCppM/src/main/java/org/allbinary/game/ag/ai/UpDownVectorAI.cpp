
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/game/physics/velocity/BasicVelocityProperties.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class UpDownVectorAI: public BasicAI {

    private: BasicVelocityProperties* velocityInterface;

    private: int32_t index = 0;

public: UpDownVectorAI(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) : BasicAI(ownerLayerInterface, gameInput){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(this->getOwnerLayerInterface() as unknown);;
    
this->velocityInterface= velocityInterfaceCompositeInterface->getVelocityProperties();
    
this->velocityInterface->getVelocityYBasicDecimalP()->setint(0);
    
}


                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager){

    int32_t y = this->getOwnerLayerInterface()->getHeight() *270;;
    

                        if(this->index < 5)
                        
                                    {
                                    
    BasicDecimal* basicDecimal = this->velocityInterface->getVelocityYBasicDecimalP();;
    
basicDecimal->setint(0);
    
basicDecimal->addint(y);
    
this->index++;
    

                                    }
                                
                             else 
                        if(this->index < 10)
                        
                                    {
                                    
    BasicDecimal* basicDecimal = this->velocityInterface->getVelocityYBasicDecimalP();;
    
basicDecimal->setint(0);
    
basicDecimal->subtractint(y);
    
this->index++;
    

                                    }
                                
                        else {
                            this->index= 0;
    
this->processAI(allBinaryLayerManager);
    

                        }
                            
}


};

            

