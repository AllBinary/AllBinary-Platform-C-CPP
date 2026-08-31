
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

            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextChangeListener.h"

class TextAnimation: public IndexedAnimation: public UpdateMyFontInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    textArrayP: std::vector<string> = StringUtil.getInstance()!.ONE_EMPTY_STRING_ARRAY;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: fontHeight: int32_t = 0;

    private: offsetY: int32_t = 0;

    private: textChangeListener: TextChangeListener = TextChangeListener.getInstance()!;

public constructor (string text, AnimationBehavior animationBehavior);

    public updateMeasurement(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public nextFrame();

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public paintXYNoUpdate(Graphics graphics, int32_t x, int32_t y);

    public setTextWithOnMeasure(string text, TextChangeListener textChangeListener);

    public setText(string text);

    public std::vector<string> getTextArray();

    public int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H
