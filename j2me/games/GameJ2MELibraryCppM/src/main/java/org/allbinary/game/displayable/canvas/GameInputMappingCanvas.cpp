
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/GameInputMappingCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/input/GameKey.h>

      
#include <org/allbinary/game/input/GameKeyFactory.h>

      
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/game/input/InputFactory.h>

      
#include <org/allbinary/game/input/PlatformInputMappingFactory.h>

      
#include <org/allbinary/game/input/mapping/InputMappingInterface.h>

      
#include <org/allbinary/game/input/mapping/PersistentInputMapping.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/paint/help/HelpPaintable.h>

      
#include <org/allbinary/game/paint/help/InputMappingHelpPaintable.h>

      
#include <org/allbinary/graphics/paint/ProcessPaintable.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#include "org/allbinary/game/displayable/canvas/GameInputMappingInstructionsCanvas.h"

auto GameInputMappingCanvas::DISPLAY_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Controls", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2)); return value.get(); }
Command* GameInputMappingCanvas::DISPLAY = GameInputMappingCanvas::DISPLAY_owner();
auto GameInputMappingCanvas::DEFAULT_owner() -> Command* { static std::unique_ptr<Command> value(new Command("Default", StringUtil::getInstance()->EMPTY_STRING, Command::SCREEN, 2)); return value.get(); }
Command* GameInputMappingCanvas::DEFAULT = GameInputMappingCanvas::DEFAULT_owner();

GameInputMappingCanvas::GameInputMappingCanvas(AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, AllBinaryGameLayerManager* allBinaryGameLayerManager, HelpPaintable* helpPaintable) : GameCommandCanvas(commandListener, GameInputMappingCanvas::NAME, allBinaryGameLayerManager->getBackgroundBasicColor(), allBinaryGameLayerManager->getForegroundBasicColor()), NONE(GameKeyFactory::getInstance()->NONE), selectedGameKey(this->NONE), selectedInput(this->NONE), inputFactory(InputFactory::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    

                        if(helpPaintable == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("Help Paintable Exception");
                    

                                    }
                                
this->abeClientInformation= abeClientInformation;
    
this->helpPaintable= dynamic_cast<InputMappingHelpPaintable*>(helpPaintable);
    
this->inputMapping= PlatformInputMappingFactory::getInstance()->getPersistentInputMappingInstance();
    
this->paintable= new ProcessPaintable();
    
this->colorFillPaintable= ColorFillPaintableFactory::getInstance()->getInstance(allBinaryGameLayerManager->getBackgroundBasicColor(), false);
    
}


    auto GameInputMappingCanvas::close() -> void{
GameCommandCanvas::close();
    
this->paintable->process();
    
this->selectedGameKey= this->NONE;
    
this->selectedInput= this->NONE;
    
this->update();
    
}


    auto GameInputMappingCanvas::initCommands(CommandListener* cmdListener) -> void{
this->removeAllCommands();
    
this->addCommand(GameCommandsFactory::getInstance()->CLOSE_AND_SHOW_GAME_CANVAS);
    
this->addCommand(GameInputMappingCanvas::DEFAULT);
    
this->addCommand(GameInputMappingInstructionsCanvas::DISPLAY);
    
this->setCommandListener(cmdListener);
    
}


    auto GameInputMappingCanvas::keyPressed(int32_t keyCode) -> void{
this->keyPressedByDevice(keyCode, 0);
    
}


    auto GameInputMappingCanvas::keyReleased(int32_t keyCode) -> void{
this->keyReleasedByDevice(keyCode, 0);
    
}


    auto GameInputMappingCanvas::keyRepeated(int32_t keyCode) -> void{
this->keyRepeatedByDevice(keyCode, 0);
    
}


    auto GameInputMappingCanvas::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
this->addGameKey(keyCode, false);
    
GameCommandCanvas::keyPressedByDevice(keyCode, 0);
    
}


    auto GameInputMappingCanvas::addGameKey(int32_t keyCode, bool repeated) -> void{

        try {
            this->logUtil->putF((new StringMaker())->append("Raw Device Key Code: ")->append(Integer.toHexString(keyCode))->toString(), this, this->gameInputStrings->ADD_KEY_EVENT);
    

    GameKey* gameKey = this->inputToGameKeyMapping->getInstanceForCanvas(this, keyCode);;
    

    Input* input = this->inputFactory->getInstanceById(keyCode);;
    
this->processInputMapping(gameKey, input);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Key Event Error", this, this->gameInputStrings->ADD_KEY_EVENT, &e);
    
}

}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::processInputMapping(GameKey* gameKey, Input* input) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Start Passed GameKey: ");
    
stringBuffer->append(this->stringUtil->toString(gameKey));
    
stringBuffer->append(" Input: ");
    
