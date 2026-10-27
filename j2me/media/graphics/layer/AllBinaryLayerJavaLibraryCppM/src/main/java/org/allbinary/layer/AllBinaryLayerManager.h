
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/layer/event/LayerManagerEvent.h>

      
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManager.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

class AllBinaryLayerManager: public LayerManager {

    private: LayerManagerEventHandler* layerManagerEventHandler = LayerManagerEventHandler::getInstance();

    private: LayerManagerEvent* createLayerManagerEvent = new LayerManagerEvent(this, this->layerManagerEventHandler->CREATE);

    private: LayerManagerEvent* deleteLayerManagerEvent = new LayerManagerEvent(this, this->layerManagerEventHandler->DELETE);

    private: std::vector<LayerProcessor*> basicLayerProcessorArray = {};

protected: AllBinaryLayerManager();

    protected: std::vector<LayerProcessor*> getLayerProcessorArray();

    public: void setLayerProcessorArray(std::vector<LayerProcessor*> layerProcessorArray);

    public: void log();

                //@Throws(Exception.constructor)
            
    public: void append(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void appendAt(AllBinaryLayer* layerInterface, int32_t index);

                //@Throws(Exception.constructor)
            
    private: void appendProcessors(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void remove(AllBinaryLayer* layerInterface);

                //@Throws(Exception.constructor)
            
    public: void process();

                //@Throws(Exception.constructor)
            
    public: void cleanup();

};

            


        #endif //ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H
