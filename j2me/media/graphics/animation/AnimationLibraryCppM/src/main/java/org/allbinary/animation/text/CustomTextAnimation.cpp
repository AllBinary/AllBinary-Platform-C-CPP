
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
        



            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextAnimation.h"
#include "TextInterface.h"

class CustomTextAnimation: public TextAnimation, public TextInterface {

    protected: const FontDebugFactory fontDebugFactory = FontDebugFactory::getInstance();

    protected: int32_t fontSize;

    protected: Font font;

    private: std::string lastText = StringUtil::getInstance().INIT_STRING;

    protected: bool hasChanged = true;

public: CustomTextAnimation(std::string text, int32_t fontSize, AnimationBehavior animationBehavior) : TextAnimation(text, animationBehavior){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->fontSize= fontSize;
    
this->font= Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, fontSize);
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){
this->myFontProcessor.process(graphics);
    

    Font existingFont = graphics.getFont();;
    
this->fontDebugFactory.setFont(this->font, graphics);
    
super.paintXYNoUpdate(graphics, x, y);
    
this->fontDebugFactory.setFont(existingFont, graphics);
    
}


    public: void setScale(float scaleX, float scaleY){

                        if(scaleX != scaleY)
                        
                                    {
                                    


                            throw RuntimeException();
                    

                                    }
                                
this->hasChanged= true;
    
this->font= Font::getFont(Font::FACE_SYSTEM, Font::STYLE_PLAIN, static_cast<int32_t>((this->fontSize *scaleX)));
    
}


    public: void setText(std::string text){

                        if(this->lastText != text)
                        
                                    {
                                    this->hasChanged= true;
    
this->lastText= text;
    
super.setText(text);
    

                                    }
                                
}


    public: std::string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastText;
    
}


    private: int32_t textWidth= 0;

    public: int32_t getWidth(){

                        if(this->hasChanged)
                        
                                    {
                                    this->textWidth= this->font.stringWidth(this->textArrayP[0]);
    
this->hasChanged= false;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->textWidth;
    
}


    public: int32_t getFontHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->font.getHeight();;
    
}


};

            

