
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_CPP
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/displayable/HighScoresCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessor.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/HighScoresResultsListener.h>

      
#include <org/allbinary/game/score/NoHighScoresFactory.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/thread/SecondaryThreadPool.h>

      
#include <org/allbinary/logic/ABSystemWrapper.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

HighScoresCanvas::HighScoresCanvas(CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, GameInfo* gameInfo, HighScoresPaintable* paintable, HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface* highScoresCanvasInputProcessorFactoryInterface) : GameCommandCanvas(commandListener, HighScoresCanvas::NAME, allBinaryGameLayerManager->getBackgroundBasicColor(), allBinaryGameLayerManager->getForegroundBasicColor()), paintable(NullPaintable::getInstance()), highScoreCommandsFactory(HighScoreCommandsFactory::getInstance()), waitPaintable(new SimpleTextPaintable(this->commonStrings->PLEASE_WAIT_FOR_SERVER, BasicColorFactory::getInstance()->WHITE)), highScoresHelper(new HighScoresHelperBase()), currentCommand(this->highScoreCommandsFactory->HIGH_SCORE_COMMANDS[0]){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->highScoresPaintable= paintable;
    
this->highScoresFactoryInterface= highScoresFactoryInterface;
    
this->highScoresCanvasInputProcessor= highScoresCanvasInputProcessorFactoryInterface->getInstance(this);
    
this->gameInfo= gameInfo;
    
this->waitPaintable->setBasicColorP(allBinaryGameLayerManager->getForegroundBasicColor());
    
this->getHighScoresPaintable()->setBasicColorP(allBinaryGameLayerManager->getForegroundBasicColor());
    
this->colorFillPaintable= ColorFillPaintableFactory::getInstance()->getInstance(allBinaryGameLayerManager->getBackgroundBasicColor(), false);
    

                        if(this->highScoresHelper->getHighScoresArray() == NoHighScoresFactory::getInstance()->NO_HIGH_SCORES)
                        
                                    {
                                    this->setPaintable(this->waitPaintable);
    

                                    }
                                
                        else {
                            this->logUtil->putF("Show HighScores that are already loaded", this, this->commonStrings->CONSTRUCTOR);
    
this->updateCommand(this->currentCommand);
    
this->setPaintable(this->getHighScoresPaintable());
    

                        }
                            

//inner=true member= isStatic=
class HighScoreRunnable: public ARunnable {

    HighScoresCanvas* highScoresCanvas;

: HighScoreRunnable(HighScoresCanvas* highScoresCanvas){
this->highScoresCanvas= highScoresCanvas;
    
}


    public: void run(){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    LogUtil* logUtil = LogUtil::getInstance();;
    

    HighScoresCanvas* highScoresCanvas = this->highScoresCanvas;;
    

        try {
            
    bool isHTML = J2MEUtil::isHTML();;
    

                        if(!isHTML)
                        
                                    {
                                    
        while(!highScoresCanvas->hasPainted)
        {
}

highScoresCanvas->hasPainted= false;
    

                                    }
                                

    StringMaker* stringMaker = new StringMaker();;
    

    ABSystemWrapper* systemWrapper = ABSystemWrapper::getInstance();;
    

    int64_t currentTimeMillis = systemWrapper->currentTimeMillis();;
    
logUtil->putF(stringMaker->append("HighScoresCanvas - Request repaint to be sure: ")->appendlong(currentTimeMillis)->toString(), this, commonStrings->RUN);
    
highScoresCanvas->repaintBehavior->onChangeRepaint(highScoresCanvas);
    

                        if(!isHTML)
                        
                                    {
                                    
        while(!highScoresCanvas->hasPainted)
        {
}


                                    }
                                
stringMaker->delete_(0, stringMaker->length());
    
logUtil->putF(stringMaker->append("HighScoresCanvas - Now that the canvas has completed repaint go ahead and fetch the scores: ")->appendlong(currentTimeMillis)->toString(), this, commonStrings->RUN);
    
highScoresCanvas->executeUpdate();
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings->EXCEPTION, this, commonStrings->RUN, &e);
    
}

}


};

            

                    //Otherwise - statement - EmptyStmt

