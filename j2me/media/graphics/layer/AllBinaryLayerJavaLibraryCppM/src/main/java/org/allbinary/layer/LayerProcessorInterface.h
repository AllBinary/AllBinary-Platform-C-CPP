
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H
        #define ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/BasicLayerProcessorInterface.h"
#include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

class LayerProcessorInterface: public BasicLayerProcessorInterface {

    public: virtual LayerManager* getLayerManager() = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void processAt(AllBinaryLayerManager* allBinaryLayerManager, AllBinaryLayer* layerInterface, int32_t index) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual bool isProcessorLayer(AllBinaryLayer* layerInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERPROCESSORINTERFACE_H
