
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
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameKeyEvent.h"
#include "DownGameKeyEventListenerInterface.h"

class DownGameKeyEventHandlerBase: public BasicEventHandler {

    private: static const std::string TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";

    private: static const std::string LISTENER_LABEL = " PlayerGameInput Listener: ";

    private: const BasicArrayList list = BasicArrayListD();

: DownGameKeyEventHandlerBase(){
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
            
    public: void fireEvent(AllBinaryEventObject eventObject){




                        for (
    int32_t index = this->list.size();--index >= 0; )
        {

        try {
            
    PlayerGameInput playerGameInput = this->list.objectArray[index]! as PlayerGameInput;;
    
playerGameInput.onDownGameKeyEvent(eventObject as GameKeyEvent);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

    DownGameKeyEventListenerInterface downGameKeyEventListenerInterface = eventListenerInterface as DownGameKeyEventListenerInterface;;
    
downGameKeyEventListenerInterface.onDownGameKeyEvent(eventObject as GameKeyEvent);
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(super.toString());
    
stringBuffer.append(DownGameKeyEventHandlerBase::TOTAL_LISTENERS);
    
stringBuffer.appendint(this->list.size());
    

    EventListenerInterface eventListenerInterface;;
    

    int32_t size = this->list.size();;
    

    int32_t index = 0;;
    

        while(index < size)
        {

        try {
            eventListenerInterface= this->list.get(index) as EventListenerInterface;
    
stringBuffer.append(DownGameKeyEventHandlerBase::LISTENER_LABEL);
    
stringBuffer.append(eventListenerInterface.toString());
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.TOSTRING, e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            

