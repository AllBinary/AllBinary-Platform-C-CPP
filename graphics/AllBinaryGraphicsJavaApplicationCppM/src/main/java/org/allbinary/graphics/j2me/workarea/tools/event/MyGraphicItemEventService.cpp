
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventService.h"
        

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

auto MyGraphicItemEventService::listenerList_owner() -> javax::swing::event::EventListenerList* { static std::unique_ptr<javax::swing::event::EventListenerList> value(new javax::swing::event::EventListenerList()); return value.get(); }
javax::swing::event::EventListenerList* MyGraphicItemEventService::listenerList = MyGraphicItemEventService::listenerList_owner();

MyGraphicItemEventService::MyGraphicItemEventService(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyGraphicItemEventService::addListener(MyGraphicItemEventListener* listener) -> void{
MyGraphicItemEventService::listenerList->add(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyGraphicItemEventService::removeListener(MyGraphicItemEventListener* listener) -> void{
MyGraphicItemEventService::listenerList->remove(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyGraphicItemEventService::fire(MyGraphicItemEvent* evt) -> void{

    std::vector<Object*> listeners = listenerList->getListenerList();;
    




                        for (
    int32_t i = 0;i < listeners.size(); )
        {

                        if(listeners[i] == listeners[i +1]->getClass())
                        
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
                    delete_(evt);
    

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




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_CPP
