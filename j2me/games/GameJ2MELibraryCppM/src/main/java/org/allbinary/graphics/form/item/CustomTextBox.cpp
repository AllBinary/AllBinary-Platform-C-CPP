
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
        



            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABTextFieldItem.h"

class CustomTextBox: public GameCommandCanvas, public RawKeyEventListener {

    private: ABTextFieldItem textFieldItem;

public: CustomTextBox(CommandListener cmdListener, std::string label, std::string text, int32_t maxSize, int32_t constraints, Font font, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(cmdListener, label, backgroundBasicColor, foregroundBasicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    

    StringUtil stringUtil = StringUtil::getInstance();;
    

    ABTextFieldItem textFieldItem = ABTextFieldItem(this, TextItemVisitor(), stringUtil.EMPTY_STRING, stringUtil.EMPTY_STRING, maxSize, 0, stringUtil.EMPTY_STRING, font, backgroundBasicColor, foregroundBasicColor);;
    
textFieldItem.setString(text);
    
this->textFieldItem= textFieldItem;
    
this->setTitle(label);
    
}


    public: void submit(){
}


    private: const InputFactory inputFactory = InputFactory::getInstance();

    public: void onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated){
this->logUtil.putF(StringMaker().append(this->commonStrings.START).appendint(keyCode).toString(), this, "onEvent");
    
this->keyPressedByDevice(keyCode, deviceId);
    
}


    public: void keyPressed(int32_t keyCode){
this->keyPressedByDevice(keyCode, 0);
    
}


    public: void keyReleased(int32_t keyCode){
this->keyReleasedByDevice(keyCode, 0);
    
}


    public: void keyRepeated(int32_t keyCode){
this->keyRepeatedByDevice(keyCode, 0);
    
}


    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId){

        try {
            this->logUtil.putF(StringMaker().append(CommonSeps::getInstance().SPACE).appendint(keyCode).toString(), this, this->gameInputStrings.KEY_PRESSED);
    

    PlatformKeyFactory platformKeyFactory = PlatformKeyFactory::getInstance();;
    

    Input input = this->inputFactory.getInstanceById(keyCode);;
    

                        if(platformKeyFactory.isSubmission(input))
                        
                                    {
                                    this->submit();
    

                                    }
                                
                        else {
                            this->textFieldItem.keyPressed(keyCode);
    

                        }
                            

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->gameInputStrings.KEY_PRESSED, e);
    
}

}


    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
}


    public: void paint(Graphics graphics){
graphics.setColor(this->backgroundColor);
    
graphics.fillRect(0, 0, this->displayInfo.getLastWidth(), this->displayInfo.getLastHeight());
    
graphics.setColor(this->foregroundColor);
    

                        if(!J2MEUtil::isJ2ME())
                        
                                    {
                                    graphics.drawString(this->getTitle(), 8, 1, 0);
    

                                    }
                                
this->paintXY(graphics, 8, graphics.getFont().getHeight() +2);
    
super.paint(graphics);
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->textFieldItem.paintXY(graphics, x, y);
    
}


    public: ABTextFieldItem getTextFieldItem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textFieldItem;
    
}


};

            

