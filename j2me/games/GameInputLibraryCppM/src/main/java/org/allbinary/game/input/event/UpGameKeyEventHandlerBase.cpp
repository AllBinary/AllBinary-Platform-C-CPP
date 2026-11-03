
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"
        

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
#include "org/allbinary/game/input/event/UpGameKeyEventListenerInterface.h"


UpGameKeyEventHandlerBase::UpGameKeyEventHandlerBase() : list(new BasicArrayListD()){
}


    auto UpGameKeyEventHandlerBase::addListener(PlayerGameInput* playerGameInput) -> void{

                        if(!this->list->contains(playerGameInput))
                        
                                    {
                                    this->list->add(playerGameInput);
    

                                    }
                                
}


    auto UpGameKeyEventHandlerBase::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}


    auto UpGameKeyEventHandlerBase::removeListenerSingleThreaded(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListenerSingleThreaded(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto UpGameKeyEventHandlerBase::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto UpGameKeyEventHandlerBase::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    PlayerGameInput* playerGameInput = dynamic_cast<PlayerGameInput*>(this->list->objectArray[index]);;
    
playerGameInput->onUpGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto UpGameKeyEventHandlerBase::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    UpGameKeyEventListenerInterface* upGameKeyEventListenerInterface = dynamic_cast<UpGameKeyEventListenerInterface*>(eventListenerInterface);;
    
upGameKeyEventListenerInterface->onUpGameKeyEvent(dynamic_cast<GameKeyEvent*>(eventObject));
    
}


    auto UpGameKeyEventHandlerBase::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    int32_t size = this->list->size();;
    
stringBuffer->append(BasicEventHandler::toString());
    
stringBuffer->append(UpGameKeyEventHandlerBase::TOTAL_LISTENERS);
    
stringBuffer->appendint(size);
    




                        for (
    int32_t index = 0;index < size; index++)
        {

        try {
            
    EventListenerInterface* eventListenerInterface = dynamic_cast<EventListenerInterface*>(this->list->get(index));;
    
stringBuffer->append(UpGameKeyEventHandlerBase::LISTENER_LABEL);
    
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




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_UPGAMEKEYEVENTHANDLERBASE_CPP
