
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/PlatformKeyFactory.h>

      
#include <org/allbinary/game/input/event/RawKeyEventListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/item/validation/TextItemVisitor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/form/item/ABTextFieldItem.h"

class CustomTextBox: public GameCommandCanvas, public RawKeyEventListener {

    private: ABTextFieldItem* textFieldItem;

public: CustomTextBox(CommandListener* cmdListener, std::string label, std::string text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void submit();

    private: InputFactory* inputFactory = InputFactory::getInstance();

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
