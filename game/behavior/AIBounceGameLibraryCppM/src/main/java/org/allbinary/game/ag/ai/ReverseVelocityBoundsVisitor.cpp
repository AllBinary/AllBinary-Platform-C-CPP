
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

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/bounds/BoundsVisitorInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterface.h>

      
#include <org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/LayerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ReverseVelocityBoundsVisitor
            : public Object
        , public BoundsVisitorInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: VelocityInterface* velocityInterface;

    private: LayerInterface* layerInterface;

public: ReverseVelocityBoundsVisitor(LayerInterface* layerInterface){
this->layerInterface= layerInterface;
    

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(layerInterface);;
    
this->velocityInterface= dynamic_cast<VelocityInterface*>(velocityInterfaceCompositeInterface->getVelocityProperties());
    
}


    public: int32_t getX(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerInterface->getXP();;
    
}


    public: int32_t getY(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerInterface->getYP();;
    
}


    public: void minX(){

                        if(this->velocityInterface->getVelocityXBasicDecimalP()->getUnscaled() < 0)
                        this->velocityInterface->getVelocityXBasicDecimalP()->multiplyint( -1);
                                
}


    public: void maxX(){

                        if(this->velocityInterface->getVelocityXBasicDecimalP()->getUnscaled() > 0)
                        this->velocityInterface->getVelocityXBasicDecimalP()->multiplyint( -1);
                                
}


    public: void minY(){

                        if(this->velocityInterface->getVelocityYBasicDecimalP()->getUnscaled() < 0)
                        this->velocityInterface->getVelocityYBasicDecimalP()->multiplyint( -1);
                                
}


    public: void maxY(){

                        if(this->velocityInterface->getVelocityYBasicDecimalP()->getUnscaled() > 0)
                        this->velocityInterface->getVelocityYBasicDecimalP()->multiplyint( -1);
                                
}


};

            

