
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/ABCustomImageItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <javax/microedition/lcdui/NullImage.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"


ABCustomImageItem::ABCustomImageItem(std::string label, Image* image, int32_t layout, std::string altText, BasicColor* basicColor, int32_t yOffset) : ABCustomItem(label, basicColor, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto ABCustomImageItem::getImage() -> Image*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullImage::NULL_IMAGE;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMIMAGEITEM_CPP
