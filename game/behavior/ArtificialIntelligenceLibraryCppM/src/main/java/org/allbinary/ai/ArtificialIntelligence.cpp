
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
        



        #ifndef ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_CPP
        #define ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/ai/ArtificialIntelligence.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/ai/ArtificialIntelligenceInterface.h"

auto ArtificialIntelligence::instance_owner() -> ArtificialIntelligence* { static std::unique_ptr<ArtificialIntelligence> value(new ArtificialIntelligence()); return value.get(); }
ArtificialIntelligence* ArtificialIntelligence::instance = ArtificialIntelligence::instance_owner();

    auto ArtificialIntelligence::getInstance() -> ArtificialIntelligence*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArtificialIntelligence::instance;
    
}


ArtificialIntelligence::ArtificialIntelligence(){
}


                //@Throws(Exception.constructor)
            
    auto ArtificialIntelligence::processAI(AllBinaryLayerManager* layerManager) -> void{
}


    auto ArtificialIntelligence::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 1;
    
}




        #endif //ORG_ALLBINARY_AI_ARTIFICIALINTELLIGENCE_CPP
