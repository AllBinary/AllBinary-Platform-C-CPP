
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_CPP
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/ai/ArtificialIntelligenceLayerProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/ArtificialIntelligenceLayerManager.h"
#include "org/allbinary/ai/ArtificialIntelligenceCompositeInterface.h"


ArtificialIntelligenceLayerProcessor::ArtificialIntelligenceLayerProcessor() : LayerProcessor(new ArtificialIntelligenceLayerManager()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


                //@Throws(Exception.constructor)
            
    auto ArtificialIntelligenceLayerProcessor::processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) -> void{

    ArtificialIntelligenceCompositeInterface* artificialIntelligenceCompositeInterface = dynamic_cast<ArtificialIntelligenceCompositeInterface*>(layerInterface);;
    
artificialIntelligenceCompositeInterface->getArtificialIntelligenceInterface()->processAI(allBinaryLayerManager);
    
}


                //@Throws(Exception.constructor)
            
    auto ArtificialIntelligenceLayerProcessor::isProcessorLayer(AllBinaryLayer* layerInterface) -> bool{

                        if(layerInterface->implmentsArtificialIntelligenceCompositeInterface())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}




        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCELAYERPROCESSOR_CPP
