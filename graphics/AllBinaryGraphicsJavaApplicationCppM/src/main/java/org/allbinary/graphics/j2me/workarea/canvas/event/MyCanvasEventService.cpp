
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventService.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/EventListenerList.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/EventListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEventListener.h"
#include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"

auto MyCanvasEventService::listenerList_owner() -> javax::swing::event::EventListenerList* { static std::unique_ptr<javax::swing::event::EventListenerList> value(new javax::swing::event::EventListenerList()); return value.get(); }
javax::swing::event::EventListenerList* MyCanvasEventService::listenerList = MyCanvasEventService::listenerList_owner();

MyCanvasEventService::MyCanvasEventService(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvasEventService::addListener(MyCanvasEventListener* listener) -> void{
MyCanvasEventService::listenerList->add(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvasEventService::removeListener(MyCanvasEventListener* listener) -> void{
MyCanvasEventService::listenerList->remove(listener->getClass(), dynamic_cast<java::util::EventListener*>(listener));
    
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvasEventService::fire(MyCanvasEvent* evt) -> void{

    std::vector<Object*> listeners = listenerList->getListenerList();;
    




                        for (
    int32_t i = 0;i < listeners.size(); )
        {

                        if(listeners[i] == listeners[i +1]->getClass())
                        
                                    {
                                    
                        if(evt->getCommand()->compareTo(MyCanvasEventService::DELETE) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    delete_(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::DUPLICATE) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    duplicate(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::SELECT) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    select(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::ROTATE) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    rotate(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::EXPLODE) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    explode(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::AUTOEXPLODE) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    autoExplode(evt);
    

                                    }
                                
                             else 
                        if(evt->getCommand()->compareTo(MyCanvasEventService::CENTER) == 0)
                        
                                    {
                                     = dynamic_cast<MyCanvasEventListener*>(listeners[i +1])
.
                    center(evt);
    

                                    }
                                

                                    }
                                
}

}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_CPP
