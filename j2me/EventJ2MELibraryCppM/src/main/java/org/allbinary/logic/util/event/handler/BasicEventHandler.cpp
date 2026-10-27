
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"


BasicEventHandler::BasicEventHandler() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), eventStrings(EventStrings::getInstance()){
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto BasicEventHandler::removeAllListeners() -> void{
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto BasicEventHandler::addListeners(BasicArrayList* vector) -> void{

    EventListenerInterface* eventListenerInterface;;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
eventListenerInterface= dynamic_cast<EventListenerInterface*>(vector->get(index));
    
this->addListenerInterface(eventListenerInterface);
    
}

}


    auto BasicEventHandler::removeListeners(BasicArrayList* vector) -> void{

    EventListenerInterface* eventListenerInterface;;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
eventListenerInterface= dynamic_cast<EventListenerInterface*>(vector->get(index));
    
this->removeListener(eventListenerInterface);
    
}

}


    auto BasicEventHandler::addListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    auto BasicEventHandler::addListenerInterface(EventListenerInterface* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    auto BasicEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


    auto BasicEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto BasicEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{

    EventListenerInterface* eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->eventListenerInterfaceList->get(index));
    
this->process(eventObject, eventListenerInterface);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->eventStrings->FIRE_EVENT, &e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    auto BasicEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{
eventListenerInterface->onEvent(eventObject);
    
}


    auto BasicEventHandler::getEventListenerInterfaceListP() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventListenerInterfaceList;
    
}


    auto BasicEventHandler::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(this->eventStrings->TOTAL_LISTENERS);
    
stringBuffer->appendint(this->eventListenerInterfaceList->size());
    

    EventListenerInterface* eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->eventListenerInterfaceList->get(index));
    
stringBuffer->append(this->eventStrings->LISTENER_LABEL);
    
stringBuffer->append(eventListenerInterface->toString());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, &e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_CPP
