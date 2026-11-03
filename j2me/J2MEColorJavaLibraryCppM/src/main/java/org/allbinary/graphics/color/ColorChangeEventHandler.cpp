
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_CPP
        #define ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/color/ColorChangeEventHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/util/event/handler/BasicEventHandler.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto ColorChangeEventHandler::eventHandler_owner() -> ColorChangeEventHandler* { static std::unique_ptr<ColorChangeEventHandler> value(new ColorChangeEventHandler()); return value.get(); }
ColorChangeEventHandler* ColorChangeEventHandler::eventHandler = ColorChangeEventHandler::eventHandler_owner();

ColorChangeEventHandler::ColorChangeEventHandler(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ColorChangeEventHandler::getInstance() -> ColorChangeEventHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ColorChangeEventHandler::eventHandler;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_COLOR_COLORCHANGEEVENTHANDLER_CPP
