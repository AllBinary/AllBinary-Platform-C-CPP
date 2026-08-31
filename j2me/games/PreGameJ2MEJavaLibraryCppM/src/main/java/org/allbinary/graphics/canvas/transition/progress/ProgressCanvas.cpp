
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

 constructor (ProgressCanvas progressCanvas){

            super();
        this.progressCanvas= progressCanvas;
    
}


    public paint(Graphics graphics){
this.progressCanvas!.paint2(graphics);
    
}


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
            
    public process(){
this.pathFindingThreadPool!.runAPriorityTask();
    
}

                                }
                            ;

    public inGameProcessor: Processor = Processor.getInstance()!;

 constructor (string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
            super(NullCommandListener.NULL_COMMAND_LISTENER, CanvasStrings.getInstance()!.EMPTY_CHILD_NAME_LIST, false);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.backgroundBasicColor= backgroundBasicColor;
    
this.gauge= new ABCustomGaugeItem(StringUtil.getInstance()!.EMPTY_STRING, static_cast<int32_t>(this.maxValue), 0, backgroundBasicColor, foregroundBasicColor);
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.gauge.setHeight(font.getHeight() +2);
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public init(AllBinaryMidlet gameMidlet){
this.allbinaryMidlet= gameMidlet;
    
}


                //@Throws(Exception.constructor)
            
    public update(Graphics graphics){
}


    public initCommands(CommandListener cmdListener){
}


    float getMaxValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxValue;
    
}


    public start(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.START_METHOD_NAME);
    
this.setBackground(true);
    
this.gauge.setHeight(30);
    
this.gauge.setLabel(this.commonStrings!.PLEASE_WAIT);
    
this.setText(this.TEXT);
    
this.setValue(0);
    
this.inGameProcessor= Processor.getInstance();
    
this.paintable= this.GAUGE_PAINTABLE;
    
this.inProgress= true;
    
}


    private: const backgroundLabel: string = "Background AI Game Loading...";

    private: const START_BACKGROUND: string = "startBackground";

    public startBackground(bool background){
this.logUtil!.putF(this.commonStrings!.START, this, this.START_BACKGROUND);
    
this.setBackground(background);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
this.gauge.setLabel(this.backgroundLabel);
    
this.setText(this.TEXT);
    
this.setValue(0);
    
this.inGameProcessor= Processor.getInstance();
    
this.paintable= this.GAUGE_PAINTABLE;
    
}


    public endActual(){
this.allbinaryMidlet!.commandAction(GameCommandsFactory.getInstance()!.SHOW_GAME_CANVAS, NullCanvas.NULL_CANVAS);
    
this.inProgress= false;
    
this.inGame();
    
}


    public inGame(){
this.inGameProcessor= this.IN_GAME_PROCESSOR;
    
}


    public end(){
this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.END_METHOD_NAME);
    
this.gauge.setValue(this.getMaxValue());
    
this.endActual();
    
this.paintable= NullPaintable.getInstance();
    
}


    public endFromInitialLazyLoadingComplete(){
this.gauge.setValue(this.getMaxValue());
    
this.inGameProcessor= this.IN_GAME_PROCESSOR;
    
}


    public endIfPaintedSinceStart(){
}


    const ADD_PORTION: string = "addPortion";

    const ADD_EARLY_PORTION: string = "addEarlyPortion";

    public addEarlyPortion(int32_t value, string text, int32_t index){
this.setText(new StringMaker().append(text)!.append(SmallIntegerSingletonFactory.getInstance()!.getAt(index)!.toString())!.toString());
    
this.gauge.setValue(this.gauge.getValue() +this.getMaxValue() /value);
    
}


    public addPortion(int32_t value, string text, int32_t index){
this.setText(new StringMaker().append(text)!.append(SmallIntegerSingletonFactory.getInstance()!.getAt(index)!.toString())!.toString());
    
PreLogUtil.put(this.text, this, this.ADD_PORTION);
    
this.gauge.setValue(this.gauge.getValue() +this.getMaxValue() /value);
    
}


    public addNormalPortion(int32_t value, string text){

                        if(this.text != text)
                        
                                    {
                                    PreLogUtil.put(text, this, this.ADD_PORTION);
    

                                    }
                                
this.setText(text);
    
this.gauge.setValue(this.gauge.getValue() +this.getMaxValue() /value);
    
}


    setValue(int32_t value){
this.value= value;
    
this.gauge.setValue(value);
    
}


    public paint(Graphics graphics){
this.paintable.paint(graphics);
    
}


    public paint2(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.backgroundBasicColor!.intValue());
    
graphics.fillRect(0, 0, this.displayInfo!.getLastWidth(), this.displayInfo!.getLastHeight());
    
this.gauge.paintXY(graphics, 0, 0);
    
this.hasPainted= true;
    
}


    public paintThreed(Graphics graphics){
}


    float getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public setText(string text){
this.text= text;
    
}


    public string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.text;
    
}


    setBackground(bool background){
this.background= background;
    
}


    bool isBackground(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.background;
    
}


};

            

