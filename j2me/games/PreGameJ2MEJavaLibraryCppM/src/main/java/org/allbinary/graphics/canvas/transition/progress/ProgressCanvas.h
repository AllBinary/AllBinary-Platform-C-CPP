
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class CommandListener;
class Font;
class Graphics;
class NullCanvas;
class NullCommandListener;
class Processor;
#include <org/allbinary/canvas/RunnableCanvas.h>
class GameCommandsFactory;
class BasicColor;
class CanvasStrings;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
class ABCustomGaugeItem;
class NullPaintable;
#include <org/allbinary/graphics/paint/Paintable.h>
#include <org/allbinary/graphics/paint/PaintableInterface.h>
class PreLogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class StringUtil;
class AllBinaryMidlet;
class PathFindingThreadPool;
class ThreadPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //class ProgressPaintable;
class ProgressEndListener;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProgressCanvas: public RunnableCanvas, public PaintableInterface, public UpdateMyFontInterface {
public: class ProgressPaintable;

    /*protected*/ public: bool hasPainted= false;

    private: BasicColor* backgroundBasicColor;

//inner= member=true isStatic=
public: class ProgressPaintable: public Paintable {

    public: ProgressCanvas* outer = nullptr;

    public: ProgressCanvas* progressCanvas;

public: ProgressPaintable(ProgressCanvas* progressCanvas);

    public: void paint(Graphics* graphics);

};

            
    public: Paintable* GAUGE_PAINTABLE;

    private: const float maxValue = 100.0;

    /*protected*/ public: ABCustomGaugeItem* gauge;

    private: const std::string TEXT;

    private: MyFontProcessor* updateMyFontProcessor;

    private: MyFontProcessor* myFontProcessor;

    /*protected*/ public: AllBinaryMidlet* allbinaryMidlet;

    private: float value= 0.0;

    private: std::string text;

    private: bool background = true;

    /*protected*/ public: PaintableInterface* paintable;

    public: bool inProgress = false;

    private: Processor* IN_GAME_PROCESSOR;

    public: Processor* inGameProcessor;

    public: ProgressEndListener* progressEndListener;

public: ProgressCanvas(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void init(AllBinaryMidlet* gameMidlet);

                //@Throws(Exception.constructor)
            
    public: void update(Graphics* graphics);

    public: void initCommands(CommandListener* cmdListener);

    /*protected*/ public: float getMaxValue();

    public: void start();

    private: const std::string backgroundLabel = "Background AI Game Loading...";

    private: const std::string START_BACKGROUND = "startBackground";

    public: void startBackground(bool background);

    public: void endActual();

    public: void inGame();

    public: void end();

    public: void endFromInitialLazyLoadingComplete();

    public: bool isInGame();

    public: void endIfPaintedSinceStart();

    /*protected*/ public: const std::string ADD_PORTION = "addPortion";

    /*protected*/ public: const std::string ADD_EARLY_PORTION = "addEarlyPortion";

    public: void addEarlyPortion(int32_t value, std::string text, int32_t index);

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    /*protected*/ public: void setValue(int32_t value);

    public: void paint(Graphics* graphics);

    public: void paint2(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    /*protected*/ public: float getValue();

    public: void setText(std::string text);

    public: std::string getText();

    /*protected*/ public: void setBackground(bool background);

    /*protected*/ public: bool isBackground();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCanvas.h>)
#include <javax/microedition/lcdui/NullCanvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCommandListener.h>)
#include <javax/microedition/lcdui/NullCommandListener.h>
#endif
#if __has_include(<org/allbinary/canvas/Processor.h>)
#include <org/allbinary/canvas/Processor.h>
#endif
#if __has_include(<org/allbinary/canvas/RunnableCanvas.h>)
#include <org/allbinary/canvas/RunnableCanvas.h>
#endif
#if __has_include(<org/allbinary/game/commands/GameCommandsFactory.h>)
#include <org/allbinary/game/commands/GameCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/CanvasStrings.h>)
#include <org/allbinary/graphics/displayable/CanvasStrings.h>
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
#if __has_include(<org/allbinary/graphics/form/item/ABCustomGaugeItem.h>)
#include <org/allbinary/graphics/form/item/ABCustomGaugeItem.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/NullPaintable.h>)
#include <org/allbinary/graphics/paint/NullPaintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/PaintableInterface.h>)
#include <org/allbinary/graphics/paint/PaintableInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/midlet/AllBinaryMidlet.h>)
#include <org/allbinary/midlet/AllBinaryMidlet.h>
#endif
#if __has_include(<org/allbinary/thread/PathFindingThreadPool.h>)
#include <org/allbinary/thread/PathFindingThreadPool.h>
#endif
#if __has_include(<org/allbinary/thread/ThreadPool.h>)
#include <org/allbinary/thread/ThreadPool.h>
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h"
#endif

        #endif
    
