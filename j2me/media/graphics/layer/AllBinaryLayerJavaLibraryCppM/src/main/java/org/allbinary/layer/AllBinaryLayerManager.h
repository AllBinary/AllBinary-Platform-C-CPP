
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
        



        #ifndef ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H

            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManager.h"
#include "LayerProcessor.h"
#include "LayerManagerNoDebug.h"
#include "AllBinaryLayer.h"

class AllBinaryLayerManager: public LayerManager {
        

    private: const layerManagerEventHandler: LayerManagerEventHandler = LayerManagerEventHandler.getInstance()!;

    private: const createLayerManagerEvent: LayerManagerEvent = new LayerManagerEvent(this, this.layerManagerEventHandler!.CREATE);

    private: const deleteLayerManagerEvent: LayerManagerEvent = new LayerManagerEvent(this, this.layerManagerEventHandler!.DELETE);

    private: basicLayerProcessorArray: std::vector<LayerProcessor> = [];

protected constructor ();

    std::vector<LayerProcessor> getLayerProcessorArray();

    public setLayerProcessorArray(std::vector<LayerProcessor> layerProcessorArray);

    public log();

                //@Throws(Exception.constructor)
            
    public append(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public appendAt(AllBinaryLayer layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    appendProcessors(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public remove(AllBinaryLayer layerInterface);

                //@Throws(Exception.constructor)
            
    public process();

                //@Throws(Exception.constructor)
            
    public cleanup();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
