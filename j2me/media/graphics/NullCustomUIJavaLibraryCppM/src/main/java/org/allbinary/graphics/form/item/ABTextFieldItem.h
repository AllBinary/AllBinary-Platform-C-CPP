
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Canvas;
class Font;
class BasicColor;
class StringUtil;
class Visitor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABTextItem.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ABTextFieldItem: public ABTextItem {

    private: Font* font;

public: ABTextFieldItem(Canvas* canvas, Visitor* visitor, std::string label, std::string value, int32_t maxSize, int32_t layout, std::string altText, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: std::string getLabel();

    public: void setLabel(std::string label);

    public: std::string getString();

    public: void setString(std::string string);

    public: void setFocus(bool state);

    public: int32_t getFontHeight();

    public: void setBackgroundBasicColorP(BasicColor* basicColor);

    public: void setForegroundBasicColorP(BasicColor* basicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/util/visitor/Visitor.h>)
#include <org/allbinary/logic/util/visitor/Visitor.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextItem.h")
#include "org/allbinary/graphics/form/item/ABTextItem.h"
#endif

        #endif
    
