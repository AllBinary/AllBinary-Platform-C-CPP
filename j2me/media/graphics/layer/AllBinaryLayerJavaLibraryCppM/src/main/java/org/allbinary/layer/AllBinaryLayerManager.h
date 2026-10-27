
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class LayerManagerEvent;
class LayerManagerEventHandler;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/LayerManager.h"
class LayerProcessor;
class LayerManagerNoDebug;
class AllBinaryLayer;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryLayerManager: public LayerManager {

    private: LayerManagerEventHandler* layerManagerEventHandler;

    private: LayerManagerEvent* createLayerManagerEvent;

    private: LayerManagerEvent* deleteLayerManagerEvent;

    private: std::vector<LayerProcessor*> basicLayerProcessorArray;

/*protected*/ public: AllBinaryLayerManager();

    /*protected*/ public: std::vector<LayerProcessor*> getLayerProcessorArray();

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_ALLBINARYLAYERMANAGER_H_COMPLETE
        #if __has_include(<org/allbinary/layer/event/LayerManagerEvent.h>)
#include <org/allbinary/layer/event/LayerManagerEvent.h>
#endif
#if __has_include(<org/allbinary/layer/event/LayerManagerEventHandler.h>)
#include <org/allbinary/layer/event/LayerManagerEventHandler.h>
#endif
#if __has_include("org/allbinary/layer/LayerManager.h")
#include "org/allbinary/layer/LayerManager.h"
#endif
#if __has_include("org/allbinary/layer/LayerProcessor.h")
#include "org/allbinary/layer/LayerProcessor.h"
#endif
#if __has_include("org/allbinary/layer/LayerManagerNoDebug.h")
#include "org/allbinary/layer/LayerManagerNoDebug.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

        #endif
    
