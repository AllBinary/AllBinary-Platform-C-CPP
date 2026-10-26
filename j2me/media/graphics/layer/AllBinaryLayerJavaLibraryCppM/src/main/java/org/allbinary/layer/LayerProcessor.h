
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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H
        #define ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerProcessorInterface.h"
#include "LayerManager.h"
#include "AllBinaryLayerManager.h"
#include "AllBinaryLayer.h"

class LayerProcessor
            : public Object
        : public LayerProcessorInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: LayerManager layerManager;

public: LayerProcessor(LayerManager layerManager);

                //@Throws(Exception.constructor)
            
    public: void processAt(AllBinaryLayerManager allBinaryLayerManager, AllBinaryLayer layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    public: bool isProcessorLayer(AllBinaryLayer layerInterface);

    public: LayerManager getLayerManager();

                //@Throws(Exception.constructor)
            
    public: void process(AllBinaryLayerManager allBinaryLayerManager);

};

            


        #endif //ORG_ALLBINARY_LAYER_LAYERPROCESSOR_H
