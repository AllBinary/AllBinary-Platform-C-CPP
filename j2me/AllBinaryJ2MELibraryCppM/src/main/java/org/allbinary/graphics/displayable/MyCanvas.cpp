
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_CPP
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/displayable/MyCanvas.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <javax/microedition/lcdui/NullCommandListener.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>

      
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>

      
#include <org/allbinary/input/TouchJ2ME.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/media/audio/Sound.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABStack.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/DisplayableInterface.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


MyCanvas::MyCanvas(std::string name, BasicArrayList* childNameList) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), canvasStrings(CanvasStrings::getInstance()), stringUtil(StringUtil::getInstance()), displayInfo(DisplayInfoSingleton::getInstance()), commandListener(NullCommandListener::NULL_COMMAND_LISTENER), touchME(new TouchJ2ME()){
this->logUtil->putF(this->commonStrings->CONSTRUCTOR, this, this->commonStrings->CONSTRUCTOR);
    
this->displayInfo->update(this, this->canvasStrings->CONSTRUCTOR);
    
this->name= name;
    
this->childNameList= childNameList;
    
this->commandStack= StdUtil::getInstance()->createStack();
    
}


    auto MyCanvas::setFullScreenMode(bool mode) -> void{
Canvas::setFullScreenMode(mode);
    
this->displayInfo->update(this, this->canvasStrings->SET_FULL_SCREEN_MODE);
    
}


    auto MyCanvas::sizeChanged(int32_t w, int32_t h) -> void{
this->displayInfo->update(this, this->canvasStrings->SIZE_CHANGED);
    
}


    auto MyCanvas::getCommandStack() -> ABStack<Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandStack;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::isCommand(Command* command) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandStack->contains(command);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::addCommand(Command* command) -> void{

                        if(!this->commandStack->contains(command))
                        
                                    {
                                    this->commandStack->push(command);
    
Canvas::addCommand(command);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::removeCommand(Command* command) -> void{
this->commandStack->removeElement(command);
    
Canvas::removeCommand(command);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::removeAllCommands() -> void{

    int32_t size = this->commandStack->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
Canvas::removeCommand(dynamic_cast<Command*>(this->commandStack->pop()));
    
}

}


    auto MyCanvas::setCommandListener(CommandListener* l) -> void{
Canvas::setCommandListener(l);
    
this->commandListener= l;
    
}


    auto MyCanvas::getCustomCommandListener() -> CommandListener*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandListener;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::isPaused() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paused;
    
}


    auto MyCanvas::removePauseCommand() -> void{
this->removeCommand(MyCommandsFactory::getInstance()->PAUSE_COMMAND);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::pause() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->canvasStrings->PAUSE);
    
this->removePauseCommand();
    
this->addCommand(MyCommandsFactory::getInstance()->RESUME_COMMAND);
    
this->setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto MyCanvas::unPause() -> void{
this->logUtil->putF(this->commonStrings->START, this, this->canvasStrings->UN_PAUSE);
    
this->removeCommand(MyCommandsFactory::getInstance()->RESUME_COMMAND);
    
this->addCommand(MyCommandsFactory::getInstance()->PAUSE_COMMAND);
    
this->setPaused(false);
    
}


                //@Throws(Exception.constructor)
            
    auto MyCanvas::process() -> void{
this->displayInfo->process();
    
}


    auto MyCanvas::paint(Graphics* graphics) -> void{
}


    auto MyCanvas::draw(Graphics* graphics) -> void{
}


    auto MyCanvas::hasChild(MyCanvas* displayable) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->childNameList->contains(displayable->name);;
    
}


    auto MyCanvas::destroy() -> void{
this->logUtil->putF("Destroyed MyCanvas", this, "destroy");
    
}


    auto MyCanvas::setPaused(bool isPaused) -> void{
this->paused= isPaused;
    
}


    auto MyCanvas::keyPressedByDevice(int32_t keyCode, int32_t deviceId) -> void{
}


    auto MyCanvas::keyRepeatedByDevice(int32_t keyCode, int32_t deviceId) -> void{
}


    auto MyCanvas::keyReleasedByDevice(int32_t keyCode, int32_t deviceId) -> void{
}


    auto MyCanvas::pointerDragged(int32_t x, int32_t y) -> void{
this->touchME->pointerDragged(x, y);
    
}


    auto MyCanvas::pointerPressed(int32_t x, int32_t y) -> void{
this->touchME->pointerPressed(x, y);
    
}


    auto MyCanvas::pointerReleased(int32_t x, int32_t y) -> void{
this->touchME->pointerReleased(x, y);
    
}


    auto MyCanvas::nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume) -> void{
}




        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_CPP
