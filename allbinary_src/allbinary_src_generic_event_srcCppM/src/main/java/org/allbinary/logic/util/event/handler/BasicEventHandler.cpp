
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
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"


BasicEventHandler::BasicEventHandler() : logUtil(LogUtil::getInstance()){
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto BasicEventHandler::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    std::string LISTENER = " Listener: ";;
    
stringBuffer->append("Total Listeners: ");
    
stringBuffer->appendint(this->eventListenerInterfaceList->size());
    

    EventListenerInterface* eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->eventListenerInterfaceList->objectArray[index]);
    
stringBuffer->append(LISTENER);
    
stringBuffer->append(StringUtil::getInstance()->toString(eventListenerInterface));
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->TOSTRING, &e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEventHandler::removeAllListeners() -> void{
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto BasicEventHandler::addListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEventHandler::addListenerInterface(EventListenerInterface* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    auto BasicEventHandler::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto BasicEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{

    int32_t index = 0;;
    

    EventListenerInterface* eventListenerInterface;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->eventListenerInterfaceList->objectArray[index]);
    
this->process(eventObject, eventListenerInterface);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
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




        #endif //ORG_ALLBINARY_LOGIC_UTIL_EVENT_HANDLER_BASICEVENTHANDLER_CPP
