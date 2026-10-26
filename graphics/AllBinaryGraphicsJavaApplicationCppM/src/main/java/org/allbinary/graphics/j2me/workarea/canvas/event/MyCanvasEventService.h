
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/Exception.h"
        
















                                        
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

    public: static void addListener(MyCanvasEventListener listener);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void removeListener(MyCanvasEventListener listener);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static void fire(MyCanvasEvent evt);

private: MyCanvasEventService();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTSERVICE_H
