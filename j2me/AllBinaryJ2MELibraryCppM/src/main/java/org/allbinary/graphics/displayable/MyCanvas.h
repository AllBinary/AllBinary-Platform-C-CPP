
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

class MyCanvas: public Canvas: public DisplayableInterface, public MyCommandInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const canvasStrings: CanvasStrings = CanvasStrings.getInstance()!;

    const stringUtil: StringUtil = StringUtil.getInstance()!;

    const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const name: string;

    private: const childNameList: BasicArrayList;

    private: const commandStack: Stack<any>;

    private: commandListener: CommandListener = NullCommandListener.NULL_COMMAND_LISTENER;

    private: paused: bool= false;

public constructor (string name, BasicArrayList childNameList);

    public setFullScreenMode(bool mode);

    sizeChanged(int32_t w, int32_t h);

    public Stack<any> getCommandStack();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isCommand(Command command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addCommand(Command command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeCommand(Command command);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public removeAllCommands();

    public setCommandListener(CommandListener l);

    public CommandListener getCustomCommandListener();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isPaused();

    public removePauseCommand();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public pause();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public unPause();

                //@Throws(Exception.constructor)
            
    process();

    paint(Graphics graphics);

    public draw(Graphics graphics);

    public bool hasChild(MyCanvas displayable);

    public destroy();

    setPaused(bool isPaused);

    public keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: const touchME: TouchJ2ME = new TouchJ2ME();

    pointerDragged(int32_t x, int32_t y);

    pointerPressed(int32_t x, int32_t y);

    pointerReleased(int32_t x, int32_t y);

    public nextSong(Sound nextSongSound, int32_t leftVolume, int32_t rightVolume);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H