stringBuffer->append(this->stringUtil->toString(input));
    
this->logUtil->putF(stringBuffer->toString(), this, this->commonStrings->PROCESS);
    

                        if(this->selectedGameKey != this->NONE)
                        
                                    {
                                    this->gameActionCrud(gameKey, input);
    

                                    }
                                
                        else {
                            this->setSelectedAction(gameKey);
    

                        }
                            
}


    auto GameInputMappingCanvas::setSelectedAction(GameKey* gameKey) -> void{
this->logUtil->putF((new StringMaker())->append("Selected GameKey: ")->append(this->stringUtil->toString(gameKey))->toString(), this, "setSelectedAction");
    
this->selectedGameKey= gameKey;
    
this->selectedInput= this->NONE;
    
this->helpPaintable->update(this->selectedGameKey, this->selectedInput);
    
this->repaintBehavior->onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::gameActionCrud(GameKey* gameKey, Input* input) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Start GameKey: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedGameKey));
    
stringBuffer->append(" Input: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedInput));
    
this->logUtil->putF(stringBuffer->toString(), this, "gameActionCrud");
    

                        if(this->selectedInput == this->NONE)
                        
                                    {
                                    
    BasicArrayList* list = this->inputMapping->getInputMapping()->getMappedInput(this->selectedGameKey);;
    

    bool isInputAlreadyMappedToSelectedAction = list->contains(input);;
    

                        if(isInputAlreadyMappedToSelectedAction)
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Already Mapped Input: ")->append(this->stringUtil->toString(input))->toString(), this, "gameActionCrud");
    
this->selectedInput= input;
    
this->helpPaintable->update(this->selectedGameKey, this->selectedInput);
    
this->repaintBehavior->onChangeRepaint(this);
    

                                    }
                                
                        else {
                            this->addNewMapping(gameKey, input);
    

                        }
                            

                                    }
                                
                             else 
                        if(this->inputMapping->isDelete(input))
                        
                                    {
                                    this->deleteCurrentMapping();
    

                                    }
                                
                        else {
                            this->setSelectedAction(gameKey);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::addNewMapping(GameKey* gameKey, Input* input) -> void{

    std::string METHOD_NAME = "addNewMapping";;
    
this->logUtil->putF(this->commonStrings->START, this, METHOD_NAME);
    

    bool isInputAlreadyMapped = this->inputMapping->getInputMapping()->isMapped(input);;
    

                        if(!isInputAlreadyMapped && !this->inputMapping->isSystemInput(input))
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Add Key Mapping : GameKey: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedGameKey));
    
stringBuffer->append(" Input: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedInput));
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    
this->inputMapping->getInputMapping()->add(this->selectedGameKey, input);
    
this->selectedInput= input;
    
this->update();
    

                                    }
                                
                        else {
                            this->logUtil->putF("Unable to add Mapping since one already exists or is MENU, HOME, or BACK key and setting selected action to what it is already mapped to", this, METHOD_NAME);
    
this->setSelectedAction(gameKey);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::deleteCurrentMapping() -> void{

    std::string METHOD_NAME = "deleteCurrentMapping";;
    

    BasicArrayList* list = this->inputMapping->getInputMapping()->getMappedInput(this->selectedGameKey);;
    

                        if(list->size() > 1)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("Start GameKey: ");
    
stringBuffer->append("Remove Key Mapping: GameKey: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedGameKey));
    
stringBuffer->append(" Input: ");
    
stringBuffer->append(this->stringUtil->toString(this->selectedInput));
    
this->logUtil->putF(stringBuffer->toString(), this, METHOD_NAME);
    
this->inputMapping->getInputMapping()->remove(this->selectedGameKey, this->selectedInput);
    
this->selectedInput= this->NONE;
    
this->update();
    

                                    }
                                
                        else {
                            this->logUtil->putF("Can't Remove Last Key Mapping", this, METHOD_NAME);
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::setDefault() -> void{
this->inputMapping->setDefault(this->abeClientInformation);
    
this->helpPaintable->update(this->NONE, this->NONE);
    
this->repaintBehavior->onChangeRepaint(this);
    
}


                //@Throws(Exception.constructor)
            
    auto GameInputMappingCanvas::update() -> void{
this->inputMapping->update(this->abeClientInformation);
    
this->helpPaintable->update(this->selectedGameKey, this->selectedInput);
    
this->repaintBehavior->onChangeRepaint(this);
    
}


    auto GameInputMappingCanvas::paint(Graphics* graphics) -> void{
this->colorFillPaintable->paint(graphics);
    
this->helpPaintable->paint(graphics);
    
this->paintable->paint(graphics);
    
GameCommandCanvas::paint(graphics);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEINPUTMAPPINGCANVAS_CPP
