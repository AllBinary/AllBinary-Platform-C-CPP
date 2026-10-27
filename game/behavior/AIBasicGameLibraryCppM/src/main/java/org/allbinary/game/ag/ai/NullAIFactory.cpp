
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/NullAIFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/NullAI.h"


NullAIFactory::NullAIFactory() {
        }
        auto NullAIFactory::NULL_AI_owner() -> NullAI* { static std::unique_ptr<NullAI> value(new NullAI()); return value.get(); }
NullAI* NullAIFactory::NULL_AI = NullAIFactory::NULL_AI_owner();

    auto NullAIFactory::getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput) -> ArtificialIntelligenceInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAIFactory::NULL_AI;
    
}


    auto NullAIFactory::getInstance() -> ArtificialIntelligenceInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullAIFactory::NULL_AI;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_NULLAIFACTORY_CPP
