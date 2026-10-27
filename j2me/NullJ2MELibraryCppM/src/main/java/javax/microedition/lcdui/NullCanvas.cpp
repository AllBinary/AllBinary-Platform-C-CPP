
        /* Generated Code Do Not Modify */
        



        #ifndef JAVAX_MICROEDITION_LCDUI_NULLCANVAS_CPP
        #define JAVAX_MICROEDITION_LCDUI_NULLCANVAS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "javax/microedition/lcdui/NullCanvas.h"
        

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
#include "javax/microedition/lcdui/Command.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"

auto NullCanvas::NULL_CANVAS_owner() -> NullCanvas* { static std::unique_ptr<NullCanvas> value(new NullCanvas()); return value.get(); }
NullCanvas* NullCanvas::NULL_CANVAS = NullCanvas::NULL_CANVAS_owner();

NullCanvas::NullCanvas(){
}


    auto NullCanvas::setFullScreenMode(bool mode) -> void{
}


    auto NullCanvas::sizeChanged(int32_t w, int32_t h) -> void{
}


    auto NullCanvas::getCommandStack() -> Stack<Object*>*{



                            throw RuntimeException();
                    
}


    auto NullCanvas::isCommand(Command* command) -> bool{



                            throw RuntimeException();
                    
}


    auto NullCanvas::addCommand(Command* command) -> void{
}


    auto NullCanvas::removeCommand(Command* command) -> void{
}


    auto NullCanvas::removeAllCommands() -> void{
}


    auto NullCanvas::setCommandListener(CommandListener* l) -> void{
}


    auto NullCanvas::getCustomCommandListener() -> CommandListener*{



                            throw RuntimeException();
                    
}


    auto NullCanvas::isPaused() -> bool{



                            throw RuntimeException();
                    
}


    auto NullCanvas::removePauseCommand() -> void{
}


    auto NullCanvas::pause() -> void{
}


    auto NullCanvas::unPause() -> void{
}


                //@Throws(Exception.constructor)
            
    auto NullCanvas::process() -> void{
}


    auto NullCanvas::paint(Graphics* graphics) -> void{
}


    auto NullCanvas::destroy() -> void{
}


    auto NullCanvas::setPaused(bool isPaused) -> void{



                            throw RuntimeException();
                    
}


    auto NullCanvas::pointerDragged(int32_t x, int32_t y) -> void{
}


    auto NullCanvas::pointerPressed(int32_t x, int32_t y) -> void{
}


    auto NullCanvas::pointerReleased(int32_t x, int32_t y) -> void{
}




        #endif //JAVAX_MICROEDITION_LCDUI_NULLCANVAS_CPP