SecondaryThreadPool::getInstance()->runTask(new HighScoreRunnable(this));
    
}


    auto HighScoresCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


    auto HighScoresCanvas::open() -> void{
GameCommandCanvas::open();
    
this->highScoresCanvasInputProcessor->open();
    
}


    auto HighScoresCanvas::close() -> void{
GameCommandCanvas::close();
    
this->highScoresCanvasInputProcessor->close();
    
}


    auto HighScoresCanvas::paint(Graphics* graphics) -> void{
this->colorFillPaintable->paint(graphics);
    
this->paintable->paint(graphics);
    

                        if(this->waitPaintable != this->paintable)
                        
                                    {
                                    this->highScoresCanvasInputProcessor->paint(graphics);
    

                                    }
                                
GameCommandCanvas::paint(graphics);
    
this->hasPainted= true;
    
}


    auto HighScoresCanvas::executeUpdate() -> void{

        try {
            this->highScoresFactoryInterface->fetchHighScores(this->getGameInfo(), this);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, &e);
    
}

}


    auto HighScoresCanvas::getHighScoresPaintable() -> HighScoresPaintable*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->highScoresPaintable;
    
}


    auto HighScoresCanvas::setHighScoresArray(std::vector<HighScores*> highScoresArray) -> void{

        try {
            
                        if(!highScoresArray.empty())
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append(this->commonStrings->START)->appendint(highScoresArray.size())->toString(), this, "setHighScoresArray");
    

                                    }
                                
                        else {
                            this->logUtil->putF(this->commonStrings->START, this, "setHighScoresArray");
    

                        }
                            
this->highScoresHelper->setHighScoresArray(highScoresArray);
    
this->updateCommand(this->currentCommand);
    
this->setPaintable(this->getHighScoresPaintable());
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->UPDATE, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto HighScoresCanvas::updateCommand(Command* command) -> void{
this->logUtil->putF((new StringMaker())->append(this->commonStrings->START)->append(this->stringUtil->toString(command))->toString(), this, this->commonStrings->UPDATE);
    

    GameCommandsFactory* gameCommandsFactory = GameCommandsFactory::getInstance();;
    

                        if(this->highScoreCommandsFactory->isHighScoreCommand(command))
                        
                                    {
                                    
    int32_t index = this->highScoreCommandsFactory->getIndex(command);;
    

    int32_t nextIndex = index +1;;
    

    std::vector<HighScores*> highScoresArray = this->highScoresHelper->getHighScoresArray();;
    

                        if(nextIndex >= highScoresArray.size())
                        
                                    {
                                    nextIndex= 0;
    

                                    }
                                

                        if(highScoresArray.size() > 0)
                        
                                    {
                                    this->getHighScoresPaintable()->setHighScores(highScoresArray[index]);
    

                                    }
                                
                        else {
                            this->getHighScoresPaintable()->setHighScores(NullHighScoresSingletonFactory::getInstance());
    

                        }
                            

                        if(index != nextIndex)
                        
                                    {
                                    this->removeAllCommands();
    
this->addCommand(gameCommandsFactory->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->addCommand(this->highScoreCommandsFactory->HIGH_SCORE_COMMANDS[nextIndex]);
    

                                    }
                                

                                    }
                                
this->currentCommand= command;
    
this->close();
    
GameCommandCanvas::initMenu();
    
this->open();
    
this->repaintBehavior->onChangeRepaint(this);
    
}


    auto HighScoresCanvas::getGameInfo() -> GameInfo*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->gameInfo;
    
}


    auto HighScoresCanvas::setPaintable(Paintable* paintable) -> void{
this->paintable= paintable;
    
this->repaintBehavior->onChangeRepaint(this);
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_CPP
