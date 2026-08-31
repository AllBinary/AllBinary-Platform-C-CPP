
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/game/ai/BasicAI.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ArrayAI: public BasicAI {
        

    private: const artificialIntelligenceInterfaceArray: std::vector<ArtificialIntelligenceInterface>;

public constructor (std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterface, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

    public std::vector<ArtificialIntelligenceInterface> getArtificialIntelligenceInterface();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_ARRAYAI_H
