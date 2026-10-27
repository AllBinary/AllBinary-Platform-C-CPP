
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class AnimationBehavior;
#include <org/allbinary/animation/IndexedAnimation.h>
class Anchor;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class SWTJOGLProcessor;

class StringUtil;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TextChangeListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TextAnimation: public IndexedAnimation, public UpdateMyFontInterface {

    private: MyFontProcessor* updateMyFontProcessor;

    /*protected*/ public: MyFontProcessor* myFontProcessor;

    /*protected*/ public: std::vector<std::string> textArrayP;

    private: int32_t anchor;

    private: int32_t fontHeight = 0;

    private: int32_t offsetY = 0;

    private: TextChangeListener* textChangeListener;

public: TextAnimation(std::string text, AnimationBehavior* animationBehavior);

    public: void updateMeasurement(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void nextFrame();

    public: void paintXY(Graphics* graphics, int32_t x, int32_t y);

    public: void paintXYNoUpdate(Graphics* graphics, int32_t x, int32_t y);

    public: void setTextWithOnMeasure(std::string text, TextChangeListener* textChangeListener);

    public: void setText(std::string text);

    public: std::vector<std::string> getTextArray();

    public: int32_t getFontHeight();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_ANIMATION_TEXT_TEXTANIMATION_H_COMPLETE
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
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/SWTJOGLProcessor.h>)
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/animation/text/TextChangeListener.h")
#include "org/allbinary/animation/text/TextChangeListener.h"
#endif

        #endif
    
