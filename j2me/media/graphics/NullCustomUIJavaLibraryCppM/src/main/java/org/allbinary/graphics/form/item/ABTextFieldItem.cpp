
        /* Generated Code Do Not Modify */
        



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

    private: Font font;

public: ABTextFieldItem(Canvas canvas, Visitor visitor, std::string label, std::string value, int32_t maxSize, int32_t layout, std::string altText, Font font, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(label, layout, altText, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->font= font;
    
}


    public: std::string getLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: void setLabel(std::string label){
}


    public: std::string getString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


    public: void setString(std::string string){
}


    public: void setFocus(bool state){
}


    public: int32_t getFontHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->font.getHeight();;
    
}


    public: void setBackgroundBasicColorP(BasicColor basicColor){
}


    public: void setForegroundBasicColorP(BasicColor basicColor){
}


};

            

