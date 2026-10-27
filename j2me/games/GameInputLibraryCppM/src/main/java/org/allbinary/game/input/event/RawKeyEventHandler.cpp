
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

class RawKeyEventHandler
            : public Object
         {

    private: static RawKeyEventHandler* instance() { static std::unique_ptr<RawKeyEventHandler> value(new RawKeyEventHandler()); return value.get(); }

    public: static RawKeyEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RawKeyEventHandler::instance();
    
}


    private: static inline const std::string TOTAL_LISTENERS = "Total Listeners: ";

    private: static inline const std::string LISTENER_LABEL = " Listener: ";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: BasicArrayList* eventListenerInterfaceList;

public: RawKeyEventHandler(){
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    public: void removeAllListeners(){
this->eventListenerInterfaceList= new BasicArrayListD();
    
}


    public: void addListeners(BasicArrayList* vector){

    RawKeyEventListener* eventListenerInterface;;
    

    int32_t size = vector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
eventListenerInterface= dynamic_cast<RawKeyEventListener*>(vector->get(index));
    
this->addListener(eventListenerInterface);
    
}

}


    public: void addListenerSingleThreaded(RawKeyEventListener* eventListenerInterface){

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    public: void addListener(RawKeyEventListener* eventListenerInterface){

                        if(!this->eventListenerInterfaceList->contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList->add(eventListenerInterface);
    

                                    }
                                
}


    public: void removeListenerSingleThreaded(RawKeyEventListener* eventListenerInterface){
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


    public: void removeListener(RawKeyEventListener* eventListenerInterface){
this->eventListenerInterfaceList->remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(int32_t keyCode, int32_t deviceId, bool repeated){

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
            
    protected: void process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface){
eventListenerInterface->onEventRaw(keyCode, deviceId, repeated);
    
}


    public: BasicArrayList* getEventListenerInterfaceListP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventListenerInterfaceList;
    
}


    public: std::string toString(){

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
    
stringBuffer->append(eventListenerInterface->toString());
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->put(commonStrings->EXCEPTION, this, commonStrings->TOSTRING, &e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


};

            

