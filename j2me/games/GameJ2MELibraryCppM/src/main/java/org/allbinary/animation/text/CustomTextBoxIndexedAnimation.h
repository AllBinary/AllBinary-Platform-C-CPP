
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

class CustomTextBoxIndexedAnimation: public IndexedAnimation, public RawKeyEventListener, public UpdateMyFontInterface, public TextInterface {

    private: CustomTextBox* customTextBox;

    private: std::string lastText = StringUtil::getInstance()->INIT_STRING;

    protected: bool hasChanged = true;

    private: TextChangeListener* textChangeListener = TextChangeListener::getInstance();

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
