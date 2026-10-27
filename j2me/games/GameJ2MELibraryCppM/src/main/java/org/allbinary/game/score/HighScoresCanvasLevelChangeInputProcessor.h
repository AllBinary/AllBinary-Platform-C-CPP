
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Canvas;
class Font;
class Graphics;
class GameKeyEventHandler;
class GameKeyEventUtil;
class HighScoresCanvas;
class Anchor;
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresCanvasLevelChangeInputProcessor: public HighScoresCanvasInputProcessor, public UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton;

    private: const std::string INSTRUCTIONS = "(Right = Next Track, Left = Previous Track)";

    private: MyFontProcessor* myFontProcessor;

    private: int32_t anchor;

    private: int32_t fontHeight = 0;

public: HighScoresCanvasLevelChangeInputProcessor(HighScoresCanvas* highScoresCanvas);

    public: void updateMeasurement(Graphics* graphics);

    public: void open();

    public: void close();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventHandler.h>)
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEventUtil.h>)
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoresCanvas.h>)
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
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
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresCanvasInputProcessor.h")
#include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"
#endif

        #endif
    
