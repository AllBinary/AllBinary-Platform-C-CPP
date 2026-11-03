
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/input/event/DownGameKeyEventListenerInterface.h"


DownGameKeyEventHandlerBase::DownGameKeyEventHandlerBase() : list(new BasicArrayListD()){
}


    auto DownGameKeyEventHandlerBase::addListener(PlayerGameInput* playerGameInput) -> void{

                        if(!this->list->contains(playerGameInput))
                        
                                    {
                                    this->list->add(playerGameInput);
    

                                    }
                                
}


    auto DownGameKeyEventHandlerBase::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto DownGameKeyEventHandlerBase::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListenerSingleThreaded(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DownGameKeyEventHandlerBase::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto DownGameKeyEventHandlerBase::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    PlayerGameInput* playerGameInput = dynamic_cast<PlayerGameInput*>(this->list->objectArray[index]);;
    
playerGameInput->onDownGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto DownGameKeyEventHandlerBase::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    DownGameKeyEventListenerInterface* downGameKeyEventListenerInterface = dynamic_cast<DownGameKeyEventListenerInterface*>(eventListenerInterface);;
    
downGameKeyEventListenerInterface->onDownGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    
}


    auto DownGameKeyEventHandlerBase::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(BasicEventHandler::toString());
    
stringBuffer->append(DownGameKeyEventHandlerBase::TOTAL_LISTENERS);
    
stringBuffer->appendint(this->list->size());
    

    EventListenerInterface* eventListenerInterface;;
    

    int32_t size = this->list->size();;
    

    int32_t index = 0;;
    

        while(index < size)
        {

        try {
            eventListenerInterface= dynamic_cast<EventListenerInterface*>(this->list->get(index));
    
stringBuffer->append(DownGameKeyEventHandlerBase::LISTENER_LABEL);
    
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




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_DOWNGAMEKEYEVENTHANDLERBASE_CPP
