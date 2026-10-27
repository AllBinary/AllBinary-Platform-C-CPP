
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
        
#include <org/allbinary/game/health/HealthInterface.h>

      
#include <org/allbinary/game/health/HealthInterfaceCompositeInterface.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerCircularPool.h>

      
#include <org/allbinary/layer/AllBinaryLayerFactoryInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/layer/pickup/health/HealLayer.h"

class HealLayerCircularStaticPool: public AllBinaryLayerCircularPool {

public: HealLayerCircularStaticPool(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total){
super.initAllBinaryLayerCircularPool(allbinaryLayerFactoryInterface, total);
    
}


                //@Throws(Exception.constructor)
            
    public: void visit(AllBinaryLayer* sourceLayerInterface){

    HealLayer* healLayer = dynamic_cast<HealLayer*>(this->getNextInstance());;
    

    HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = dynamic_cast<HealthInterfaceCompositeInterface*>(sourceLayerInterface as unknown);;
    

    HealthInterface* healthInterface = healthInterfaceCompositeInterface->getHealthInterface();;
    
healLayer->visit(healthInterface);
    
}


};

            

