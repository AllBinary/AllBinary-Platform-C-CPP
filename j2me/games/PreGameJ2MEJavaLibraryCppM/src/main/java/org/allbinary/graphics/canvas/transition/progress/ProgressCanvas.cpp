
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_CPP
        #define ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
        

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


ProgressCanvas::ProgressPaintable::ProgressPaintable(ProgressCanvas* progressCanvas){
this->progressCanvas= progressCanvas;
    
}


    auto ProgressCanvas::ProgressPaintable::paint(Graphics* graphics) -> void{
this->progressCanvas->paint2(graphics);
    
}


ProgressCanvas::ProgressCanvas(std::string title, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : RunnableCanvas(NullCommandListener::NULL_COMMAND_LISTENER, CanvasStrings::getInstance()->EMPTY_CHILD_NAME_LIST, false), GAUGE_PAINTABLE(new ProgressPaintable(this)), TEXT(this->commonStrings->LOADING), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), allbinaryMidlet(AllBinaryMidlet::getNullInstance()), text(this->TEXT), paintable(this->GAUGE_PAINTABLE), IN_GAME_PROCESSOR(class extends Processor
                                {
                                
    ThreadPool* pathFindingThreadPool = PathFindingThreadPool::getInstance();
                //@Throws(Exception.constructor)
            
    public: void process(){
this->pathFindingThreadPool->runAPriorityTask();
    
}

                                }
                            ), inGameProcessor(Processor::getInstance()), progressEndListener(ProgressEndListener::instance){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->backgroundBasicColor= backgroundBasicColor;
    
this->gauge= new ABCustomGaugeItem(StringUtil::getInstance()->EMPTY_STRING, static_cast<int32_t>(this->maxValue), 0, backgroundBasicColor, foregroundBasicColor);
    
}


    auto ProgressCanvas::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->gauge->setHeight(font->getHeight() +2);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto ProgressCanvas::init(AllBinaryMidlet* gameMidlet) -> void{
this->allbinaryMidlet= gameMidlet;
    
}


                //@Throws(Exception.constructor)
            
    auto ProgressCanvas::update(Graphics* graphics) -> void{
}


    auto ProgressCanvas::initCommands(CommandListener* cmdListener) -> void{
}


    auto ProgressCanvas::getMaxValue() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxValue;
    
}


    auto ProgressCanvas::start() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->START_METHOD_NAME);
    
this->setBackground(true);
    
this->gauge->setHeight(30);
    
this->gauge->setLabel(this->commonStrings->PLEASE_WAIT);
    
this->setText(this->TEXT);
    
this->setValue(0);
    
this->inGameProcessor= Processor::getInstance();
    
this->paintable= this->GAUGE_PAINTABLE;
    
this->inProgress= true;
    
}


    auto ProgressCanvas::startBackground(bool background) -> void{
this->logUtil->putF(this->commonStrings->START, this, this->START_BACKGROUND);
    
this->setBackground(background);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
this->gauge->setLabel(this->backgroundLabel);
    
this->setText(this->TEXT);
    
this->setValue(0);
    
this->inGameProcessor= Processor::getInstance();
    
this->paintable= this->GAUGE_PAINTABLE;
    
}


    auto ProgressCanvas::endActual() -> void{
this->allbinaryMidlet->commandAction(GameCommandsFactory::getInstance()->SHOW_GAME_CANVAS, NullCanvas::NULL_CANVAS);
    
this->inProgress= false;
    
this->inGame();
    
}


    auto ProgressCanvas::inGame() -> void{
this->progressEndListener->onEndEvent();
    
this->inGameProcessor= this->IN_GAME_PROCESSOR;
    
}


    auto ProgressCanvas::end() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->END_METHOD_NAME);
    
this->gauge->setValue(this->getMaxValue());
    
this->endActual();
    
this->paintable= NullPaintable::getInstance();
    
}


    auto ProgressCanvas::endFromInitialLazyLoadingComplete() -> void{
this->progressEndListener->onEndEvent();
    
this->gauge->setValue(this->getMaxValue());
    
this->inGameProcessor= this->IN_GAME_PROCESSOR;
    
}


    auto ProgressCanvas::isInGame() -> bool{

                        if(this->inGameProcessor == this->IN_GAME_PROCESSOR)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto ProgressCanvas::endIfPaintedSinceStart() -> void{
}


    auto ProgressCanvas::addEarlyPortion(int32_t value, std::string text, int32_t index) -> void{
this->setText((new StringMaker())->append(text)->append(SmallIntegerSingletonFactory::getInstance()->getAt(index)->toString())->toString());
    
this->gauge->setValue(this->gauge->getValue() +this->getMaxValue() /value);
    
}


    auto ProgressCanvas::addPortion(int32_t value, std::string text, int32_t index) -> void{
this->setText((new StringMaker())->append(text)->append(SmallIntegerSingletonFactory::getInstance()->getAt(index)->toString())->toString());
    
PreLogUtil::put(this->text, this, this->ADD_PORTION);
    
this->gauge->setValue(this->gauge->getValue() +this->getMaxValue() /value);
    
}


    auto ProgressCanvas::addNormalPortion(int32_t value, std::string text) -> void{

                        if(this->text != text)
                        
                                    {
                                    PreLogUtil::put(text, this, this->ADD_PORTION);
    

                                    }
                                
this->setText(text);
    
this->gauge->setValue(this->gauge->getValue() +this->getMaxValue() /value);
    
}


    auto ProgressCanvas::setValue(int32_t value) -> void{
this->value= value;
    
this->gauge->setValue(value);
    
}


    auto ProgressCanvas::paint(Graphics* graphics) -> void{
this->paintable->paint(graphics);
    
}


    auto ProgressCanvas::paint2(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
graphics->setColor(this->backgroundBasicColor->intValue());
    
graphics->fillRect(0, 0, this->displayInfo->getLastWidth(), this->displayInfo->getLastHeight());
    
this->gauge->paintXY(graphics, 0, 0);
    
this->hasPainted= true;
    
}


    auto ProgressCanvas::paintThreed(Graphics* graphics) -> void{
}


    auto ProgressCanvas::getValue() -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    auto ProgressCanvas::setText(std::string text) -> void{
this->text= text;
    
}


    auto ProgressCanvas::getText() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->text;
    
}


    auto ProgressCanvas::setBackground(bool background) -> void{
this->background= background;
    
}


    auto ProgressCanvas::isBackground() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->background;
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_CANVAS_TRANSITION_PROGRESS_PROGRESSCANVAS_CPP
