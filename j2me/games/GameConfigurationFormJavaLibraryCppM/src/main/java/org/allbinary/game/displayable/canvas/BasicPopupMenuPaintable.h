
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Font;
class Graphics;
class AndroidUtil;
class J2MEUtil;
class Animation;
class NullAnimationFactory;
class RectangleFilledAnimation;
class Features;
class SWTUtil;
class GPoint;
class Rectangle;
class BasicColor;
class BasicColorFactory;
class BasicColorSetUtil;
class DrawVerticalStringUtil;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class OpenGLFeatureFactory;
class OpenGLFeatureUtil;
#include <org/allbinary/graphics/paint/Paintable.h>
class SWTJOGLProcessor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicPopupMenuPaintable: public Paintable, public virtual UpdateMyFontInterface {

    private: static inline const std::string NAME = "MENU";

    /*protected*/ public: BasicColorSetUtil* basicSetColorUtil;

    private: DrawVerticalStringUtil* drawStringUtil;

    private: std::string label;

    private: BasicColor* foregroundBasicColor;

    private: MyFontProcessor* myFontProcessor;

    private: Rectangle* rectangle;

    private: int32_t BORDER= 0;

    private: int32_t heightOffset= 0;

    private: int32_t offset= 0;

    private: Animation* animationInterface;

public: BasicPopupMenuPaintable(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

                //@Throws(Exception.constructor)
            
    public: void init(Rectangle* rectangle);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/AndroidUtil.h>)
#include <org/allbinary/AndroidUtil.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/vector/RectangleFilledAnimation.h>)
#include <org/allbinary/animation/vector/RectangleFilledAnimation.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/layer/SWTUtil.h>)
#include <org/allbinary/game/layer/SWTUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/GPoint.h>)
#include <org/allbinary/graphics/GPoint.h>
#endif
#if __has_include(<org/allbinary/graphics/Rectangle.h>)
#include <org/allbinary/graphics/Rectangle.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorSetUtil.h>)
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/draw/DrawVerticalStringUtil.h>)
#include <org/allbinary/graphics/draw/DrawVerticalStringUtil.h>
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
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/SWTJOGLProcessor.h>)
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>
#endif

        #endif
    
