
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/event/RawKeyEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/event/RawKeyEventListener.h"

auto RawKeyEventHandler::instance_owner() -> RawKeyEventHandler* { static std::unique_ptr<RawKeyEventHandler> value(new RawKeyEventHandler()); return value.get(); }
RawKeyEventHandler* RawKeyEventHandler::instance = RawKeyEventHandler::instance_owner();

    auto RawKeyEventHandler::getInstance() -> RawKeyEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RawKeyEventHandler::instance;
    
}


RawKeyEventHandler::RawKeyEventHandler() : logUtil(LogUtil::getInstance()){
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto RawKeyEventHandler::removeAllListeners() -> void{
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    auto RawKeyEventHandler::addListeners(BasicArrayList* vector) -> void{

    RawKeyEventListener* eventListenerInterface;;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
eventListenerInterface= dynamic_cast<RawKeyEventListener*>(vector->get(index));
    
this->addListener(eventListenerInterface);
    
}

}


    auto RawKeyEventHandler::addListenerSingleThreaded(RawKeyEventListener* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    auto RawKeyEventHandler::addListener(RawKeyEventListener* eventListenerInterface) -> void{

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    auto RawKeyEventHandler::removeListenerSingleThreaded(RawKeyEventListener* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


    auto RawKeyEventHandler::removeListener(RawKeyEventListener* eventListenerInterface) -> void{
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto RawKeyEventHandler::fireEvent(int32_t keyCode, int32_t deviceId, bool repeated) -> void{

    RawKeyEventListener* eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<RawKeyEventListener*>(this->eventListenerInterfaceList->get(index));
    
this->process(keyCode, deviceId, repeated, eventListenerInterface);
    

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
            
    auto RawKeyEventHandler::process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface) -> void{
eventListenerInterface->onEventRaw(keyCode, deviceId, repeated);
    
}


    auto RawKeyEventHandler::getEventListenerInterfaceListP() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->eventListenerInterfaceList;
    
}


    auto RawKeyEventHandler::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(RawKeyEventHandler::TOTAL_LISTENERS);
    
stringBuffer->appendint(this->eventListenerInterfaceList->size());
    

    RawKeyEventListener* eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList->size())
        {

        try {
            eventListenerInterface= dynamic_cast<RawKeyEventListener*>(this->eventListenerInterfaceList->get(index));
    
stringBuffer->append(RawKeyEventHandler::LISTENER_LABEL);
    
stringBuffer->append(JavaString::valueOf(eventListenerInterface));
    

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




        #endif //ORG_ALLBINARY_GAME_INPUT_EVENT_RAWKEYEVENTHANDLER_CPP
