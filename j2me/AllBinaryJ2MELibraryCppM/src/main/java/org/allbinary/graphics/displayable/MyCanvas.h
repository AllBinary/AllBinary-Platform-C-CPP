
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Canvas.h>
class Command;
class CommandListener;
class Graphics;
class NullCommandListener;
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>
class MyCommandsFactory;
class TouchJ2ME;
class LogUtil;
class StringUtil;
class Sound;
class CommonStrings;
class BasicArrayList;
class StdUtil;
template<typename T1> class ABStack;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/displayable/DisplayableInterface.h"
class CanvasStrings;
class DisplayInfoSingleton;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MyCanvas: public Canvas, public virtual DisplayableInterface, public virtual MyCommandInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: CanvasStrings* canvasStrings;

    /*protected*/ public: StringUtil* stringUtil;

    /*protected*/ public: DisplayInfoSingleton* displayInfo;

    private: std::string name;

    private: BasicArrayList* childNameList;

    private: ABStack<Object*>* commandStack;

    private: CommandListener* commandListener;

    private: bool paused= false;

public: MyCanvas(std::string name, BasicArrayList* childNameList);

    public: int32_t getWidth();

    public: int32_t getHeight();

    public: void setFullScreenMode(bool mode);

    /*protected*/ public: void sizeChanged(int32_t w, int32_t h);

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
            
    /*protected*/ public: void process();

    /*protected*/ public: void paint(Graphics* graphics);

    public: void draw(Graphics* graphics);

    public: bool hasChild(MyCanvas* displayable);

    public: void destroy();

    /*protected*/ public: void setPaused(bool isPaused);

    public: void keyPressedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyRepeatedByDevice(int32_t keyCode, int32_t deviceId);

    public: void keyReleasedByDevice(int32_t keyCode, int32_t deviceId);

    private: TouchJ2ME* touchME;

    /*protected*/ public: void pointerDragged(int32_t x, int32_t y);

    /*protected*/ public: void pointerPressed(int32_t x, int32_t y);

    /*protected*/ public: void pointerReleased(int32_t x, int32_t y);

    public: void nextSong(Sound* nextSongSound, int32_t leftVolume, int32_t rightVolume);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_DISPLAYABLE_MYCANVAS_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Canvas.h>)
#include <javax/microedition/lcdui/Canvas.h>
#endif
#if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullCommandListener.h>)
#include <javax/microedition/lcdui/NullCommandListener.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandInterface.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/command/MyCommandsFactory.h>)
#include <org/allbinary/graphics/displayable/command/MyCommandsFactory.h>
#endif
#if __has_include(<org/allbinary/input/TouchJ2ME.h>)
#include <org/allbinary/input/TouchJ2ME.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/media/audio/Sound.h>)
#include <org/allbinary/media/audio/Sound.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABStack.h>)
#include <org/allbinary/util/ABStack.h>
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayableInterface.h")
#include "org/allbinary/graphics/displayable/DisplayableInterface.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/CanvasStrings.h")
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif

        #endif
    
