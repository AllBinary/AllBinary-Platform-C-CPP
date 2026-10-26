
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_H

            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AboutCommandProcessor
            : public Object
         {

    private: static AboutCommandProcessor instance() { return AboutCommandProcessor(); }

    public: static AboutCommandProcessor getInstance();

    public: void process(CommandListener midletCommandListener, Command command, Canvas canvas);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_SCREEN_ABOUTCOMMANDPROCESSOR_H
