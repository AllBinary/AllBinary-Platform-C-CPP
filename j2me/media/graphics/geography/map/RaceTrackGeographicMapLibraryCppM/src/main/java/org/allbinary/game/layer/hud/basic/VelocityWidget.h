
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H

        
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
class OpenGLFeatureUtil;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class BasicColor;
class MyFontProcessor;
class MathUtil;
class PrimitiveLongSingleton;
class PrimitiveLongUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class VelocityWidget: public BasicHud {

    private: std::vector<char> KILOMETERS_PER_HOUR_STR;

    private: const int32_t totalChars;

    private: int32_t velocity;

    private: int32_t maxVelocity;

    private: std::vector<char> string;

    private: int32_t totalDigits = 1;

    private: int32_t powerOfTenVelocity;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: int32_t offset = 0;

    private: int32_t offset2 = 0;

public: VelocityWidget(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: int32_t get();

    public: void add(int32_t value);

    public: void set(int32_t value);

    public: void reduce(int32_t value);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_VELOCITYWIDGET_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongSingleton.h>)
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>
#endif
#if __has_include(<org/allbinary/logic/math/PrimitiveLongUtil.h>)
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>
#endif

        #endif
    
