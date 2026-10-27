
        /* Generated Code Do Not Modify */
        



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

class NullCanvas: public Canvas {

    public: static NullCanvas* NULL_CANVAS() { static std::unique_ptr<NullCanvas> value(new NullCanvas()); return value.get(); }

public: NullCanvas(){
}


    public: void setFullScreenMode(bool mode){
}


    protected: void sizeChanged(int32_t w, int32_t h){
}


    public: Stack<Object*>* getCommandStack(){



                            throw new RuntimeException();
                    
}


    public: bool isCommand(Command* command){



                            throw new RuntimeException();
                    
}


    public: void addCommand(Command* command){
}


    public: void removeCommand(Command* command){
}


    public: void removeAllCommands(){
}


    public: void setCommandListener(CommandListener* l){
}


    public: CommandListener* getCustomCommandListener(){



                            throw new RuntimeException();
                    
}


    public: bool isPaused(){



                            throw new RuntimeException();
                    
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


    protected: void paint(Graphics* graphics){
}


    public: void destroy(){
}


    protected: void setPaused(bool isPaused){



                            throw new RuntimeException();
                    
}


    protected: void pointerDragged(int32_t x, int32_t y){
}


    protected: void pointerPressed(int32_t x, int32_t y){
}


    protected: void pointerReleased(int32_t x, int32_t y){
}


};

            

