
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class AllBinaryEventObject;
class EventListenerInterface;
class EventStrings;
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LayerManagerEventListener;
class LayerManagerEvent;
class LayerManagerEventListenerInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LayerManagerEventHandler: public BasicEventHandler {

    private: static LayerManagerEventHandler* instance_owner();
    private: static LayerManagerEventHandler* instance;

    public: static LayerManagerEventHandler* getInstance();

    private: BasicArrayList* list;

private: LayerManagerEventHandler();

    public: void addListener(LayerManagerEventListener* layerManagerEventListener);

    public: void removeAllListeners();

    public: void removeListener(EventListenerInterface* eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject* eventObject);

    public: const std::string CREATE = "Create";

    public: const std::string DELETE = "Delete";

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireDeleteEvent(AllBinaryEventObject* eventObject);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H_COMPLETE)
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H_COMPLETE
        #if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventListenerInterface.h>)
#include <org/allbinary/logic/util/event/EventListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/EventStrings.h>)
#include <org/allbinary/logic/util/event/EventStrings.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/handler/BasicEventHandler.h>)
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEventListener.h")
#include "org/allbinary/layer/event/LayerManagerEventListener.h"
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEvent.h")
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#endif
#if __has_include("org/allbinary/layer/event/LayerManagerEventListenerInterface.h")
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"
#endif

        #endif
    
