
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_CPP
        #define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/form/item/CustomTextBox.h"
        

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


CustomTextBox::CustomTextBox(CommandListener* cmdListener, std::string label, std::string text, int32_t maxSize, int32_t constraints, Font* font, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : GameCommandCanvas(cmdListener, label, backgroundBasicColor, foregroundBasicColor), inputFactory(InputFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    ABTextFieldItem* textFieldItem = new ABTextFieldItem(this, new TextItemVisitor(), stringUtil->EMPTY_STRING, stringUtil->EMPTY_STRING, maxSize, 0, stringUtil->EMPTY_STRING, font, backgroundBasicColor, foregroundBasicColor);;
    
textFieldItem->setString(text);
    
this->textFieldItem= textFieldItem;
    
this->setTitle(label);
    
}


    auto CustomTextBox::submit() -> void{
}


    auto CustomTextBox::onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated) -> void{
this->logUtil->putF((new StringMaker())->append(this->commonStrings->START)->appendint(keyCode)->toString(), this, "onEvent");
    
this->keyPressedByDevice(keyCode, deviceId);
    
}


    auto CustomTextBox::keyPressed(int32_t keyCode) -> void{
this->keyPressedByDevice(keyCode, 0);
    
}


    auto CustomTextBox::keyReleased(int32_t keyCode) -> void{
this->keyReleasedByDevice(keyCode, 0);
    
}


    auto CustomTextBox::keyRepeated(int32_t keyCode) -> void{
this->keyRepeatedByDevice(keyCode, 0);
    
}


    auto CustomTextBox::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{

        try {
            this->logUtil->putF((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->appendint(keyCode)->toString(), this, this->gameInputStrings->KEY_PRESSED);
    

    PlatformKeyFactory* platformKeyFactory = PlatformKeyFactory::getInstance();;
    

    Input* input = this->inputFactory->getInstanceById(keyCode);;
    

                        if(platformKeyFactory->isSubmission(input))
                        
                                    {
                                    this->submit();
    

                                    }
                                
                        else {
                            this->textFieldItem->keyPressed(keyCode);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->gameInputStrings->KEY_PRESSED, &e);
    
}

}


    auto CustomTextBox::keyReleasedByDevice(int32_t keyCode, int32_t deviceId) -> void{
}


    auto CustomTextBox::paint(Graphics* graphics) -> void{
graphics->setColor(this->backgroundColor);
    
graphics->fillRect(0, 0, this->displayInfo->getLastWidth(), this->displayInfo->getLastHeight());
    
graphics->setColor(this->foregroundColor);
    

                        if(!J2MEUtil::isJ2ME())
                        
                                    {
                                    graphics->drawString(this->getTitle(), 8, 1, 0);
    

                                    }
                                
this->paintXY(graphics, 8, graphics->getFont()->getHeight() +2);
    
GameCommandCanvas::paint(graphics);
    
}


    auto CustomTextBox::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->textFieldItem->paintXY(graphics, x, y);
    
}


    auto CustomTextBox::getTextFieldItem() -> ABTextFieldItem*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textFieldItem;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_FORM_ITEM_CUSTOMTEXTBOX_CPP
