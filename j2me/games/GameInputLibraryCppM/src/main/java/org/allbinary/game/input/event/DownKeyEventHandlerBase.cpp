
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
        #include "GameKeyEvent.h"
#include "DownKeyEventListenerInterface.h"

class DownKeyEventHandlerBase: public BasicEventHandler {
        

    private: static const TOTAL_LISTENERS: string = " Total PlayerGameInput Listeners: ";

    private: static const LISTENER_LABEL: string = " PlayerGameInput Listener: ";

    private: const list: BasicArrayList = new BasicArrayListD();

 constructor (){

            super();
        }


    public addListener(PlayerGameInput playerGameInput){

                        if(!this.list.contains(playerGameInput))
                        
                                    {
                                    this.list.add(playerGameInput);
    

                                    }
                                
}


    public removeAllListeners(){
this.list.clear();
    
super.removeAllListeners();
    
}


    public removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
this.list.remove(eventListenerInterface);
    
super.removeListenerSingleThreaded(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeListener(EventListenerInterface eventListenerInterface){
this.list.remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public fireEventI(Integer eventObject){




                        for (
    index: int32_t = this.list.size()!;--index >= 0; )
        {

        try {
            
    playerGameInput: PlayerGameInput = this.list.objectArray[index]! as PlayerGameInput;;
    
playerGameInput!.onDownKey(eventObject);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}


    index: int32_t = 0;;
    

    eventListenerInterface: EventListenerInterface;;
    

        while(index < this.eventListenerInterfaceList!.size())
        {

        try {
            eventListenerInterface= this.eventListenerInterfaceList!.get(index) as EventListenerInterface;
    
this.processI(eventObject, eventListenerInterface);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    public fireEventForGameKeyEvent(GameKeyEvent eventObject){

    size: int32_t = this.list.size()!;;
    




                        for (
    index: int32_t = size;--index >= 0; )
        {

        try {
            
    playerGameInput: PlayerGameInput = this.list.objectArray[index]! as PlayerGameInput;;
    
playerGameInput!.onDownKeyEvent(eventObject);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

}


    index: int32_t = 0;;
    

    eventListenerInterface: EventListenerInterface;;
    

        while(index < this.eventListenerInterfaceList!.size())
        {

        try {
            eventListenerInterface= this.eventListenerInterfaceList!.get(index) as EventListenerInterface;
    
this.processEvent(eventObject, eventListenerInterface);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    processI(Integer eventObject, EventListenerInterface eventListenerInterface){

    downKeyEventListenerInterface: DownKeyEventListenerInterface = eventListenerInterface as DownKeyEventListenerInterface;;
    
downKeyEventListenerInterface!.onDownKey(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    processEvent(GameKeyEvent eventObject, EventListenerInterface eventListenerInterface){

    downKeyEventListenerInterface: DownKeyEventListenerInterface = eventListenerInterface as DownKeyEventListenerInterface;;
    
downKeyEventListenerInterface!.onDownKeyEvent(eventObject);
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(super.toString());
    
stringBuffer!.append(DownKeyEventHandlerBase.TOTAL_LISTENERS);
    
stringBuffer!.appendint(this.list.size());
    

    eventListenerInterface: EventListenerInterface;;
    




                        for (
    index: int32_t = 0;index < this.list.size(); index++)
        {

        try {
            eventListenerInterface= this.list.get(index) as EventListenerInterface;
    
stringBuffer!.append(DownKeyEventHandlerBase.LISTENER_LABEL);
    
stringBuffer!.append(eventListenerInterface!.toString());
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, this.commonStrings!.TOSTRING, e);
    
}

}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

