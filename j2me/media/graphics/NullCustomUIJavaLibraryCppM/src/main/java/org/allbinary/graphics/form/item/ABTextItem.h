
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"

class ABTextItem: public CustomCustomItem, public ABCustomItemInterface {

public: ABTextItem(std::string label, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void keyPressed(int32_t keyCode);

    public: void paintUnselected(Graphics* graphics, int32_t x, int32_t y);

    public: ABStringComponent* getLabelStringComponent();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
