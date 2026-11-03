
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ArtificialIntelligenceInterface;
class BasicRandomAIFactory;
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>
class BasicAI;
class GameInput;
class AllBinaryLayer;
class Visitor;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ThrustAIVisitorFactory;
class BasicProbabilityAIDataFactory;
class LastKeyAIVisitorFactory;
class DiveAndDirectionalTrackingAI;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DiveAndDirectionalTrackingAIFactory
            : public virtual Object
        , public virtual ArtificialIntelligenceInterfaceFactoryInterface {


            
    public: DiveAndDirectionalTrackingAIFactory();
        
                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface* getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_DIVEANDDIRECTIONALTRACKINGAIFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h>)
#include <org/allbinary/game/ag/ai/tactical/BasicRandomAIFactory.h>
#endif
#if __has_include(<org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>)
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/ai/BasicAI.h>)
#include <org/allbinary/game/ai/BasicAI.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/ThrustAIVisitorFactory.h")
#include "org/allbinary/game/ag/ai/ThrustAIVisitorFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/BasicProbabilityAIDataFactory.h")
#include "org/allbinary/game/ag/ai/BasicProbabilityAIDataFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h")
#include "org/allbinary/game/ag/ai/LastKeyAIVisitorFactory.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h")
#include "org/allbinary/game/ag/ai/DiveAndDirectionalTrackingAI.h"
#endif

        #endif
    
