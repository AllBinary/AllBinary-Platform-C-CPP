
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H

#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/visitor/Visitor.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABTextItem.h"

class ABTextFieldItem: public ABTextItem {
        

    private: font: Font;

public constructor (Canvas canvas, Visitor visitor, string label, string value, int32_t maxSize, int32_t layout, string altText, Font font, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public string getLabel();

    public setLabel(string label);

    public string getString();

    public setString(string string);

    public setFocus(bool state);

    public int32_t getFontHeight();

    public setBackgroundBasicColorP(BasicColor basicColor);

    public setForegroundBasicColorP(BasicColor basicColor);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABTEXTFIELDITEM_H
