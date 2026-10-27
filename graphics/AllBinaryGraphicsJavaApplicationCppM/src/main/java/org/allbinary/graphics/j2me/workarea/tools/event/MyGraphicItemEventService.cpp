
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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/event/EventListenerList.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/EventListener.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h"
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h"

class MyGraphicItemEventService
            : public Object
         {

    private: static javax::swing::event::EventListenerList* listenerList() { static std::unique_ptr<javax::swing::event::EventListenerList> value(new javax::swing::event::EventListenerList()); return value.get(); }

    public: static inline std::string DELETE = "delete";

    public: static inline std::string DESELECT = "deselect";

    public: static inline std::string SELECT = "select";

    public: static inline std::string DUPLICATE = "duplicate";

    public: static inline std::string ROTATE = "rotate";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void addListener(MyGraphicItemEventListener* listener){
MyGraphicItemEventService::listenerList()->add(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void removeListener(MyGraphicItemEventListener* listener){
MyGraphicItemEventService::listenerList()->remove(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void fire(MyGraphicItemEvent* evt){

    std::vector<Object*> listeners = listenerList()->getListenerList();;
    




                        for (
    int32_t i = 0;i < listeners.size(); )
        {

                        if(listeners[i] == listeners[i +1].getClass())
                        
                                    {
                                    
                        if(evt->getCommand()->compareTo(MyGraphicItemEventService::SELECT) == 0)
                        
                                    {
                                     = dynamic_cast<MyGraphicItemEventListener*>(listeners[i +1])
.
                    highlight(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyGraphicItemEventService::DESELECT) == 0)
                        
                                    {
                                     = dynamic_cast<MyGraphicItemEventListener*>(listeners[i +1])
.
                    deselect(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyGraphicItemEventService::DELETE) == 0)
                        
                                    {
                                     = dynamic_cast<MyGraphicItemEventListener*>(listeners[i +1])
.
                    delete(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyGraphicItemEventService::DUPLICATE) == 0)
                        
                                    {
                                     = dynamic_cast<MyGraphicItemEventListener*>(listeners[i +1])
.
                    duplicate(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyGraphicItemEventService::ROTATE) == 0)
                        
                                    {
                                     = dynamic_cast<MyGraphicItemEventListener*>(listeners[i +1])
.
                    rotate(evt);
    

                                    }
                                

                                    }
                                
}

}


private: MyGraphicItemEventService(){
}


};

            

