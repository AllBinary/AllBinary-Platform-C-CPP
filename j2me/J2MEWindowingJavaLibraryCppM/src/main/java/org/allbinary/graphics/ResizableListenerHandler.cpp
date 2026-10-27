
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERHANDLER_CPP
        #define ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/ResizableListenerHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/ResizableListenerInterface.h"


ResizableListenerHandler::ResizableListenerHandler() {
        }
        auto ResizableListenerHandler::instance_owner() -> ResizableListenerHandler* { static std::unique_ptr<ResizableListenerHandler> value(new ResizableListenerHandler()); return value.get(); }
ResizableListenerHandler* ResizableListenerHandler::instance = ResizableListenerHandler::instance_owner();

    auto ResizableListenerHandler::getInstance() -> ResizableListenerHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ResizableListenerHandler::instance;
    
}


    auto ResizableListenerHandler::setListener(ResizableListenerInterface* resizableListenerInterface) -> void{
}


    auto ResizableListenerHandler::fire(bool isFullScreen) -> void{
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto ResizableListenerHandler::fireEvent(bool value) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_RESIZABLELISTENERHANDLER_CPP
