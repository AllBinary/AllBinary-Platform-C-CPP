
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H

#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ColorChangeEventHandler: public BasicEventHandler {
        

    private: static const eventHandler: ColorChangeEventHandler = new ColorChangeEventHandler();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static ColorChangeEventHandler getInstance();

private constructor ();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_H
