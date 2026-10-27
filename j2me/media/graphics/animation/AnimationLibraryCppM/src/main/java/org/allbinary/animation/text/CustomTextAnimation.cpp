
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/text/CustomTextAnimation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/animation/text/TextInterface.h"


CustomTextAnimation::CustomTextAnimation(std::string text, int32_t fontSize, AnimationBehavior* animationBehavior) : TextAnimation(text, animationBehavior), fontDebugFactory(FontDebugFactory::getInstance()), lastText(StringUtil::getInstance()->INIT_STRING){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->fontSize= fontSize;
    
this->font= Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, fontSize);
    
}


    auto CustomTextAnimation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->myFontProcessor->process(graphics);
    

    Font* existingFont = graphics->getFont();;
    
this->fontDebugFactory->setFont(this->font, graphics);
    
TextAnimation::paintXYNoUpdate(graphics, x, y);
    
this->fontDebugFactory->setFont(existingFont, graphics);
    
}


    auto CustomTextAnimation::setScale(float scaleX, float scaleY) -> void{

                        if(scaleX != scaleY)
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
this->hasChanged= true;
    
this->font= Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, static_cast<int32_t>((this->fontSize *scaleX)));
    
}


    auto CustomTextAnimation::setText(std::string text) -> void{

                        if(this->lastText != text)
                        
                                    {
                                    this->hasChanged= true;
    
this->lastText= text;
    
TextAnimation::setText(text);
    

                                    }
                                
}


    auto CustomTextAnimation::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastText;
    
}


    auto CustomTextAnimation::getWidth() -> int32_t{

                        if(this->hasChanged)
                        
                                    {
                                    this->textWidth= this->font->stringWidth(this->textArrayP[0]);
    
this->hasChanged= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textWidth;
    
}


    auto CustomTextAnimation::getFontHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->font->getHeight();;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_CPP
