
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
        



        #ifndef ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAIFACTORY_H
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAIFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class ArtificialIntelligenceInterface;
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>
class GameInput;
class AllBinaryLayer;
class SmallIntegerSingletonFactory;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasePatrolAI;
class PacePatrolAI;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PacePatrolAIFactory
            : public virtual Object
        , public ArtificialIntelligenceInterfaceFactoryInterface {


            
    public: PacePatrolAIFactory();
        
                //@Throws(Exception.constructor)
            
    public: ArtificialIntelligenceInterface* getInstance(ABHashtable<Object*, Object*>* hashtable, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput);

};

            


        #endif //ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAIFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAIFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_AG_AI_SCROLLER_PACEPATROLAIFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/ai/ArtificialIntelligenceInterface.h>)
#include <org/allbinary/ai/ArtificialIntelligenceInterface.h>
#endif
#if __has_include(<org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>)
#include <org/allbinary/game/ai/ArtificialIntelligenceInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/input/GameInput.h>)
#include <org/allbinary/game/input/GameInput.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/BasePatrolAI.h")
#include "org/allbinary/game/ag/ai/scroller/BasePatrolAI.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/scroller/PacePatrolAI.h")
#include "org/allbinary/game/ag/ai/scroller/PacePatrolAI.h"
#endif

        #endif
    
