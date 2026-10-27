
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Image;
class NullImage;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABCustomImageItem: public ABCustomItem {

    /*protected*/ public: int32_t yOffset = 0;

public: ABCustomImageItem(std::string label, Image* image, int32_t layout, std::string altText, BasicColor* basicColor, int32_t yOffset);

    public: Image* getImage();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/ABCustomItem.h")
#include "org/allbinary/graphics/form/item/ABCustomItem.h"
#endif

        #endif
    
