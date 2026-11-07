
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/canvas/Processor.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/configuration/feature/InputFeatureFactory.h>

      
#include <org/allbinary/game/displayable/RepaintBehavior.h>

      
#include <org/allbinary/game/input/GameInputStrings.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/event/DownGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/input/event/GameKeyEventFactory.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/UpGameKeyEventHandler.h>

      
#include <org/allbinary/game/input/mapping/InputToGameKeyMapping.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEvent.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventHandler.h>

      
#include <org/allbinary/graphics/displayable/event/DisplayChangeEventListener.h>

      
#include <org/allbinary/graphics/displayable/screen/ScreenRepaintProcessorFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/form/CommandCurrentSelectionFormFactory.h>

      
#include <org/allbinary/graphics/form/FormPaintable.h>

      
#include <org/allbinary/graphics/form/FormTypeFactory.h>

      
#include <org/allbinary/graphics/form/PaintableForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionForm.h>

      
#include <org/allbinary/graphics/form/ScrollSelectionFormNoneFactory.h>

      
#include <org/allbinary/graphics/form/item/CommandTextItemArrayFactory.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/graphics/form/item/validation/AllCommandsVisitor.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/input/motion/gesture/observer/BasicMotionGesturesHandler.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/logic/util/event/EventStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/MenuListener.h"
#include "org/allbinary/game/displayable/canvas/NoMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/BasicMenuInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/ImmediateCommandFormInputProcessor.h"


GameCommandCanvas::GameCommandCanvas(CommandListener* cmdListener, std::string name, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : MyCanvas(name, CanvasStrings::getInstance()->EMPTY_CHILD_NAME_LIST), repaintProcessor(ScreenRepaintProcessorFactory::getInstance()->create(this)), gameInputStrings(GameInputStrings::getInstance()), inputToGameKeyMapping(PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance()->getInputMapping()), gameKeyFactory(GameKeyFactory::getInstance()), gameKeyEventFactory(GameKeyEventFactory::getInstance()), downGameKeyEventHandler(DownGameKeyEventHandler::getInstance()), upGameKeyEventHandler(UpGameKeyEventHandler::getInstance()), updateMyFontProcessor(new UpdateMyFontProcessor(this)), myFontProcessor(this->updateMyFontProcessor), menuInputProcessor(NoMenuInputProcessor::getInstance()), menuPaintable(NullPaintable::getInstance()), menuForm(PaintableForm::getNullPaintableForm()), isSingleKeyRepeatableProcessing(Features::getInstance()->isFeature(InputFeatureFactory::getInstance()->SINGLE_KEY_REPEAT_PRESS)){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->repaintBehavior= RepaintBehavior::getInstance();
    
this->foregroundBasicColor= foregroundBasicColor;
    
this->backgroundBasicColor= backgroundBasicColor;
    
this->foregroundColor= this->foregroundBasicColor->intValue();
    
this->backgroundColor= this->backgroundBasicColor->intValue();
    
this->initCommands(cmdListener);
    

                        if(cmdListener != NullCommandListener::NULL_COMMAND_LISTENER)
                        
                                    {
                                    
        try {
            this->initMenu();
    
this->repaintProcessor->process();
    

                //: 
} catch(Exception& e) 
            {



                            throw RuntimeException();
                    
}


                                    }
                                
}


    auto GameCommandCanvas::updateMeasurement(Graphics* graphics) -> void{

        try {
            
    Font* font = graphics->getFont();;
    
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->commonStrings->START)->append(this->canvasStrings->FD_WIDTH)->appendint(MyFontProcessor::defaultCharWidth(font))->append(this->canvasStrings->FD_HEIGHT)->appendint(font->getHeight())), this, this->canvasStrings->UPDATE_MEASUREMENT);
    
this->fontHeight= font->getHeight();
    

    Rectangle* rectangle = this->createRectangle(this->menuForm->size());;
    
this->menuForm->init(rectangle, FormTypeFactory::getInstance()->VERTICAL_CENTER_FORM);
    
this->update();
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, &e);
    
}

this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto GameCommandCanvas::onEvent(AllBinaryEventObject* eventObject) -> void{
ForcedLogUtil::log(EventStrings::getInstance()->PERFORMANCE_MESSAGE, this);
    
}


    auto GameCommandCanvas::onDisplayChangeEvent(DisplayChangeEvent* displayChangeEvent) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->commonStrings->START)->append(JavaString::valueOf(DisplayInfoSingleton::getInstance()))), this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT);
    
