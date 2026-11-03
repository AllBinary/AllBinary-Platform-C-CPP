
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommandListener;
class Font;
class Graphics;
class J2MEUtil;
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>
class Input;
class InputFactory;
class PlatformKeyFactory;
#include <org/allbinary/game/input/event/RawKeyEventListener.h>
class BasicColor;
class TextItemVisitor;
class StringMaker;
class StringUtil;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ABTextFieldItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTextBox: public GameCommandCanvas, public virtual RawKeyEventListener {

    private: ABTextFieldItem* textFieldItem;

public: CustomTextBox(CommandListener* cmdListener, std::string label, std::string text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void submit();

    private: InputFactory* inputFactory;

    public: void onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated);

    public: void keyPressed(int32_t keyCode);

    public: void keyReleased(int32_t keyCode);

    public: void keyRepeated(int32_t keyCode);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    public: void paint(Graphics* graphics);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: ABTextFieldItem* getTextFieldItem();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameCommandCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>
#endif
#if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/game/input/InputFactory.h>)
#include <org/allbinary/game/input/InputFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/PlatformKeyFactory.h>)
#include <org/allbinary/game/input/PlatformKeyFactory.h>
#endif
#if __has_include(<org/allbinary/game/input/event/RawKeyEventListener.h>)
#include <org/allbinary/game/input/event/RawKeyEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/validation/TextItemVisitor.h>)
#include <org/allbinary/graphics/form/item/validation/TextItemVisitor.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/graphics/form/item/ABTextFieldItem.h")
#include "org/allbinary/graphics/form/item/ABTextFieldItem.h"
#endif

        #endif
    
