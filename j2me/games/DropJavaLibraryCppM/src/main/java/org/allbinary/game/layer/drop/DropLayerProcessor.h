
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

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/AllBinaryLayerManager.h>

      
#include <org/allbinary/layer/BasicLayerProcessor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DropLayerInterface.h"

class DropLayerProcessor: public BasicLayerProcessor {
        

    private: static const LAYER_PROCESSOR: BasicLayerProcessor = new DropLayerProcessor();

    public static BasicLayerProcessor getInstance();

private constructor ();

                //@Throws(Exception.constructor)
            
    public process(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_DROP_DROPLAYERPROCESSOR_H
