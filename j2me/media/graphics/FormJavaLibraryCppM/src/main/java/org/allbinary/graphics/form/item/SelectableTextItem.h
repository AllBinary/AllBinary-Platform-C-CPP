
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABTextItem.h"
class ABStringComponent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectableTextItem: public ABTextItem {

public: SelectableTextItem(std::string label, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: bool isFocusable();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextItem.h")
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABStringComponent.h")
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#endif

        #endif
    
