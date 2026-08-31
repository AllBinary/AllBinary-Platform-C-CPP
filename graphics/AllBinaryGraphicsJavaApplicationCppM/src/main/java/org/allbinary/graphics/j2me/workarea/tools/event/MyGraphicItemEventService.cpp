
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Class.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EventListenerList.h"
#include "EventListener.h"
#include "MyGraphicItemEventListener.h"
#include "MyGraphicItemEvent.h"

class MyGraphicItemEventService
            : public Object
         {
        

    private: static listenerList: javax.swing.event.EventListenerList = new javax.swing.event.EventListenerList();

    public static DELETE: string = "delete";

    public static DESELECT: string = "deselect";

    public static SELECT: string = "select";

    public static DUPLICATE: string = "duplicate";

    public static ROTATE: string = "rotate";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static addListener(MyGraphicItemEventListener listener){
MyGraphicItemEventService.listenerList!.add(listener.constructor as Class<any>, listener as java.util.EventListener);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static removeListener(MyGraphicItemEventListener listener){
MyGraphicItemEventService.listenerList!.remove(listener.constructor as Class<any>, listener as java.util.EventListener);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static fire(MyGraphicItemEvent evt){

    listeners: std::vector<any> = listenerList!.getListenerList()!;;
    




                        for (
    i: int32_t = 0;i < listeners.length; )
        {

                        if(listeners[i] == listeners[i +1]!.constructor)
                        
                                    {
                                    
                        if(evt.getCommand()!.compareTo(MyGraphicItemEventService.SELECT) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyGraphicItemEventListener
.
                    highlight(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand()!.compareTo(MyGraphicItemEventService.DESELECT) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyGraphicItemEventListener
.
                    deselect(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand()!.compareTo(MyGraphicItemEventService.DELETE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyGraphicItemEventListener
.
                    delete(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand()!.compareTo(MyGraphicItemEventService.DUPLICATE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyGraphicItemEventListener
.
                    duplicate(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand()!.compareTo(MyGraphicItemEventService.ROTATE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyGraphicItemEventListener
.
                    rotate(evt);
    

                                    }
                                

                                    }
                                
}

}


private constructor (){

            super();
        }


};

            

