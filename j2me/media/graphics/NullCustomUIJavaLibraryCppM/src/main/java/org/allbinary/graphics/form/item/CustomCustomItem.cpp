
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/CustomCustomItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"


CustomCustomItem::CustomCustomItem(std::string label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABCustomItem(label, backgroundBasicColor, foregroundBasicColor), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto CustomCustomItem::updateMeasurement(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMCUSTOMITEM_CPP
