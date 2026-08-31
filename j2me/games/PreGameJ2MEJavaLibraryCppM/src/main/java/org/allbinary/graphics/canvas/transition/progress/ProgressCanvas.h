
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

            #include "../../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //#include "ProgressPaintable.h"

class ProgressCanvas: public RunnableCanvas: public PaintableInterface, public UpdateMyFontInterface {
        

    hasPainted: bool= false;

    private: const backgroundBasicColor: BasicColor;

//inner= member=true isStatic=
class ProgressPaintable: public Paintable {
        

    const progressCanvas: ProgressCanvas;

 constructor (ProgressCanvas progressCanvas);

    public paint(Graphics graphics);

};

            
    public const GAUGE_PAINTABLE: Paintable = new this.ProgressPaintable(this);

    private: const maxValue: float = 100.0;

    const gauge: ABCustomGaugeItem;

    private: const TEXT: string = this.commonStrings!.LOADING;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    allbinaryMidlet: AllBinaryMidlet = AllBinaryMidlet.getNullInstance()!;

    private: value: float= 0.0;

    private: text: string = this.TEXT;

    private: background: bool = true;

    paintable: PaintableInterface = this.GAUGE_PAINTABLE;

    public inProgress: bool = false;

    private: const IN_GAME_PROCESSOR: Processor = new class extends Processor
                                {
                                
    private: const pathFindingThreadPool: ThreadPool = PathFindingThreadPool.getInstance()!;
                //@Throws(Exception.constructor)
            
    public process();
                                }
                            ;

    public inGameProcessor: Processor = Processor.getInstance()!;

 constructor (string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public updateMeasurement(Graphics graphics);

    public init(AllBinaryMidlet gameMidlet);

                //@Throws(Exception.constructor)
            
    public update(Graphics graphics);

    public initCommands(CommandListener cmdListener);

    float getMaxValue();

    public start();

    private: const backgroundLabel: string = "Background AI Game Loading...";

    private: const START_BACKGROUND: string = "startBackground";

    public startBackground(bool background);

    public endActual();

    public inGame();

    public end();

    public endFromInitialLazyLoadingComplete();

    public endIfPaintedSinceStart();

    const ADD_PORTION: string = "addPortion";

    const ADD_EARLY_PORTION: string = "addEarlyPortion";

    public addEarlyPortion(int32_t value, string text, int32_t index);

    public addPortion(int32_t value, string text, int32_t index);

    public addNormalPortion(int32_t value, string text);

    setValue(int32_t value);

    public paint(Graphics graphics);

    public paint2(Graphics graphics);

    public paintThreed(Graphics graphics);

    float getValue();

    public setText(string text);

    public string getText();

    setBackground(bool background);

    bool isBackground();

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_H
