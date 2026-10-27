
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H
        #define JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <java/util/Stack.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "javax/microedition/lcdui/Canvas.h"
class Command;
class CommandListener;
class Graphics;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullCanvas: public Canvas {

    private: static NullCanvas* NULL_CANVAS_owner();
    public: static NullCanvas* NULL_CANVAS;

public: NullCanvas();

    public: void setFullScreenMode(bool mode);

    /*protected*/ public: void sizeChanged(int32_t w, int32_t h);

    public: Stack<Object*>* getCommandStack();

    public: bool isCommand(Command* command);

    public: void addCommand(Command* command);

    public: void removeCommand(Command* command);

    public: void removeAllCommands();

    public: void setCommandListener(CommandListener* l);

    public: CommandListener* getCustomCommandListener();

    public: bool isPaused();

    public: void removePauseCommand();

    public: void pause();

    public: void unPause();

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void process();

    /*protected*/ public: void paint(Graphics* graphics);

    public: void destroy();

    /*protected*/ public: void setPaused(bool isPaused);

    /*protected*/ public: void pointerDragged(int32_t x, int32_t y);

    /*protected*/ public: void pointerPressed(int32_t x, int32_t y);

    /*protected*/ public: void pointerReleased(int32_t x, int32_t y);

};

            


        #endif //JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H_COMPLETE)
        #define JAVAX_MICROEDITION_LCDUI_NULLCANVAS_H_COMPLETE
        #if __has_include(<java/util/Stack.h>)
#include <java/util/Stack.h>
#endif
#if __has_include("javax/microedition/lcdui/Canvas.h")
#include "javax/microedition/lcdui/Canvas.h"
#endif
#if __has_include("javax/microedition/lcdui/Command.h")
#include "javax/microedition/lcdui/Command.h"
#endif
#if __has_include("javax/microedition/lcdui/CommandListener.h")
#include "javax/microedition/lcdui/CommandListener.h"
#endif
#if __has_include("javax/microedition/lcdui/Graphics.h")
#include "javax/microedition/lcdui/Graphics.h"
#endif

        #endif
    
