
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DiveAndDirectionalTrackingAI.h"

class DiveAndDirectionalTrackingAICompositeVisitorFactory
            : public Object
         {

    public: Visitor getInstance(DiveAndDirectionalTrackingAI diveBombAI);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAICOMPOSITEVISITORFACTORY_H
