
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H

            #include <vector>
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextChangeListener.h"

class TextAnimation: public IndexedAnimation, public UpdateMyFontInterface {

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    protected: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: std::vector<std::string> textArrayP = StringUtil::getInstance().ONE_EMPTY_STRING_ARRAY;

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t fontHeight = 0;

    private: int32_t offsetY = 0;

    private: TextChangeListener textChangeListener = TextChangeListener::getInstance();

public: TextAnimation(std::string text, AnimationBehavior animationBehavior);

    public: void updateMeasurement(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void paintXY(Graphics graphics, int32_t x, int32_t y);

    public: void paintXYNoUpdate(Graphics graphics, int32_t x, int32_t y);

    public: void setTextWithOnMeasure(std::string text, TextChangeListener textChangeListener);

    public: void setText(std::string text);

    public: std::vector<std::string> getTextArray();

    public: int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
