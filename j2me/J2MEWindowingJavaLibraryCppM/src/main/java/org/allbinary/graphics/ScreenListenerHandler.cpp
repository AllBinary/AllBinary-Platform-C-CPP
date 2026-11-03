
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_CPP
        #define ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/ScreenListenerHandler.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/ScreenEmptyListener.h"
#include "org/allbinary/graphics/ScreenListenerInterface.h"


ScreenListenerHandler::ScreenListenerHandler() : screenListenerInterface(new ScreenEmptyListener()) {
        }
        auto ScreenListenerHandler::instance_owner() -> ScreenListenerHandler* { static std::unique_ptr<ScreenListenerHandler> value(new ScreenListenerHandler()); return value.get(); }
ScreenListenerHandler* ScreenListenerHandler::instance = ScreenListenerHandler::instance_owner();

    auto ScreenListenerHandler::getInstance() -> ScreenListenerHandler*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ScreenListenerHandler::instance;
    
}


    auto ScreenListenerHandler::setListener(ScreenListenerInterface* screenListenerInterface) -> void{
this->screenListenerInterface= screenListenerInterface;
    
}


    auto ScreenListenerHandler::fireWithState(bool isFullScreen) -> void{
this->screenListenerInterface->onFullScreen(isFullScreen);
    
}


    auto ScreenListenerHandler::fire() -> void{
this->screenListenerInterface->onFullScreenDisplay();
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_SCREENLISTENERHANDLER_CPP
