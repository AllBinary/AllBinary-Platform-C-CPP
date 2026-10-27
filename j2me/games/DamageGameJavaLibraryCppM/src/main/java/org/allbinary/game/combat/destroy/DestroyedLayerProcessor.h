
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DestroyEventCircularStaticPool;
class DestroyedEvent;
class DestroyedEventHandler;
class AllBinaryLayer;
class AllBinaryLayerManager;
#include <org/allbinary/layer/BasicLayerProcessor.h>


class CommonStrings;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DestroyedLayerProcessor: public BasicLayerProcessor {

    private: static BasicLayerProcessor* DESTROYED_LAYER_PROCESSOR;

    public: static void init();

    public: static BasicLayerProcessor* getInstance();

private: DestroyedLayerProcessor();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEvent.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>
#endif
#if __has_include(<org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>)
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/BasicLayerProcessor.h>)
#include <org/allbinary/layer/BasicLayerProcessor.h>
#endif


#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

        #endif
    
