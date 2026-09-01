
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
        



            #include <vector>
        
            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Class.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EventListenerList.h"
#include "EventListener.h"
#include "MyCanvasEventListener.h"
#include "MyCanvasEvent.h"

class MyCanvasEventService
            : public Object
         {

    private: static javax::swing::event::EventListenerList listenerList = javax::swing::event::EventListenerList();

    public: static std::string DELETE = "delete";

    public: static std::string DUPLICATE = "duplicate";

    public: static std::string SELECT = "select";

    public: static std::string ROTATE = "rotate";

    public: static std::string EXPLODE = "explode";

    public: static std::string AUTOEXPLODE = "autoExplode";

    public: static std::string CENTER = "center";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void addListener(MyCanvasEventListener listener){
MyCanvasEventService::listenerList.add(listener.constructor as Class<any>, listener as java::util::EventListener);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void removeListener(MyCanvasEventListener listener){
MyCanvasEventService::listenerList.remove(listener.constructor as Class<any>, listener as java::util::EventListener);
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void fire(MyCanvasEvent evt){

    std::vector<Object*> listeners = listenerList.getListenerList();;
    




                        for (
    int32_t i = 0;i < listeners.size(); )
        {

                        if(listeners[i] == listeners[i +1]!.constructor)
                        
                                    {
                                    
                        if(evt.getCommand().compareTo(MyCanvasEventService::DELETE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    delete(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::DUPLICATE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    duplicate(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::SELECT) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    select(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::ROTATE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    rotate(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::EXPLODE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    explode(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::AUTOEXPLODE) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    autoExplode(evt);
    

                                    }
                                
                             else 
                        if(evt.getCommand().compareTo(MyCanvasEventService::CENTER) == 0)
                        
                                    {
                                     = listeners[i +1]! as MyCanvasEventListener
.
                    center(evt);
    

                                    }
                                

                                    }
                                
}

}


private: MyCanvasEventService(){
}


};

            

