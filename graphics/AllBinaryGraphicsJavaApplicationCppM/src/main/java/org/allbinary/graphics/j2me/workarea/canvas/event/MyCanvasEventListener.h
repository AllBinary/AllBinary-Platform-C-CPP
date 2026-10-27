
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTLISTENER_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTLISTENER_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/canvas/event/MyCanvasEvent.h"

class MyCanvasEventListener {

    public: virtual void delete_(MyCanvasEvent* evt) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void duplicate(MyCanvasEvent* evt) = 0;

    public: virtual void select(MyCanvasEvent* evt) = 0;

    public: virtual void rotate(MyCanvasEvent* evt) = 0;

    public: virtual void explode(MyCanvasEvent* evt) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void autoExplode(MyCanvasEvent* evt) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void center(MyCanvasEvent* evt) = 0;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_WORKAREA_CANVAS_EVENT_MYCANVASEVENTLISTENER_H
