
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/layer/drop/DropLayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/layer/drop/DropLayerInterface.h"

BasicLayerProcessor* DropLayerProcessor::LAYER_PROCESSOR = new DropLayerProcessor();

DropLayerProcessor::DropLayerProcessor(){
}


    auto DropLayerProcessor::getInstance() -> BasicLayerProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DropLayerProcessor::LAYER_PROCESSOR;
    
}


                //@Throws(Exception.constructor)
            
    auto DropLayerProcessor::process(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    BasicArrayList* list = this->getList();;
    

    int32_t size = list->size();;
    

    AllBinaryLayer* layerInterface;;
    

    DropLayerInterface* dropLayerInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
layerInterface= dynamic_cast<AllBinaryLayer*>(list->objectArray[index]);
    
dropLayerInterface= dynamic_cast<DropLayerInterface*>(layerInterface);
    
layerInterface= dynamic_cast<AllBinaryLayer*>(dropLayerInterface->getDroppedLayer());
    
allBinaryLayerManager->append(layerInterface);
    
}

list->clear();
    
}




        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_CPP
