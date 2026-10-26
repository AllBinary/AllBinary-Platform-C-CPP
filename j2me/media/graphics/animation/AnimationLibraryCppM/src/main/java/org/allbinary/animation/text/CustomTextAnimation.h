
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H

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

public: CustomTextAnimation(std::string text, int32_t fontSize, AnimationBehavior animationBehavior);

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void setScale(float scaleX, float scaleY);

    public: void setText(std::string text);

    public: std::string getText();

    private: int32_t textWidth= 0;

    public: int32_t getWidth();

    public: int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
