
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
        



#include <javax/microedition/lcdui/Canvas.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/input/event/GameKeyEventHandler.h>

      
#include <org/allbinary/game/input/event/GameKeyEventUtil.h>

      
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresCanvasInputProcessor.h"

class HighScoresCanvasLevelChangeInputProcessor: public HighScoresCanvasInputProcessor, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const std::string INSTRUCTIONS = "(Right = Next Track, Left = Previous Track)";

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t fontHeight = 0;

public: HighScoresCanvasLevelChangeInputProcessor(HighScoresCanvas highScoresCanvas){
            super(highScoresCanvas);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeight= font.getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void open(){
GameKeyEventHandler::getInstance().addListener(this);
    
}


    public: void close(){
GameKeyEventHandler::getInstance().removeListener(this);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update(){

    BasicArrayList list = this->getGameKeyEventList();;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list.objectArray[index];;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == Canvas::RIGHT)
                        
                                    {
                                    this->getHighScoresCanvas().getGameInfo().nextGameLevel();
    

                                    }
                                
                             else 
                        if(key == Canvas::LEFT)
                        
                                    {
                                    this->getHighScoresCanvas().getGameInfo().previousGameLevel();
    

                                    }
                                
this->getHighScoresCanvas().executeUpdate();
    
}

list.clear();
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    

    int32_t width = this->displayInfoSingleton.getLastWidth();;
    

    int32_t topScoresWidth = (graphics.getFont().stringWidth(this->INSTRUCTIONS)>>1);;
    
graphics.drawString(this->INSTRUCTIONS, (width>>1) -topScoresWidth, this->fontHeight *2, this->anchor);
    
}


};

            

