
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
        



        #ifndef ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_CPP
        #define ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/event/LayerManagerEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/layer/event/LayerManagerEventListener.h"
#include "org/allbinary/layer/event/LayerManagerEvent.h"
#include "org/allbinary/layer/event/LayerManagerEventListenerInterface.h"

auto LayerManagerEventHandler::instance_owner() -> LayerManagerEventHandler* { static std::unique_ptr<LayerManagerEventHandler> value(new LayerManagerEventHandler()); return value.get(); }
LayerManagerEventHandler* LayerManagerEventHandler::instance = LayerManagerEventHandler::instance_owner();

    auto LayerManagerEventHandler::getInstance() -> LayerManagerEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LayerManagerEventHandler::instance;
    
}


LayerManagerEventHandler::LayerManagerEventHandler() : list(new BasicArrayListD()){
}


    auto LayerManagerEventHandler::addListener(LayerManagerEventListener* layerManagerEventListener) -> void{

                        if(!this->list->contains(layerManagerEventListener))
                        
                                    {
                                    this->list->add(layerManagerEventListener);
    

                                    }
                                
}


    auto LayerManagerEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto LayerManagerEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto LayerManagerEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    LayerManagerEventListener* layerManagerEventListener = dynamic_cast<LayerManagerEventListener*>(this->list->objectArray[index]);;
    
layerManagerEventListener->onCreateLayerManagerEvent(dynamic_cast<LayerManagerEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto LayerManagerEventHandler::fireDeleteEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    LayerManagerEventListener* layerManagerEventListener = dynamic_cast<LayerManagerEventListener*>(this->list->objectArray[index]);;
    
layerManagerEventListener->onDeleteLayerManagerEvent(dynamic_cast<LayerManagerEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}


    BasicArrayList* eventListenerInterfaceList = this->eventListenerInterfaceList;;
    

    EventListenerInterface* eventListenerInterface;;
    

    LayerManagerEventListenerInterface* layerManagerEventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(eventListenerInterfaceList->objectArray[index]);
    
layerManagerEventListenerInterface= (dynamic_cast<LayerManagerEventListenerInterface*>(eventListenerInterface));
    
layerManagerEventListenerInterface->onDeleteLayerManagerEvent(dynamic_cast<LayerManagerEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    auto LayerManagerEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    LayerManagerEventListenerInterface* layerManagerEventListenerInterface = (dynamic_cast<LayerManagerEventListenerInterface*>(eventListenerInterface));;
    
layerManagerEventListenerInterface->onCreateLayerManagerEvent(dynamic_cast<LayerManagerEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_LAYER_EVENT_LAYERMANAGEREVENTHANDLER_CPP
