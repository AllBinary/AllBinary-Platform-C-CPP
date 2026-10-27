
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/text/CustomTextBoxIndexedAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/game/input/event/RawKeyEventListener.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/form/item/CustomTextBox.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextInterface.h"
#include "org/allbinary/animation/text/TextChangeListener.h"


CustomTextBoxIndexedAnimation::CustomTextBoxIndexedAnimation(CustomTextBox* customTextBox) : IndexedAnimation(AnimationBehavior::getInstance()), lastText(StringUtil::getInstance()->INIT_STRING), textChangeListener(TextChangeListener::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->customTextBox= customTextBox;
    
}


    auto CustomTextBoxIndexedAnimation::setBasicColorP(BasicColor* basicColor) -> void{
this->customTextBox->getTextFieldItem()->setForegroundBasicColorP(basicColor);
    
}


    auto CustomTextBoxIndexedAnimation::setBackgroundBasicColorP(BasicColor* basicColor) -> void{
this->customTextBox->getTextFieldItem()->setBackgroundBasicColorP(basicColor);
    
}


    auto CustomTextBoxIndexedAnimation::setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener) -> void{
this->setText(text);
    
this->textChangeListener= textChangeListener;
    
}


    auto CustomTextBoxIndexedAnimation::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->textChangeListener->onMeasure();
    
this->textChangeListener= TextChangeListener::getInstance();
    
}


    auto CustomTextBoxIndexedAnimation::setText(std::string text) -> void{

                        if(this->lastText != text)
                        
                                    {
                                    this->hasChanged= true;
    
this->lastText= text;
    
this->customTextBox->getTextFieldItem()->setString(text);
    

                                    }
                                
}


    auto CustomTextBoxIndexedAnimation::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customTextBox->getTextFieldItem()->getString();;
    
}


    auto CustomTextBoxIndexedAnimation::onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated) -> void{
this->customTextBox->onEventRaw(keyCode, deviceId, repeated);
    
}


    auto CustomTextBoxIndexedAnimation::getFontHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->customTextBox->getTextFieldItem()->getFontHeight();;
    
}


    auto CustomTextBoxIndexedAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->customTextBox->paintXY(graphics, x, y);
    
}


    auto CustomTextBoxIndexedAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
}




        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_CPP
