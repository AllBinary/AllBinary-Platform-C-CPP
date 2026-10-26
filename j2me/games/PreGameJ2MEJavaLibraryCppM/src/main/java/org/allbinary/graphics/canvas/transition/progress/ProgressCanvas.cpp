
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
        //#include "ProgressPaintable.h"
#include "ProgressEndListener.h"

class ProgressCanvas: public RunnableCanvas, public PaintableInterface, public UpdateMyFontInterface {

    protected: bool hasPainted= false;

    private: BasicColor backgroundBasicColor;

//inner= member=true isStatic=
class ProgressPaintable: public Paintable {

    ProgressCanvas progressCanvas;

: ProgressPaintable(ProgressCanvas progressCanvas){
this->progressCanvas= progressCanvas;
    
}


    public: void paint(Graphics graphics){
this->progressCanvas.paint2(graphics);
    
}


};

            
    public: const Paintable GAUGE_PAINTABLE = ProgressPaintable(this);

    private: const float maxValue = 100.0;

    protected: ABCustomGaugeItem gauge;

    private: const std::string TEXT = this->commonStrings.LOADING;

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    protected: AllBinaryMidlet allbinaryMidlet = AllBinaryMidlet::getNullInstance();

    private: float value= 0.0;

    private: std::string text = this->TEXT;

    private: bool background = true;

    protected: PaintableInterface paintable = this->GAUGE_PAINTABLE;

    public: bool inProgress = false;

    private: const Processor IN_GAME_PROCESSOR = class extends Processor
                                {
                                
    const ThreadPool pathFindingThreadPool = PathFindingThreadPool::getInstance();
                //@Throws(Exception.constructor)
            
    public: void process(){
this->pathFindingThreadPool.runAPriorityTask();
    
}

                                }
                            ;

    public: Processor inGameProcessor = Processor::getInstance();

    public: ProgressEndListener progressEndListener = ProgressEndListener::instance();

: ProgressCanvas(std::string title, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor) : RunnableCanvas(NullCommandListener::NULL_COMMAND_LISTENER, CanvasStrings::getInstance().EMPTY_CHILD_NAME_LIST, false){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->backgroundBasicColor= backgroundBasicColor;
    
this->gauge= ABCustomGaugeItem(StringUtil::getInstance().EMPTY_STRING, static_cast<int32_t>(this->maxValue), 0, backgroundBasicColor, foregroundBasicColor);
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->gauge.setHeight(font.getHeight() +2);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void init(AllBinaryMidlet gameMidlet){
this->allbinaryMidlet= gameMidlet;
    
}


                //@Throws(Exception.constructor)
            
    public: void update(Graphics graphics){
}


    public: void initCommands(CommandListener cmdListener){
}


    protected: float getMaxValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxValue;
    
}


    public: void start(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.START_METHOD_NAME);
    
this->setBackground(true);
    
this->gauge.setHeight(30);
    
this->gauge.setLabel(this->commonStrings.PLEASE_WAIT);
    
this->setText(this->TEXT);
    
this->setValue(0);
    
this->inGameProcessor= Processor::getInstance();
    
this->paintable= this->GAUGE_PAINTABLE;
    
this->inProgress= true;
    
}


    private: const std::string backgroundLabel = "Background AI Game Loading...";

    private: const std::string START_BACKGROUND = "startBackground";

    public: void startBackground(bool background){
this->logUtil.putF(this->commonStrings.START, this, this->START_BACKGROUND);
    
this->setBackground(background);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
this->gauge.setLabel(this->backgroundLabel);
    
this->setText(this->TEXT);
    
this->setValue(0);
    
this->inGameProcessor= Processor::getInstance();
    
this->paintable= this->GAUGE_PAINTABLE;
    
}


    public: void endActual(){
this->allbinaryMidlet.commandAction(GameCommandsFactory::getInstance().SHOW_GAME_CANVAS, NullCanvas::NULL_CANVAS);
    
this->inProgress= false;
    
this->inGame();
    
}


    public: void inGame(){
this->progressEndListener.onEndEvent();
    
this->inGameProcessor= this->IN_GAME_PROCESSOR;
    
}


    public: void end(){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.END_METHOD_NAME);
    
this->gauge.setValue(this->getMaxValue());
    
this->endActual();
    
this->paintable= NullPaintable::getInstance();
    
}


    public: void endFromInitialLazyLoadingComplete(){
this->progressEndListener.onEndEvent();
    
this->gauge.setValue(this->getMaxValue());
    
this->inGameProcessor= this->IN_GAME_PROCESSOR;
    
}


    public: bool isInGame(){

                        if(this->inGameProcessor == this->IN_GAME_PROCESSOR)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void endIfPaintedSinceStart(){
}


    protected: const std::string ADD_PORTION = "addPortion";

    protected: const std::string ADD_EARLY_PORTION = "addEarlyPortion";

    public: void addEarlyPortion(int32_t value, std::string text, int32_t index){
this->setText(StringMaker().append(text).append(SmallIntegerSingletonFactory::getInstance().getAt(index).toString()).toString());
    
this->gauge.setValue(this->gauge.getValue() +this->getMaxValue() /value);
    
}


    public: void addPortion(int32_t value, std::string text, int32_t index){
this->setText(StringMaker().append(text).append(SmallIntegerSingletonFactory::getInstance().getAt(index).toString()).toString());
    
PreLogUtil::put(this->text, this, this->ADD_PORTION);
    
this->gauge.setValue(this->gauge.getValue() +this->getMaxValue() /value);
    
}


    public: void addNormalPortion(int32_t value, std::string text){

                        if(this->text != text)
                        
                                    {
                                    PreLogUtil::put(text, this, this->ADD_PORTION);
    

                                    }
                                
this->setText(text);
    
this->gauge.setValue(this->gauge.getValue() +this->getMaxValue() /value);
    
}


    protected: void setValue(int32_t value){
this->value= value;
    
this->gauge.setValue(value);
    
}


    public: void paint(Graphics graphics){
this->paintable.paint(graphics);
    
}


    public: void paint2(Graphics graphics){
this->myFontProcessor.process(graphics);
    
graphics.setColor(this->backgroundBasicColor.intValue());
    
graphics.fillRect(0, 0, this->displayInfo.getLastWidth(), this->displayInfo.getLastHeight());
    
this->gauge.paintXY(graphics, 0, 0);
    
this->hasPainted= true;
    
}


    public: void paintThreed(Graphics graphics){
}


    protected: float getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: void setText(std::string text){
this->text= text;
    
}


    public: std::string getText(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->text;
    
}


    protected: void setBackground(bool background){
this->background= background;
    
}


    protected: bool isBackground(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->background;
    
}


};

            

