
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class ArtificialIntelligenceInterface;
class GameInput;
class AllBinaryLayer;
class LogUtil;
class StringMaker;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NumberInSameGroupSequence;
class NumberOnOwnGroupSequenceAI;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NumberOnOwnGroupSequenceAIFactory
            : public virtual Object
         {


            
    public: NumberOnOwnGroupSequenceAIFactory();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface* getInstance(ABHashtable<Object*, Object*>* hashtable, std::vector<ArtificialIntelligenceInterface*> artificialIntelligenceInterface, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_NUMBERONOWNGROUPSEQUENCEAIFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/NumberInSameGroupSequence.h")
#include "org/allbinary/game/ag/ai/NumberInSameGroupSequence.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/NumberOnOwnGroupSequenceAI.h")
#include "org/allbinary/game/ag/ai/NumberOnOwnGroupSequenceAI.h"
#endif

        #endif
    
