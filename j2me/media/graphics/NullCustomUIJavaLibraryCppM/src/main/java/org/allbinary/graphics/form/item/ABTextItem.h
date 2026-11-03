
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"
class ABStringComponent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABTextItem: public CustomCustomItem, public virtual ABCustomItemInterface {

public: ABTextItem(std::string label, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void keyPressed(int32_t keyCode);

    public: void paintUnselected(Graphics* graphics, int32_t x, int32_t y);

    public: ABStringComponent* getLabelStringComponent();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/CustomCustomItem.h")
#include "org/allbinary/graphics/form/item/CustomCustomItem.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABCustomItemInterface.h")
#include "org/allbinary/graphics/form/item/ABCustomItemInterface.h"
#endif
#if __has_include("org/allbinary/graphics/form/item/ABStringComponent.h")
#include "org/allbinary/graphics/form/item/ABStringComponent.h"
#endif

        #endif
    
