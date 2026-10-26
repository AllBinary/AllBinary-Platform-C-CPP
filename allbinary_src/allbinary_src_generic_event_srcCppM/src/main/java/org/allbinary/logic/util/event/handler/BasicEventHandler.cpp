
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
        #include "BasicEventHandlerInterface.h"

class BasicEventHandler
            : public Object
        : public BasicEventHandlerInterface {

    public: static const std::string PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: BasicArrayList eventListenerInterfaceList;

public: BasicEventHandler(){
this->eventListenerInterfaceList= BasicArrayListD();
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

    std::string LISTENER = " Listener: ";;
    
stringBuffer.append("Total Listeners: ");
    
stringBuffer.appendint(this->eventListenerInterfaceList.size());
    

    EventListenerInterface eventListenerInterface;;
    

    int32_t index = 0;;
    

        while(index < this->eventListenerInterfaceList.size())
        {

        try {
            eventListenerInterface= this->eventListenerInterfaceList.objectArray[index];
    
stringBuffer.append(LISTENER);
    
stringBuffer.append(StringUtil::getInstance().toString(eventListenerInterface));
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, commonStrings.TOSTRING, e);
    
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners(){
this->eventListenerInterfaceList= BasicArrayListD();
    
}


    public: void addListenerSingleThreaded(EventListenerInterface eventListenerInterface){

                        if(!this->eventListenerInterfaceList.contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList.add(eventListenerInterface);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addListenerInterface(EventListenerInterface eventListenerInterface){

                        if(!this->eventListenerInterfaceList.contains(eventListenerInterface))
                        
                                    {
                                    this->eventListenerInterfaceList.add(eventListenerInterface);
    

                                    }
                                
}


    public: void removeListenerSingleThreaded(EventListenerInterface eventListenerInterface){
this->eventListenerInterfaceList.remove(eventListenerInterface);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface eventListenerInterface){
this->eventListenerInterfaceList.remove(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void fireEvent(AllBinaryEventObject eventObject){

    int32_t index = 0;;
    

    EventListenerInterface eventListenerInterface;;
    

        while(index < this->eventListenerInterfaceList.size())
        {

        try {
            eventListenerInterface= this->eventListenerInterfaceList.objectArray[index];
    
this->process(eventObject, eventListenerInterface);
    

                //: 
} catch(e) 
            {

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
this->logUtil.put(commonStrings.EXCEPTION, this, EventStrings::getInstance().FIRE_EVENT, e);
    
}

index++;
    
}

}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){
eventListenerInterface.onEvent(eventObject);
    
}


    public: BasicArrayList getEventListenerInterfaceListP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->eventListenerInterfaceList;
    
}


};

            

