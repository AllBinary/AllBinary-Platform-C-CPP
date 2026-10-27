
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventListenerInterface.h"

class DestroyedEventHandler: public BasicEventHandler {

    private: static DestroyedEventHandler* instance() { static std::unique_ptr<DestroyedEventHandler> value(new DestroyedEventHandler()); return value.get(); }
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static DestroyedEventHandler* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DestroyedEventHandler::instance();
    
}


    private: BasicArrayList* list = new BasicArrayListD();

private: DestroyedEventHandler(){
}


    public: void addListener(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer){

                        if(!this->list->contains(collidableDestroyableDamageableLayer))
                        
                                    {
                                    this->list->add(collidableDestroyableDamageableLayer);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners(){
this->list->clear();
    
super.removeAllListeners();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeListener(EventListenerInterface* eventListenerInterface){
this->list->remove(eventListenerInterface);
    
super.removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: void fireEvent(AllBinaryEventObject* eventObject){




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->list->objectArray[index]);;
    
collidableDestroyableDamageableLayer->onDestroyed(dynamic_cast<DestroyedEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

super.fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface){

    DestroyedEventListenerInterface* destroyedEventListenerInterface = dynamic_cast<DestroyedEventListenerInterface*>(eventListenerInterface);;
    
destroyedEventListenerInterface->onDestroyed(dynamic_cast<DestroyedEvent*>(eventObject));
    
}


};

            

