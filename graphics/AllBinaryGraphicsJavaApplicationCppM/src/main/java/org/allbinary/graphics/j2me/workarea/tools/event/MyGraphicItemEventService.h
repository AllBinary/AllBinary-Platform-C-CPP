
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class EventListenerList;
class EventListener;
class MyGraphicItemEventListener;
class MyGraphicItemEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyGraphicItemEventService
            : public virtual Object
         {

    private: static javax::swing::event::EventListenerList* listenerList_owner();
    private: static javax::swing::event::EventListenerList* listenerList;

    public: static inline std::string DELETE = "delete";

    public: static inline std::string DESELECT = "deselect";

    public: static inline std::string SELECT = "select";

    public: static inline std::string DUPLICATE = "duplicate";

    public: static inline std::string ROTATE = "rotate";
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void addListener(MyGraphicItemEventListener* listener);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void removeListener(MyGraphicItemEventListener* listener);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void fire(MyGraphicItemEvent* evt);

private: MyGraphicItemEventService();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H_COMPLETE
        #if __has_include("org/allbinary/graphics/j2me/workarea/tools/event/EventListenerList.h")
#include "org/allbinary/graphics/j2me/workarea/tools/event/EventListenerList.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/event/EventListener.h")
#include "org/allbinary/graphics/j2me/workarea/tools/event/EventListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h")
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEventListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h")
#include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h"
#endif

        #endif
    
