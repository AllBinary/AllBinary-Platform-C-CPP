
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H

            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABCustomItem.h"

class ABCustomImageItem: public ABCustomItem {
        

    yOffset: int32_t = 0;

public constructor (string label, Image image, int32_t layout, string altText, BasicColor basicColor, int32_t yOffset);

    public Image getImage();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
