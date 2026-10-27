
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_LAYER_LAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/LayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerProcessorInterface.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"


LayerProcessor::LayerProcessor(LayerManager* layerManager) : commonStrings(CommonStrings::getInstance()){
this->layerManager= layerManager;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerProcessor::processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


                //@Throws(Exception.constructor)
            
    auto LayerProcessor::isProcessorLayer(AllBinaryLayer* layerInterface) -> bool{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto LayerProcessor::getLayerManager() -> LayerManager*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->layerManager;
    
}


                //@Throws(Exception.constructor)
            
    auto LayerProcessor::process(AllBinaryLayerManager* allBinaryLayerManager) -> void{

    LayerManager* layerManager = this->getLayerManager();;
    

    int32_t size = layerManager->getSize();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->processAt(allBinaryLayerManager, dynamic_cast<AllBinaryLayer*>(layerManager->getLayerAt(index)), index);
    
}

}




        #endif //ORG_ALLBINARY_LAYER_LAYERPROCESSOR_CPP
