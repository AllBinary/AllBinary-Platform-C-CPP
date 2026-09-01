
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Stack.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DisplayableInterface.h"
#include "CanvasStrings.h"
#include "DisplayInfoSingleton.h"

class MyCanvas: public Canvas, public DisplayableInterface, public MyCommandInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    protected: const CanvasStrings canvasStrings = CanvasStrings::getInstance();

    protected: const StringUtil stringUtil = StringUtil::getInstance();

    protected: const DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();

    private: std::string name;

    private: BasicArrayList childNameList;

    private: Stack<any> commandStack;

    private: CommandListener commandListener = NullCommandListener::NULL_COMMAND_LISTENER;

    private: bool paused= false;

public: MyCanvas(std::string name, BasicArrayList childNameList){
this->logUtil.putF(this->commonStrings.CONSTRUCTOR, this, this->commonStrings.CONSTRUCTOR);
    
this->displayInfo.update(this, this->canvasStrings.CONSTRUCTOR);
    
this->name= name;
    
this->childNameList= childNameList;
    
this->commandStack= Stack();
    
}


    public: void setFullScreenMode(bool mode){
super.setFullScreenMode(mode);
    
this->displayInfo.update(this, this->canvasStrings.SET_FULL_SCREEN_MODE);
    
}


    protected: void sizeChanged(int32_t w, int32_t h){
this->displayInfo.update(this, this->canvasStrings.SIZE_CHANGED);
    
}


    public: Stack<any> getCommandStack(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandStack;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isCommand(Command command){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandStack.contains(command);;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addCommand(Command command){

                        if(!this->commandStack.contains(command))
                        
                                    {
                                    this->commandStack.push(command);
    
super.addCommand(command);
    

                                    }
                                
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeCommand(Command command){
this->commandStack.removeElement(command);
    
super.removeCommand(command);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllCommands(){

    int32_t size = this->commandStack.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
super.removeCommand(this->commandStack.pop() as Command);
    
}

}


    public: void setCommandListener(CommandListener l){
super.setCommandListener(l);
    
this->commandListener= l;
    
}


    public: CommandListener getCustomCommandListener(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->commandListener;
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isPaused(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paused;
    
}


    public: void removePauseCommand(){
this->removeCommand(MyCommandsFactory::getInstance().PAUSE_COMMAND);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause(){
this->logUtil.putF(this->commonStrings.START, this, this->canvasStrings.PAUSE);
    
this->removePauseCommand();
    
this->addCommand(MyCommandsFactory::getInstance().RESUME_COMMAND);
    
this->setPaused(true);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause(){
this->logUtil.putF(this->commonStrings.START, this, this->canvasStrings.UN_PAUSE);
    
this->removeCommand(MyCommandsFactory::getInstance().RESUME_COMMAND);
    
this->addCommand(MyCommandsFactory::getInstance().PAUSE_COMMAND);
    
this->setPaused(false);
    
}


                //@Throws(Exception.constructor)
            
    protected: void process(){
this->displayInfo.process();
    
}


    protected: void paint(Graphics graphics){
}


    public: void draw(Graphics graphics){
}


    public: bool hasChild(MyCanvas displayable){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->childNameList.contains(displayable.name);;
    
}


    public: void destroy(){
this->logUtil.putF("Destroyed MyCanvas", this, "destroy");
    
}


    protected: void setPaused(bool isPaused){
this->paused= isPaused;
    
}


    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId){
}


    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId){
}


    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId){
}


    private: const TouchJ2ME touchME = TouchJ2ME();

    protected: void pointerDragged(int32_t x, int32_t y){
this->touchME.pointerDragged(x, y);
    
}


    protected: void pointerPressed(int32_t x, int32_t y){
this->touchME.pointerPressed(x, y);
    
}


    protected: void pointerReleased(int32_t x, int32_t y){
this->touchME.pointerReleased(x, y);
    
}


    public: void nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume){
}


};

            

