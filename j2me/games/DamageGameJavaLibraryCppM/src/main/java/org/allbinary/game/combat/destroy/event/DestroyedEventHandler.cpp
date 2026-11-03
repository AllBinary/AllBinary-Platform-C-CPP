
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
        



        #ifndef ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
        

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

auto DestroyedEventHandler::instance_owner() -> DestroyedEventHandler* { static std::unique_ptr<DestroyedEventHandler> value(new DestroyedEventHandler()); return value.get(); }
DestroyedEventHandler* DestroyedEventHandler::instance = DestroyedEventHandler::instance_owner();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DestroyedEventHandler::getInstance() -> DestroyedEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DestroyedEventHandler::instance;
    
}


DestroyedEventHandler::DestroyedEventHandler() : list(new BasicArrayListD()){
}


    auto DestroyedEventHandler::addListener(CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer) -> void{

                        if(!this->list->contains(collidableDestroyableDamageableLayer))
                        
                                    {
                                    this->list->add(collidableDestroyableDamageableLayer);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DestroyedEventHandler::removeAllListeners() -> void{
this->list->clear();
    
BasicEventHandler::removeAllListeners();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto DestroyedEventHandler::removeListener(EventListenerInterface* eventListenerInterface) -> void{
this->list->remove(eventListenerInterface);
    
BasicEventHandler::removeListener(eventListenerInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto DestroyedEventHandler::fireEvent(AllBinaryEventObject* eventObject) -> void{




                        for (
    int32_t index = this->list->size();--index >= 0; )
        {

        try {
            
    CollidableDestroyableDamageableLayer* collidableDestroyableDamageableLayer = dynamic_cast<CollidableDestroyableDamageableLayer*>(this->list->objectArray[index]);;
    
collidableDestroyableDamageableLayer->onDestroyed(dynamic_cast<DestroyedEvent*>(eventObject));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, EventStrings::getInstance()->FIRE_EVENT, &e);
    
}

}

BasicEventHandler::fireEvent(eventObject);
    
}


                //@Throws(Exception.constructor)
            
    auto DestroyedEventHandler::process(AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) -> void{

    DestroyedEventListenerInterface* destroyedEventListenerInterface = dynamic_cast<DestroyedEventListenerInterface*>(eventListenerInterface);;
    
destroyedEventListenerInterface->onDestroyed(dynamic_cast<DestroyedEvent*>(eventObject));
    
}




        #endif //ORG_ALLBINARY_GAME_COMBAT_DESTROY_EVENT_DESTROYEDEVENTHANDLER_CPP
