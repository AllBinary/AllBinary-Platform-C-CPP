
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2003 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H
        #define ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class StringUtil;
class Animation;
class NullAnimationFactory;
class BasicColor;
class BasicColorFactory;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>
class CommonButtons;
class TouchButtonLocationHelper;
class PrimitiveLongUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SelectionHudPaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    /*protected*/ public: const int32_t y;

    private: PrimitiveLongUtil* primitiveLongUtil;

    /*protected*/ public: MyFontProcessor* updateMyFontProcessor;

    /*protected*/ public: MyFontProcessor* myFontProcessor;

    private: int32_t x= 0;

    /*protected*/ public: int32_t textX= 0;

    /*protected*/ public: int32_t imageX= 0;

    private: BasicColor* basicColor;

    private: int32_t color= 0;

    private: int32_t width= 0;

    private: int32_t height= 0;

    private: std::string name;

    private: Animation* animationInterface;

    private: const int32_t backgroundColor;

/*protected*/ public: SelectionHudPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void update();

    public: void updateSelectionInfo();

    public: void updateInfo();

    /*protected*/ public: PrimitiveLongUtil* getPrimitiveLongUtil();

    /*protected*/ public: void setAnimationInterface(Animation* animationInterface);

    /*protected*/ public: Animation* getAnimationInterface();

    /*protected*/ public: void setName(std::string name);

    /*protected*/ public: std::string getName();

    public: void setBasicColorP(BasicColor* basicColor);

    /*protected*/ public: BasicColor* getBasicColorP();

    public: void setColor(int32_t color);

    public: int32_t getColor();

    /*protected*/ public: int32_t getWidth();

    /*protected*/ public: void setHeight(int32_t height);

    /*protected*/ public: int32_t getHeight();

    /*protected*/ public: int32_t getX();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_SELECTIONHUDPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/animation/Animation.h>)
#include <org/allbinary/animation/Animation.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
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
#if __has_include(<org/allbinary/graphics/paint/InitUpdatePaintable.h>)
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/CommonButtons.h>)
#include <org/allbinary/input/motion/button/CommonButtons.h>
#endif
#if __has_include(<org/allbinary/input/motion/button/TouchButtonLocationHelper.h>)
#include <org/allbinary/input/motion/button/TouchButtonLocationHelper.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif

        #endif
    
