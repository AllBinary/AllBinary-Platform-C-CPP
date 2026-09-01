
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

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEvent.h>

      
#include <org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DestroyedLayerProcessor: public BasicLayerProcessor {

    private: static BasicLayerProcessor DESTROYED_LAYER_PROCESSOR = BasicLayerProcessor::NULL_LAYER_PROCESSOR;

    public: static void init();

    public: static BasicLayerProcessor getInstance();

private: DestroyedLayerProcessor();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_DESTROYEDLAYERPROCESSOR_H
