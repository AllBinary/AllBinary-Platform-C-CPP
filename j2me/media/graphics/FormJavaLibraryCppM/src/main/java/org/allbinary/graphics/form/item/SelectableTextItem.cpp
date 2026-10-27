
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/SelectableTextItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABTextItem.h"
#include "org/allbinary/graphics/form/item/ABStringComponent.h"


SelectableTextItem::SelectableTextItem(std::string label, int32_t layout, std::string altText, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABTextItem(label, layout, altText, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto SelectableTextItem::isFocusable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto SelectableTextItem::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    

    ABStringComponent* stringComponent = this->getLabelStringComponent();;
    

                        if(stringComponent != 
                                    nullptr
                                )
                        
                                    {
                                    graphics->setColor(stringComponent->getForegroundBasicColor()->intValue());
    

                                    }
                                
graphics->drawString(this->getLabel(), x +2, y, 0);
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_SELECTABLETEXTITEM_CPP
