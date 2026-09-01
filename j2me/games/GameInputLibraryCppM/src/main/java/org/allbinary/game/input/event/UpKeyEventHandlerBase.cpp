
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UpKeyEventListenerInterface.h"

class UpKeyEventHandlerBase: public BasicEventHandler {

    private: static const std::string TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";

    private: static const std::string LISTENER_LABEL = " PlayerGameInput Listener: ";

    private: const BasicArrayList list = BasicArrayListD();

: UpKeyEventHandlerBase(){
}


    public: void addListener(PlayerGameInput playerGameInput){

                        if(!this->list.contains(playerGameInput))
                        
                                    {
                                    this->list.add(playerGameInput);
    

                                    }
                                
}


    public: void removeAllListeners(){
this->list.clear();
    
super.removeAllListeners();
    
}


    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
this->list.remove(eventListenerInterface);
    
super.removeListenerSingleThreaded(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface eventListenerInterface){
this->list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEventForInteger(Integer eventObject){




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    PlayerGameInput playerGameInput = this->list.objectArray[index]! as PlayerGameInput;;
    
playerGameInput.onUpKeyEvent(eventObject);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}


    int32_t index = 0;;
    

    EventListenerInterface eventListenerInterface;;
    

        while(index < this->eventListenerInterfaceList.size())
        {

        try {
            eventListenerInterface= this->eventListenerInterfaceList.get(index) as EventListenerInterface;
    
this->processForInteger(eventObject, eventListenerInterface);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void processForInteger(Integer eventObject, EventListenerInterface eventListenerInterface){

    UpKeyEventListenerInterface upKeyEventListenerInterface = eventListenerInterface as UpKeyEventListenerInterface;;
    
upKeyEventListenerInterface.onUpKeyEvent(eventObject);
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(super.toString());
    
stringBuffer.append(UpKeyEventHandlerBase::TOTAL_LISTENERS);
    
stringBuffer.appendint(this->list.size());
    




                        for (
    int32_t index = 0;index < this->list.size(); index++)
        {

        try {
            
    EventListenerInterface eventListenerInterface = this->list.get(index) as EventListenerInterface;;
    
stringBuffer.append(UpKeyEventHandlerBase::LISTENER_LABEL);
    
stringBuffer.append(eventListenerInterface.toString());
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.TOSTRING, e);
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

