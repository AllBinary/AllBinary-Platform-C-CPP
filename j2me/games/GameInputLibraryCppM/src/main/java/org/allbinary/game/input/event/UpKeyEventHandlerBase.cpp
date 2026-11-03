
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/UpKeyEventListenerInterface.h"


UpKeyEventHandlerBase::UpKeyEventHandlerBase() : list(new BasicArrayListD()){
}


    auto UpKeyEventHandlerBase::addListener(PlayerGameInput* playerGameInput) -> void{

                        if(!this->list->contains(playerGameInput))
                        
                                    {
                                    this->list->add(playerGameInput);
    

                                    }
                                
}


    auto UpKeyEventHandlerBase::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto UpKeyEventHandlerBase::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListenerSingleThreaded(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UpKeyEventHandlerBase::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto UpKeyEventHandlerBase::fireEventForInteger(int32_t eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    PlayerGameInput* playerGameInput = dynamic_cast<PlayerGameInput*>(this->list->objectArray[index]);;
    
playerGameInput->onUpKeyEvent(eventObject);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}


    int32_t index = 0;;
    

    EventListenerInterface* eventListenerInterface;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->eventListenerInterfaceList->get(index));
    
this->processForInteger(eventObject, eventListenerInterface);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    auto UpKeyEventHandlerBase::processForInteger(int32_t eventObject, EventListenerInterface* eventListenerInterface) -> void{

    UpKeyEventListenerInterface* upKeyEventListenerInterface = dynamic_cast<UpKeyEventListenerInterface*>(eventListenerInterface);;
    
upKeyEventListenerInterface->onUpKeyEvent(eventObject);
    
}


    auto UpKeyEventHandlerBase::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(BasicEventHandler::toString());
    
stringBuffer->append(UpKeyEventHandlerBase::TOTAL_LISTENERS);
    
stringBuffer->appendint(this->list->size());
    




                        for (
    int32_t index = 0;index < this->list->size(); index++)
        {

        try {
            
    EventListenerInterface* eventListenerInterface = dynamic_cast<EventListenerInterface*>(this->list->get(index));;
    
stringBuffer->append(UpKeyEventHandlerBase::LISTENER_LABEL);
    
stringBuffer->append(eventListenerInterface->toString());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, &e);
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPKEYEVENTHANDLERBASE_CPP
