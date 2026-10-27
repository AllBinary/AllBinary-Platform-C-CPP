
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class ArtificialIntelligenceInterface;
class GameInput;
class AllBinaryLayer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NumberLayersSequenceAI;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NumberLayersSequenceAIFactory
            : public virtual Object
         {


            
    public: NumberLayersSequenceAIFactory();
        
    public: ArtificialIntelligenceInterface* getInstance(int32_t numberOfEnemiesLeft, std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_NUMBERLAYERSSEQUENCEAIFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAI.h")
#include "org/allbinary/game/ag/ai/sequence/NumberLayersSequenceAI.h"
#endif

        #endif
    
