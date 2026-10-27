
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Graphics;
class StringMaker;
class StringUtil;
#include <org/allbinary/game/graphics/hud/BasicHud.h>
class LapInfo;
class BasicColor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LapWidget: public BasicHud {

    private: const std::string LAP_STR = "Lap ";

    private: const std::string OF_STR = " of ";

    private: std::string string;

public: LapWidget(int32_t location, int32_t direction, BasicColor* basicColor);

    public: void update(LapInfo* lapInfo);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_HUD_BASIC_LAPWIDGET_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/game/graphics/hud/BasicHud.h>)
#include <org/allbinary/game/graphics/hud/BasicHud.h>
#endif
#if __has_include(<org/allbinary/game/layer/hud/LapInfo.h>)
#include <org/allbinary/game/layer/hud/LapInfo.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif

        #endif
    
