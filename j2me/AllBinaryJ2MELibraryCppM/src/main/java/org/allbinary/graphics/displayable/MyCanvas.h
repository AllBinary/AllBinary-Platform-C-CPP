
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H

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

class MyCanvas: public Canvas, public DisplayableInterface, public MyCommandInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    protected: CanvasStrings* canvasStrings = CanvasStrings::getInstance();

    protected: StringUtil* stringUtil = StringUtil::getInstance();

    protected: DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();

    private: std::string name;

    private: BasicArrayList* childNameList;

    private: ABStack<Object*>* commandStack;

    private: CommandListener* commandListener = NullCommandListener::NULL_COMMAND_LISTENER;

    private: bool paused= false;

public: MyCanvas(std::string name, BasicArrayList* childNameList);

    public: void setFullScreenMode(bool mode);

    protected: void sizeChanged(int32_t w, int32_t h);

    public: ABStack<Object*>* getCommandStack();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isCommand(Command* command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addCommand(Command* command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeCommand(Command* command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void removeAllCommands();

    public: void setCommandListener(CommandListener* l);

    public: CommandListener* getCustomCommandListener();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isPaused();

    public: void removePauseCommand();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void unPause();

                //@Throws(Exception.constructor)
            
    protected: void process();

    protected: void paint(Graphics* graphics);

    public: void draw(Graphics* graphics);

    public: bool hasChild(MyCanvas* displayable);

    public: void destroy();

    protected: void setPaused(bool isPaused);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: TouchJ2ME* touchME = new TouchJ2ME();

    protected: void pointerDragged(int32_t x, int32_t y);

    protected: void pointerPressed(int32_t x, int32_t y);

    protected: void pointerReleased(int32_t x, int32_t y);

    public: void nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
