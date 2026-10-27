
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullCanvas.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/canvas/RunnableCanvas.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomGaugeItem.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/midlet/AllBinaryMidlet.h>

      
#include <org/allbinary/thread/PathFindingThreadPool.h>

      
#include <org/allbinary/thread/ThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "org/allbinary/graphics/canvas/transition/progress/ProgressPaintable.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressEndListener.h"

class ProgressCanvas: public RunnableCanvas, public PaintableInterface, public UpdateMyFontInterface {

    protected: bool hasPainted= false;

    private: BasicColor* backgroundBasicColor;

//inner= member=true isStatic=
class ProgressPaintable: public Paintable {

    ProgressCanvas* progressCanvas;

: ProgressPaintable(ProgressCanvas* progressCanvas);

    public: void paint(Graphics* graphics);

};

            
    public: Paintable* GAUGE_PAINTABLE = new ProgressPaintable(this);

    private: const float maxValue = 100.0;

    protected: ABCustomGaugeItem* gauge;

    private: const std::string TEXT = this->commonStrings.LOADING;

    private: MyFontProcessor* updateMyFontProcessor = new UpdateMyFontProcessor(this);

    private: MyFontProcessor* myFontProcessor = this->updateMyFontProcessor;

    protected: AllBinaryMidlet* allbinaryMidlet = AllBinaryMidlet::getNullInstance();

    private: float value= 0.0;

    private: std::string text = this->TEXT;

    private: bool background = true;

    protected: PaintableInterface* paintable = this->GAUGE_PAINTABLE;

    public: bool inProgress = false;

    private: Processor* IN_GAME_PROCESSOR = class extends Processor
                                {
                                
    ThreadPool* pathFindingThreadPool = PathFindingThreadPool::getInstance();
                //@Throws(Exception.constructor)
            
    public: void process();
                                }
                            ;

    public: Processor* inGameProcessor = Processor::getInstance();

    public: ProgressEndListener* progressEndListener = ProgressEndListener::instance;

: ProgressCanvas(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);

    public: void updateMeasurement(Graphics* graphics);

    public: void init(AllBinaryMidlet* gameMidlet);

                //@Throws(Exception.constructor)
            
    public: void update(Graphics* graphics);

    public: void initCommands(CommandListener* cmdListener);

    protected: float getMaxValue();

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

    protected: const std::string ADD_PORTION = "addPortion";

    protected: const std::string ADD_EARLY_PORTION = "addEarlyPortion";

    public: void addEarlyPortion(int32_t value, std::string text, int32_t index);

    public: void addPortion(int32_t value, std::string text, int32_t index);

    public: void addNormalPortion(int32_t value, std::string text);

    protected: void setValue(int32_t value);

    public: void paint(Graphics* graphics);

    public: void paint2(Graphics* graphics);

    public: void paintThreed(Graphics* graphics);

    protected: float getValue();

    public: void setText(std::string text);

    public: std::string getText();

    protected: void setBackground(bool background);

    protected: bool isBackground();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
