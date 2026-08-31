
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

    public static addListener(MyGraphicItemEventListener listener);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static removeListener(MyGraphicItemEventListener listener);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static fire(MyGraphicItemEvent evt);

private constructor ();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_TOOLS_EVENT_MYGRAPHICITEMEVENTSERVICE_H
