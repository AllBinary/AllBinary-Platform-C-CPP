
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2022 AllBinary
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/screen/AboutCommandProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AboutCommandProcessor::AboutCommandProcessor() {
        }
        auto AboutCommandProcessor::instance_owner() -> AboutCommandProcessor* { static std::unique_ptr<AboutCommandProcessor> value(new AboutCommandProcessor()); return value.get(); }
AboutCommandProcessor* AboutCommandProcessor::instance = AboutCommandProcessor::instance_owner();

    auto AboutCommandProcessor::getInstance() -> AboutCommandProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AboutCommandProcessor::instance;
    
}


    auto AboutCommandProcessor::process(CommandListener* midletCommandListener, Command* command, Canvas* canvas) -> void{
midletCommandListener->commandAction(command, canvas);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_CPP
