
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
        



        #ifndef ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H
        #define ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/CollidableCompositeLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/OptimizedArtificialIntelligenceLayerManager.h"

class OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer: public LayerProcessor {

public: OptimizedArtificialIntelligenceLayerProcessorForCollidableLayer();

                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    public: bool isProcessorLayer(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_AI_OPTIMIZEDARTIFICIALINTELLIGENCELAYERPROCESSORFORCOLLIDABLELAYER_H
