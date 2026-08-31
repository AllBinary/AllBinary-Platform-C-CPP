
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H

            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/ai/ArtificialIntelligence.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>

      
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>

      
#include <org/allbinary/game/ag/ai/ArrayAI.h>

      
#include <org/allbinary/game/input/GameInput.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SequenceAI: public ArrayAI {
        

    private: static const SEQUENCE_AI: string = "Sequence AI";

    private: index: int32_t= 0;

public constructor (std::vector<ArtificialIntelligenceInterface> artificialIntelligenceInterfaceArray, AllBinaryLayer ownerLayerInterface, GameInput gameInput);

                //@Throws(Exception.constructor)
            
    public processAI(AllBinaryLayerManager allBinaryLayerManager);

    public next();

    public int32_t getIndex();

    public setIndex(int32_t index);

    public ArtificialIntelligenceInterface getSelectedArtificialIntelligenceInterface();

    public string getName();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H
