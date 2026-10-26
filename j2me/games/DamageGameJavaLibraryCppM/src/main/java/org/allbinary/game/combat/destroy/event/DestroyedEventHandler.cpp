
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DestroyedEvent.h"
#include "DestroyedEventListenerInterface.h"

class DestroyedEventHandler: public BasicEventHandler {

    private: static DestroyedEventHandler instance() { return DestroyedEventHandler(); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static DestroyedEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyedEventHandler::instance();
    
}


    private: const BasicArrayList list = BasicArrayListD();

private: DestroyedEventHandler(){
}


    public: void addListener(CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer){

                        if(!this->list.contains(collidableDestroyableDamageableLayer))
                        
                                    {
                                    this->list.add(collidableDestroyableDamageableLayer);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners(){
this->list.clear();
    
super.removeAllListeners();
    
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
            
    CollidableDestroyableDamageableLayer collidableDestroyableDamageableLayer = this->list.objectArray[index];;
    
collidableDestroyableDamageableLayer.onDestroyed(eventObject);
    

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

    DestroyedEventListenerInterface destroyedEventListenerInterface = eventListenerInterface;;
    
destroyedEventListenerInterface.onDestroyed(eventObject);
    
}


};

            

