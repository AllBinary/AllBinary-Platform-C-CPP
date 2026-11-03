
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_CPP
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAICompositeVisitorFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"


DiveAndDirectionalTrackingAICompositeVisitorFactory::DiveAndDirectionalTrackingAICompositeVisitorFactory() {
        }
        
    auto DiveAndDirectionalTrackingAICompositeVisitorFactory::getInstance(DiveAndDirectionalTrackingAI* diveBombAI) -> Visitor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return Visitor::getInstance();;
    
}




        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_CPP
