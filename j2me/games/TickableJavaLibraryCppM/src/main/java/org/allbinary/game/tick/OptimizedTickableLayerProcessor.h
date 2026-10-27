
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H
        #define ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryGameLayer;
class AllBinaryLayer;
class AllBinaryLayerManager;
#include <org/allbinary/layer/LayerProcessor.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class OptimizedTickableLayerManager;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OptimizedTickableLayerProcessor: public LayerProcessor {

public: OptimizedTickableLayerProcessor();

                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index);

    public: bool isProcessorLayer(AllBinaryLayer* layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_TICK_OPTIMIZEDTICKABLELAYERPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/game/layer/AllBinaryGameLayer.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/LayerProcessor.h>)
#include <org/allbinary/layer/LayerProcessor.h>
#endif
#if __has_include("org/allbinary/game/tick/OptimizedTickableLayerManager.h")
#include "org/allbinary/game/tick/OptimizedTickableLayerManager.h"
#endif

        #endif
    
