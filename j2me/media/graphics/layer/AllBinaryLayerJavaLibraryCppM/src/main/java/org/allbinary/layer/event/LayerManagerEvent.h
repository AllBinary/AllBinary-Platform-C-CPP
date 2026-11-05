
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class AllBinaryLayer;
class LayerManager;
class StringMaker;
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerEvent: public AllBinaryEventObject {

    private: AllBinaryLayer* layerInterface;

    private: std::string crud;

public: LayerManagerEvent(LayerManager* layerManager, std::string crud);

    public: AllBinaryLayer* getLayerInterface();

    public: void setLayerInterface(AllBinaryLayer* layerInterface);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENT_H_COMPLETE
        #if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/layer/LayerManager.h>)
#include <org/allbinary/layer/LayerManager.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif

        #endif
    
