
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisplayableInterface {
        

    addCommand(Command cmd);

    int32_t getHeight();

    int32_t getWidth();

    removeCommand(Command cmd);

    setCommandListener(CommandListener l);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_DISPLAYABLEINTERFACE_H