this->myFontProcessor= this->updateMyFontProcessor;
    
}


    auto GameCommandCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->setCommandListener(cmdListener);
    
}


                //@Throws(Exception.constructor)
            
    auto GameCommandCanvas::initMenu() -> void{

    ScrollSelectionForm* form = this->createForm();;
    
this->menuForm= form;
    

                        if(form != ScrollSelectionFormNoneFactory::getInstance())
                        
                                    {
                                    this->setMenuInputProcessor(new ImmediateCommandFormInputProcessor(new BasicArrayListD(),  -1, this, form));
    
this->menuPaintable= new FormPaintable(form);
    

                                    }
                                
this->repaintBehavior->onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameCommandCanvas::createForm() -> ScrollSelectionForm*{

    std::vector<ABCustomItem*> items = (new CommandTextItemArrayFactory(new AllCommandsVisitor()))->getInstance(this->getCommandStack(), this->backgroundBasicColor, this->foregroundBasicColor);;
    

    Rectangle* rectangle = this->createRectangle(items.size());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return CommandCurrentSelectionFormFactory::getInstance(StringUtil::getInstance()->EMPTY_STRING, items, rectangle, FormTypeFactory::getInstance()->VERTICAL_CENTER_FORM, 15, false, this->backgroundBasicColor, this->foregroundBasicColor);;
    
}


    auto GameCommandCanvas::createRectangle(int32_t size) -> Rectangle*{

    int32_t height = size *this->fontHeight;;
    

    int32_t startY = (this->displayInfo->getLastHeight() *2 /3) -height;;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    Rectangle* rectangle = new Rectangle(pointFactory->createXY(30, startY), this->displayInfo->getLastWidth() -30, startY);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rectangle;
    
}


    auto GameCommandCanvas::open() -> void{
this->logUtil->putF(this->commonStrings->START, this, "open");
    
BasicMotionGesturesHandler::getInstance()->addListenerInterface(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance()->addListener(this->getMenuInputProcessor());
    
DisplayChangeEventHandler::getInstance()->addListenerInterface(this);
    
}


    auto GameCommandCanvas::close() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CLOSE);
    
BasicMotionGesturesHandler::getInstance()->removeListener(this->getMenuInputProcessor());
    
GameKeyEventHandler::getInstance()->removeListener(this->getMenuInputProcessor());
    
DisplayChangeEventHandler::getInstance()->removeListener(this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameCommandCanvas::update() -> void{
this->repaintProcessor->process();
    
}


    auto GameCommandCanvas::getSourceId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return GameCommandCanvas::id;
    
}


    auto GameCommandCanvas::keyPressed(int32_t keyCode) -> void{
this->keyPressedByDevice(keyCode, 0);
    
}


    auto GameCommandCanvas::keyReleased(int32_t keyCode) -> void{
this->keyReleasedByDevice(keyCode, 0);
    
}


    auto GameCommandCanvas::keyRepeated(int32_t keyCode) -> void{
this->keyRepeatedByDevice(keyCode, 0);
    
}


    auto GameCommandCanvas::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(CommonSeps::getInstance()->SPACE)->appendint(keyCode)), this, this->gameInputStrings->KEY_PRESSED);
    
this->addGameKeyEvent(keyCode, 0, false);
    
}


    auto GameCommandCanvas::keyReleasedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->removeGameKeyEvent(keyCode, deviceId, false);
    
}


    auto GameCommandCanvas::keyRepeatedByDevice(int32_t keyCode, int32_t deviceId) -> void{

                        if(this->isSingleKeyRepeatableProcessing)
                        
                                    {
                                    this->addGameKeyEvent(keyCode, deviceId, true);
    

                                    }
                                
}


    auto GameCommandCanvas::addGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->gameKeyFactory->NONE)
                        
                                    {
                                    
    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this, gameKey);;
    
this->downGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->downGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->ADD_KEY_EVENT);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}


    auto GameCommandCanvas::removeGameKeyEvent(int32_t keyCode, int32_t deviceId, bool repeated) -> void{

        try {
            
    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this, keyCode);;
    

                        if(gameKey != this->gameKeyFactory->NONE)
                        
                                    {
                                    
    GameKeyEvent* gameKeyEvent = this->gameKeyEventFactory->getInstanceForInput(this, gameKey);;
    
this->upGameKeyEventHandler->fireEvent(gameKeyEvent);
    
this->upGameKeyEventHandler->getInstanceForDevice(deviceId)->fireEvent(gameKeyEvent);
    

                                    }
                                
                        else {
                            this->logUtil->putF(JavaString::valueOf((new StringMaker())->append(this->gameInputStrings->NO_KEY)->appendint(keyCode)), this, this->gameInputStrings->REMOVE_KEY_EVENT);
    

                        }
                            

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->REMOVE_KEY_EVENT, &e);
    
}

}


    auto GameCommandCanvas::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    
this->menuPaintable->paint(graphics);
    
this->repaintBehavior->repaint(this);
    
}


    auto GameCommandCanvas::setMenuInputProcessor(BasicMenuInputProcessor* menuInputProcessor) -> void{
this->menuInputProcessor= menuInputProcessor;
    
}


    auto GameCommandCanvas::getMenuInputProcessor() -> BasicMenuInputProcessor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->menuInputProcessor;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECOMMANDCANVAS_CPP
