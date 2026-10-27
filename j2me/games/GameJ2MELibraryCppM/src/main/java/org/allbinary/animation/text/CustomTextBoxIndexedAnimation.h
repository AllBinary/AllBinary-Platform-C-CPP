
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class AnimationBehavior;
#include <org/allbinary/animation/IndexedAnimation.h>
#include <org/allbinary/game/input/event/RawKeyEventListener.h>
class BasicColor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class CustomTextBox;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/text/TextInterface.h"
class TextChangeListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CustomTextBoxIndexedAnimation: public IndexedAnimation, public RawKeyEventListener, public UpdateMyFontInterface, public TextInterface {

    private: CustomTextBox* customTextBox;

    private: std::string lastText;

    /*protected*/ public: bool hasChanged = true;

    private: TextChangeListener* textChangeListener;

public: CustomTextBoxIndexedAnimation(CustomTextBox* customTextBox);

    public: void setBasicColorP(BasicColor* basicColor);

    public: void setBackgroundBasicColorP(BasicColor* basicColor);

    public: void setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener);

    public: void updateMeasurement(Graphics* graphics);

    public: void setText(std::string text);

    public: std::string getText();

    public: void onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated);

    public: int32_t getFontHeight();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehavior.h>)
#include <org/allbinary/animation/AnimationBehavior.h>
#endif
#if __has_include(<org/allbinary/animation/IndexedAnimation.h>)
#include <org/allbinary/animation/IndexedAnimation.h>
#endif
#if __has_include(<org/allbinary/game/input/event/RawKeyEventListener.h>)
#include <org/allbinary/game/input/event/RawKeyEventListener.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/form/item/CustomTextBox.h>)
#include <org/allbinary/graphics/form/item/CustomTextBox.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/animation/text/TextInterface.h")
#include "org/allbinary/animation/text/TextInterface.h"
#endif
#if __has_include("org/allbinary/animation/text/TextChangeListener.h")
#include "org/allbinary/animation/text/TextChangeListener.h"
#endif

        #endif
    
