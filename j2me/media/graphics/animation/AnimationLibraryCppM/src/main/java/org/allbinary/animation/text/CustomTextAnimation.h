
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/RuntimeException.h"
        
class Font;
class Graphics;
class AnimationBehavior;
class FontDebugFactory;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/animation/text/TextInterface.h"
class TextChangeListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTextAnimation: public TextAnimation, public virtual TextInterface {

    /*protected*/ public: FontDebugFactory* fontDebugFactory;

    /*protected*/ public: int32_t fontSize;

    /*protected*/ public: Font* font;

    private: std::string lastText;

    /*protected*/ public: bool hasChanged = true;

public: CustomTextAnimation(std::string text, int32_t fontSize, AnimationBehavior* animationBehavior);

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void setScale(float scaleX, float scaleY);

    public: void setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener);

    public: void setText(std::string text);

    public: std::string getText();

    private: int32_t textWidth= 0;

    public: int32_t getWidth();

    public: int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/graphics/font/FontDebugFactory.h>)
#include <org/allbinary/graphics/font/FontDebugFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/animation/text/TextAnimation.h")
#include "org/allbinary/animation/text/TextAnimation.h"
#endif
#if __has_include("org/allbinary/animation/text/TextInterface.h")
#include "org/allbinary/animation/text/TextInterface.h"
#endif
#if __has_include("org/allbinary/animation/text/TextChangeListener.h")
#include "org/allbinary/animation/text/TextChangeListener.h"
#endif

        #endif
    
