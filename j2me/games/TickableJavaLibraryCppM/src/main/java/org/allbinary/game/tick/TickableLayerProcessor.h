
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
        



        #ifndef ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H
        #define ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/LayerProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TickableLayerManager.h"
#include "TickableInterface.h"

class TickableLayerProcessor: public LayerProcessor {

public: TickableLayerProcessor();

                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t index);

    public: bool isProcessorLayer(AllBinaryLayer layerInterface);

};

            


        #endif //ORG_ALLBINARY_GAME_TICK_TICKABLELAYERPROCESSOR_H
