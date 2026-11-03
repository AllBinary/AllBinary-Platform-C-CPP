
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABTextItem.h"


ABTextFieldItem::ABTextFieldItem(Canvas* canvas, Visitor* visitor, std::string label, std::string value, int32_t maxSize, int32_t layout, std::string altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : ABTextItem(label, layout, altText, backgroundBasicColor, foregroundBasicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->font= font;
    
}


    auto ABTextFieldItem::getLabel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto ABTextFieldItem::setLabel(std::string label) -> void{
}


    auto ABTextFieldItem::getString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StringUtil::getInstance()->EMPTY_STRING;
    
}


    auto ABTextFieldItem::setString(std::string string) -> void{
}


    auto ABTextFieldItem::setFocus(bool state) -> void{
}


    auto ABTextFieldItem::getFontHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->font->getHeight();;
    
}


    auto ABTextFieldItem::setBackgroundBasicColorP(BasicColor* basicColor) -> void{
}


    auto ABTextFieldItem::setForegroundBasicColorP(BasicColor* basicColor) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_CPP
