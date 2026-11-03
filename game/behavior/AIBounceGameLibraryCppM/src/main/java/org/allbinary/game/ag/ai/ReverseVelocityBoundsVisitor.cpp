
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/ReverseVelocityBoundsVisitor.h"
        

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
        

ReverseVelocityBoundsVisitor::ReverseVelocityBoundsVisitor(LayerInterface* layerInterface) : logUtil(LogUtil::getInstance()){
this->layerInterface= layerInterface;
    

    VelocityInterfaceCompositeInterface* velocityInterfaceCompositeInterface = dynamic_cast<VelocityInterfaceCompositeInterface*>(layerInterface);;
    
this->velocityInterface= dynamic_cast<VelocityInterface*>(velocityInterfaceCompositeInterface->getVelocityProperties());
    
}


    auto ReverseVelocityBoundsVisitor::getX() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerInterface->getXP();;
    
}


    auto ReverseVelocityBoundsVisitor::getY() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->layerInterface->getYP();;
    
}


    auto ReverseVelocityBoundsVisitor::minX() -> void{

                        if(this->velocityInterface->getVelocityXBasicDecimalP()->getUnscaled() < 0)
                        this->velocityInterface->getVelocityXBasicDecimalP()->multiplyint( -1);
                                
}


    auto ReverseVelocityBoundsVisitor::maxX() -> void{

                        if(this->velocityInterface->getVelocityXBasicDecimalP()->getUnscaled() > 0)
                        this->velocityInterface->getVelocityXBasicDecimalP()->multiplyint( -1);
                                
}


    auto ReverseVelocityBoundsVisitor::minY() -> void{

                        if(this->velocityInterface->getVelocityYBasicDecimalP()->getUnscaled() < 0)
                        this->velocityInterface->getVelocityYBasicDecimalP()->multiplyint( -1);
                                
}


    auto ReverseVelocityBoundsVisitor::maxY() -> void{

                        if(this->velocityInterface->getVelocityYBasicDecimalP()->getUnscaled() > 0)
                        this->velocityInterface->getVelocityYBasicDecimalP()->multiplyint( -1);
                                
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_REVERSEVELOCITYBOUNDSVISITOR_CPP
