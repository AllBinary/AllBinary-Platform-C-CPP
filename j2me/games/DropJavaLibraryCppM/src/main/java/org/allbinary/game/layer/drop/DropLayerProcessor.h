
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryLayer;
class AllBinaryLayerManager;
#include <org/allbinary/layer/BasicLayerProcessor.h>
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class DropLayerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DropLayerProcessor: public BasicLayerProcessor {

    private: static BasicLayerProcessor* LAYER_PROCESSOR;

    public: static BasicLayerProcessor* getInstance();

private: DropLayerProcessor();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager* allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayerManager.h>)
#include <org/allbinary/layer/AllBinaryLayerManager.h>
#endif
#if __has_include(<org/allbinary/layer/BasicLayerProcessor.h>)
#include <org/allbinary/layer/BasicLayerProcessor.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/layer/drop/DropLayerInterface.h")
#include "org/allbinary/game/layer/drop/DropLayerInterface.h"
#endif

        #endif
    
