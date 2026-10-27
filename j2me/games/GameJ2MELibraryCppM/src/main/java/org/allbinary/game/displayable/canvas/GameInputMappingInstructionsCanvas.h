
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Command;
class CommandListener;
class Graphics;
class AllBinaryGameLayerManager;
class ColorFillBasePaintable;
class ColorFillPaintableFactory;
class Anchor;
class DrawStringUtil;
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GameInputMappingInstructionsCanvas: public GameCommandCanvas {

    private: static Command* DISPLAY_owner();
    public: static Command* DISPLAY;

    private: static Command* CLOSE_owner();
    public: static Command* CLOSE;

    public: static inline const std::string NAME = "GameInputMappingInstructionsCanvas";

    private: DrawStringUtil* drawStringUtil;

    /*protected*/ public: const std::string TITLE = "Input Instructions";

    private: std::vector<std::string> instructions;

    private: ColorFillBasePaintable* colorFillPaintable;

    private: int32_t anchor;

public: GameInputMappingInstructionsCanvas(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager);

    public: void initCommands(CommandListener* cmdListener);

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGINSTRUCTIONSCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/layer/AllBinaryGameLayerManager.h>)
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillBasePaintable.h>)
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>
#endif
#if __has_include(<org/allbinary/game/paint/ColorFillPaintableFactory.h>)
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/draw/DrawStringUtil.h>)
#include <org/allbinary/graphics/draw/DrawStringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/game/displayable/canvas/GameCommandCanvas.h")
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#endif

        #endif
    
