
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/PlayerGameInput.h>

      
#include <org/allbinary/game/input/event/GameKeyEvent.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoresCanvasInputProcessor: public PlayerGameInput {

    private: HighScoresCanvas* highScoresCanvas;

public: HighScoresCanvasInputProcessor(HighScoresCanvas* highScoresCanvas) : PlayerGameInput(new BasicArrayListD(), new BasicArrayListD(),  -1){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->highScoresCanvas= highScoresCanvas;
    
}


    public: void open(){
}


    public: void close(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent* gameKeyEvent){
super.onPressGameKeyEvent(gameKeyEvent);
    
this->update();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent){
super.onDownGameKeyEvent(gameKeyEvent);
    
this->update();
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent){
super.onUpGameKeyEvent(gameKeyEvent);
    
this->update();
    
}


    public: void paint(Graphics* graphics){
}


    public: HighScoresCanvas* getHighScoresCanvas(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->highScoresCanvas;
    
}


};

            

