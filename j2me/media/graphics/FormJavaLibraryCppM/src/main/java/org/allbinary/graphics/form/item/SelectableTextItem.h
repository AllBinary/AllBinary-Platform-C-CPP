
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H

#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABTextItem.h"
#include "ABStringComponent.h"

class SelectableTextItem: public ABTextItem {

public: SelectableTextItem(std::string label, int32_t layout, std::string altText, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public: bool isFocusable();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H
