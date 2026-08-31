
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/RuntimeException.h"
        
#include <java/util/Stack.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Canvas.h"
#include "Command.h"
#include "CommandListener.h"
#include "Graphics.h"

class NullCanvas: public Canvas {
        

    public static const NULL_CANVAS: NullCanvas = new NullCanvas();

public constructor (){

            super();
        }


    public setFullScreenMode(bool mode){
}


    sizeChanged(int32_t w, int32_t h){
}


    public Stack<any> getCommandStack(){



                            throw new RuntimeException();
                    
}


    public bool isCommand(Command command){



                            throw new RuntimeException();
                    
}


    public addCommand(Command command){
}


    public removeCommand(Command command){
}


    public removeAllCommands(){
}


    public setCommandListener(CommandListener l){
}


    public CommandListener getCustomCommandListener(){



                            throw new RuntimeException();
                    
}


    public bool isPaused(){



                            throw new RuntimeException();
                    
}


    public removePauseCommand(){
}


    public pause(){
}


    public unPause(){
}


                //@Throws(Exception.constructor)
            
    process(){
}


    paint(Graphics graphics){
}


    public destroy(){
}


    setPaused(bool isPaused){



                            throw new RuntimeException();
                    
}


    pointerDragged(int32_t x, int32_t y){
}


    pointerPressed(int32_t x, int32_t y){
}


    pointerReleased(int32_t x, int32_t y){
}


};

            

