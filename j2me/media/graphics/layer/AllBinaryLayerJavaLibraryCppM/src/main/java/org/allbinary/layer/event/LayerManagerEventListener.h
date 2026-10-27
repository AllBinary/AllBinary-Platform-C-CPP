
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class AllBinaryEventObject;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"
class LayerManagerEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerEventListener
            : public virtual Object
        , public LayerManagerEventListenerInterface {


            
    public: LayerManagerEventListener();
        
    public: void onEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    public: void onCreateLayerManagerEvent(LayerManagerEvent* layerManagerEvent);

                //@Throws(Exception.constructor)
            
    public: void onDeleteLayerManagerEvent(LayerManagerEvent* layerManagerEvent);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTLISTENER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEventListenerInterface.h")
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEvent.h")
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#endif

        #endif
    
