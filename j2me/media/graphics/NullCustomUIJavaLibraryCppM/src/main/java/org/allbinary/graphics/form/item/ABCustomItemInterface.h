
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ABCustomItemInterface {

    int32_t getMinimumWidth();

    int32_t getMinimumHeight();

    std::string getLabel();

    void paintXY(Graphics graphics, int32_t x, int32_t y);

    void paintUnselected(Graphics graphics, int32_t x, int32_t y);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
