
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/ABCustomItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/Screen.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* ABCustomItem::NULL_CUSTOM_ITEM = NullUtil::getInstance()->NULL_OBJECT;

    auto ABCustomItem::getNullInstance() -> ABCustomItem*{

                        if(ABCustomItem::NULL_CUSTOM_ITEM == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    ABCustomItem::NULL_CUSTOM_ITEM= new ABCustomItem(StringUtil::getInstance()->EMPTY_STRING, BasicColorFactory::getInstance()->BLACK, BasicColorFactory::getInstance()->WHITE);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ABCustomItem*>(ABCustomItem::NULL_CUSTOM_ITEM);
    
}


ABCustomItem::ABCustomItem(std::string label, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor){
}


    auto ABCustomItem::setOwner(Screen* owner) -> void{
}


    auto ABCustomItem::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
}


    auto ABCustomItem::paintUnselected(Graphics* graphics, int32_t x, int32_t y) -> void{
}


    auto ABCustomItem::isFocusable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ABCustomItem::getLabel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto ABCustomItem::setLabel(std::string label) -> void{
}


    auto ABCustomItem::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ABCustomItem::setHeight(int32_t height) -> void{
}


    auto ABCustomItem::getValue() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    
}


    auto ABCustomItem::setValue(float value) -> void{
}


    auto ABCustomItem::getMinimumWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ABCustomItem::getMinimumHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    auto ABCustomItem::preMeasurement(Graphics* graphics) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEM_CPP
