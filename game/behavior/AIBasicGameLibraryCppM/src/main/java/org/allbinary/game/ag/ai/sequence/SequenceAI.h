
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ArtificialIntelligence;
class ArtificialIntelligenceInterface;
class ArtificialIntelligenceTransitionInterface;
#include <org/allbinary/game/ag/ai/ArrayAI.h>
class GameInput;
class AllBinaryLayer;
class AllBinaryLayerManager;
class StringMaker;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SequenceAI: public ArrayAI {

    private: static inline const std::string SEQUENCE_AI = "Sequence AI";

    private: int32_t index= 0;

public: SequenceAI(std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterfaceArray, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

                //@Throws(Exception.constructor)
            
    public: void processAI(AllBinaryLayerManager* allBinaryLayerManager);

    public: void next();

    public: int32_t getIndex();

    public: void setIndex(int32_t index);

    public: ArtificialIntelligenceInterface* getSelectedArtificialIntelligenceInterface();

    public: std::string getName();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SEQUENCE_SEQUENCEAI_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligence.h>)
#include <org/allbinary/ai/ArtificialIntelligence.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceTransitionInterface.h>
#endif
#if __has_include(<org/allbinary/game/ag/ai/ArrayAI.h>)
#include <org/allbinary/game/ag/ai/ArrayAI.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif

        #endif
    
