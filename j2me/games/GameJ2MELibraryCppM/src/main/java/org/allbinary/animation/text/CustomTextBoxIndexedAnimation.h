
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
        #include "TextInterface.h"
#include "TextChangeListener.h"

class CustomTextBoxIndexedAnimation: public IndexedAnimation: public RawKeyEventListener, public UpdateMyFontInterface, public TextInterface {
        

    private: const customTextBox: CustomTextBox;

    private: lastText: string = StringUtil.getInstance()!.INIT_STRING;

    hasChanged: bool = true;

    private: textChangeListener: TextChangeListener = TextChangeListener.getInstance()!;

public constructor (CustomTextBox customTextBox);

    public setBasicColorP(BasicColor basicColor);

    public setBackgroundBasicColorP(BasicColor basicColor);

    public setTextWithOnMeasure(string text, TextChangeListener textChangeListener);

    public updateMeasurement(Graphics graphics);

    public setText(string text);

    public string getText();

    public onEventRaw(int32_t keyCode, int32_t deviceId, bool repeated);

    public int32_t getFontHeight();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintThreedXYZ(Graphics graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_CUSTOMTEXTBOXINDEXEDANIMATION_H
