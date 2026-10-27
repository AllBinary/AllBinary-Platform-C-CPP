
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H

        
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
class J2MEUtil;
class GameInfo;
class GameCommandsFactory;
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>
class AllBinaryGameLayerManager;
class ColorFillBasePaintable;
class ColorFillPaintableFactory;
class HighScoreCommandsFactory;
class HighScores;
class HighScoresCanvasInputProcessor;
class HighScoresCanvasInputProcessorFactoryInterface;
class HighScoresFactoryInterface;
class HighScoresHelperBase;
class HighScoresPaintable;
#include <org/allbinary/game/score/HighScoresResultsListener.h>
class NoHighScoresFactory;
class NullHighScoresSingletonFactory;
class BasicColorFactory;
class NullPaintable;
class Paintable;
class SimpleTextPaintable;
class LogUtil;
class StringMaker;
class CommonStrings;
#include <org/allbinary/thread/ARunnable.h>
class SecondaryThreadPool;
class ABSystemWrapper;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresCanvas: public GameCommandCanvas, public HighScoresResultsListener {

    public: static inline const std::string NAME = "HighScoresCanvas";

    private: Paintable* paintable;

    private: HighScoreCommandsFactory* highScoreCommandsFactory;

    private: SimpleTextPaintable* waitPaintable;

    private: HighScoresPaintable* highScoresPaintable;

    private: HighScoresFactoryInterface* highScoresFactoryInterface;

    /*protected*/ public: ColorFillBasePaintable* colorFillPaintable;

    private: HighScoresHelperBase* highScoresHelper;

    private: GameInfo* gameInfo;

    private: HighScoresCanvasInputProcessor* highScoresCanvasInputProcessor;

    private: Command* currentCommand;

    private: bool hasPainted = false;

public: HighScoresCanvas(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface);

    public: void initCommands(CommandListener* cmdListener);

    public: void open();

    public: void close();

    public: void paint(Graphics* graphics);

    public: void executeUpdate();

    private: HighScoresPaintable* getHighScoresPaintable();

    public: void setHighScoresArray(std::vector<HighScores*> highScoresArray);

                //@Throws(Exception.constructor)
            
    public: void updateCommand(Command* command);

    public: GameInfo* getGameInfo();

    private: void setPaintable(Paintable* paintable);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/displayable/canvas/GameCommandCanvas.h>)
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>
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
#if __has_include(<org/allbinary/game/score/HighScoreCommandsFactory.h>)
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScores.h>)
#include <org/allbinary/game/score/HighScores.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresCanvasInputProcessor.h>)
#include <org/allbinary/game/score/HighScoresCanvasInputProcessor.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresHelperBase.h>)
#include <org/allbinary/game/score/HighScoresHelperBase.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresPaintable.h>)
#include <org/allbinary/game/score/HighScoresPaintable.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresResultsListener.h>)
#include <org/allbinary/game/score/HighScoresResultsListener.h>
#endif
#if __has_include(<org/allbinary/game/score/NoHighScoresFactory.h>)
#include <org/allbinary/game/score/NoHighScoresFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/NullHighScoresSingletonFactory.h>)
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/SimpleTextPaintable.h>)
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<org/allbinary/thread/SecondaryThreadPool.h>)
#include <org/allbinary/thread/SecondaryThreadPool.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif

        #endif
    
