
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RawKeyEventListener.h"

class RawKeyEventHandler
            : public Object
         {
        

    private: static const instance: RawKeyEventHandler = new RawKeyEventHandler();

    public static RawKeyEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RawKeyEventHandler.instance;
    
}


    private: static const TOTAL_LISTENERS: string = "Total Listeners: ";

    private: static const LISTENER_LABEL: string = " Listener: ";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    eventListenerInterfaceList: BasicArrayList;

public constructor (){

            super();
        this.eventListenerInterfaceList= new BasicArrayListD();
    
}


    public removeAllListeners(){
this.eventListenerInterfaceList= new BasicArrayListD();
    
}


    public addListeners(BasicArrayList vector){

    eventListenerInterface: RawKeyEventListener;;
    

    size: int32_t = vector.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
eventListenerInterface= vector.get(index) as RawKeyEventListener;
    
this.addListener(eventListenerInterface);
    
}

}


    public addListenerSingleThreaded(RawKeyEventListener eventListenerInterface){

                        if(!this.eventListenerInterfaceList!.contains(eventListenerInterface))
                        
                                    {
                                    this.eventListenerInterfaceList!.add(eventListenerInterface);
    

                                    }
                                
}


    public addListener(RawKeyEventListener eventListenerInterface){

                        if(!this.eventListenerInterfaceList!.contains(eventListenerInterface))
                        
                                    {
                                    this.eventListenerInterfaceList!.add(eventListenerInterface);
    

                                    }
                                
}


    public removeListenerSingleThreaded(RawKeyEventListener eventListenerInterface){
this.eventListenerInterfaceList!.remove(eventListenerInterface);
    
}


    public removeListener(RawKeyEventListener eventListenerInterface){
this.eventListenerInterfaceList!.remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public fireEvent(int32_t keyCode, int32_t deviceId, bool repeated){

    eventListenerInterface: RawKeyEventListener;;
    

    index: int32_t = 0;;
    

        while(index < this.eventListenerInterfaceList!.size())
        {

        try {
            eventListenerInterface= this.eventListenerInterfaceList!.get(index) as RawKeyEventListener;
    
this.process(keyCode, deviceId, repeated, eventListenerInterface);
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, EventStrings.getInstance()!.FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    process(int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener eventListenerInterface){
eventListenerInterface!.onEventRaw(keyCode, deviceId, repeated);
    
}


    public BasicArrayList getEventListenerInterfaceListP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.eventListenerInterfaceList;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(RawKeyEventHandler.TOTAL_LISTENERS);
    
stringBuffer!.appendint(this.eventListenerInterfaceList!.size());
    

    eventListenerInterface: RawKeyEventListener;;
    

    index: int32_t = 0;;
    

        while(index < this.eventListenerInterfaceList!.size())
        {

        try {
            eventListenerInterface= this.eventListenerInterfaceList!.get(index) as RawKeyEventListener;
    
stringBuffer!.append(RawKeyEventHandler.LISTENER_LABEL);
    
stringBuffer!.append(eventListenerInterface!.toString());
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, commonStrings!.TOSTRING, e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            

