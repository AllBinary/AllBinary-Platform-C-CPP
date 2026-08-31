
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H

#include <javax/microedition/lcdui/Command.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABTextItem.h"

class CommandTextItem: public ABTextItem {
        

    private: const command: Command;

public constructor (Command command, int32_t layout, string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public bool isFocusable();

    public Command getCommand();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_COMMANDTEXTITEM_H
