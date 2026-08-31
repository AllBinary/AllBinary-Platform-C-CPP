
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
        

    private: static const instance: GameNotificationEventHandler = new GameNotificationEventHandler();

    public static GameNotificationEventHandler getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameNotificationEventHandler.instance;
    
}


private constructor (){

            super();
        }


    public enabled: bool = true;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeAllListeners(){

    eventListenerInterface: EventListenerInterface = NullEventListener.NULL_EVENT_LISTENER;;
    

    list: BasicArrayList = this.eventListenerInterfaceList;;
    

                        if(list.size() > 0)
                        
                                    {
                                    eventListenerInterface= list.objectArray[0]! as EventListenerInterface;
    

                                    }
                                
super.removeAllListeners();
    

                        if(eventListenerInterface != NullEventListener.NULL_EVENT_LISTENER)
                        
                                    {
                                    this.addListenerInterface(eventListenerInterface);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    process(AllBinaryEventObject eventObject, EventListenerInterface eventListenerInterface){

                        if(!this.enabled)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

    gameNotificationListenerInterface: GameNotificationListenerInterface = eventListenerInterface as GameNotificationListenerInterface;;
    
gameNotificationListenerInterface!.onGameNotificationEvent(eventObject as GameNotificationEvent);
    
}


};

            

