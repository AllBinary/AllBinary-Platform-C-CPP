
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

    public: static const NullCanvas NULL_CANVAS = NullCanvas();

public: NullCanvas(){
}


    public: void setFullScreenMode(bool mode){
}


    protected: void sizeChanged(int32_t w, int32_t h){
}


    public: Stack<any> getCommandStack(){



                            throw RuntimeException();
                    
}


    public: bool isCommand(Command command){



                            throw RuntimeException();
                    
}


    public: void addCommand(Command command){
}


    public: void removeCommand(Command command){
}


    public: void removeAllCommands(){
}


    public: void setCommandListener(CommandListener l){
}


    public: CommandListener getCustomCommandListener(){



                            throw RuntimeException();
                    
}


    public: bool isPaused(){



                            throw RuntimeException();
                    
}


    public: void removePauseCommand(){
}


    public: void pause(){
}


    public: void unPause(){
}


                //@Throws(Exception.constructor)
            
    protected: void process(){
}


    protected: void paint(Graphics graphics){
}


    public: void destroy(){
}


    protected: void setPaused(bool isPaused){



                            throw RuntimeException();
                    
}


    protected: void pointerDragged(int32_t x, int32_t y){
}


    protected: void pointerPressed(int32_t x, int32_t y){
}


    protected: void pointerReleased(int32_t x, int32_t y){
}


};

            

