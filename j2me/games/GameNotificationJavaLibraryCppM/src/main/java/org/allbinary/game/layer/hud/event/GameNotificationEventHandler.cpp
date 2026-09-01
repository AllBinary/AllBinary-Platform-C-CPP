
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
        



            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventListenerInterface.h>

      
#include <org/allbinary/logic/util/event/NullEventListener.h>

      
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameNotificationListenerInterface.h"
#include "GameNotificationEvent.h"

class GameNotificationEventHandler: public BasicEventHandler {

    private: static GameNotificationEventHandler instance() { return GameNotificationEventHandler(); }

    public: static GameNotificationEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameNotificationEventHandler::instance();
    
}


private: GameNotificationEventHandler(){
}


    public: bool enabled = true;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllListeners(){

    EventListenerInterface eventListenerInterface = NullEventListener::NULL_EVENT_LISTENER;;
    

    BasicArrayList list = this->eventListenerInterfaceList;;
    

                        if(list.size() > 0)
                        
                                    {
                                    eventListenerInterface= list.objectArray[0]! as EventListenerInterface;
    

                                    }
                                
super.removeAllListeners();
    

                        if(eventListenerInterface != NullEventListener::NULL_EVENT_LISTENER)
                        
                                    {
                                    this->addListenerInterface(eventListenerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    protected: void process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

                        if(!this->enabled)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    GameNotificationListenerInterface gameNotificationListenerInterface = eventListenerInterface as GameNotificationListenerInterface;;
    
gameNotificationListenerInterface.onGameNotificationEvent(eventObject as GameNotificationEvent);
    
}


};

            

