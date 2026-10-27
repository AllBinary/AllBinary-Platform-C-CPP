
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAIFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAI.h"


NumberLayersSequenceAIFactory::NumberLayersSequenceAIFactory() {
        }
        
    auto NumberLayersSequenceAIFactory::getInstance(int32_t numberOfEnemiesLeft, std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) -> ArtificialIntelligenceInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new NumberLayersSequenceAI(numberOfEnemiesLeft, artificialIntelligenceInterface, ownerLayerInterface, gameInput);
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_CPP
