
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

            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LayerManagerEventListener.h"
#include "LayerManagerEvent.h"
#include "LayerManagerEventListenerInterface.h"

class LayerManagerEventHandler: public BasicEventHandler {

    private: static LayerManagerEventHandler instance = LayerManagerEventHandler();

    public: static LayerManagerEventHandler getInstance();

    private: const BasicArrayList list = BasicArrayListD();

private: LayerManagerEventHandler();

    public: void addListener(LayerManagerEventListener layerManagerEventListener);

    public: void removeAllListeners();

    public: void removeListener(EventListenerInterface eventListenerInterface);

                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject eventObject);

    public: const std::string CREATE = "Create";

    public: const std::string DELETE = "Delete";

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireDeleteEvent(AllBinaryEventObject eventObject);

                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface);

};

            


        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_H
