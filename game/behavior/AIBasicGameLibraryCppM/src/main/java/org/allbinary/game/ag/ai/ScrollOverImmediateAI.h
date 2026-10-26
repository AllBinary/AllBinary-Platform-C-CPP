
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/ai/BasicAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScrollOverImmediateAI: public BasicAI {

public: ScrollOverImmediateAI(AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLOVERIMMEDIATEAI_H
