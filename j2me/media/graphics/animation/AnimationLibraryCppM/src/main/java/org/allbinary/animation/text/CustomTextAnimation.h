
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

            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextAnimation.h"
#include "TextInterface.h"

class CustomTextAnimation: public TextAnimation: public TextInterface {
        

    const fontDebugFactory: FontDebugFactory = FontDebugFactory.getInstance()!;

    const fontSize: int32_t;

    font: Font;

    private: lastText: string = StringUtil.getInstance()!.INIT_STRING;

    hasChanged: bool = true;

public constructor (string text, int32_t fontSize, AnimationBehavior animationBehavior);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public setScale(float scaleX, float scaleY);

    public setText(string text);

    public string getText();

    private: textWidth: int32_t= 0;

    public int32_t getWidth();

    public int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTANIMATION_H
