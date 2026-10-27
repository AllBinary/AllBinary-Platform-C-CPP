
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoresCanvasLevelChangeInputProcessor.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/game/score/HighScoresCanvasInputProcessor.h"


HighScoresCanvasLevelChangeInputProcessor::HighScoresCanvasLevelChangeInputProcessor(HighScoresCanvas* highScoresCanvas) : HighScoresCanvasInputProcessor(highScoresCanvas), displayInfoSingleton(DisplayInfoSingleton::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)), anchor(Anchor::TOP_LEFT){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    auto HighScoresCanvasLevelChangeInputProcessor::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->fontHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto HighScoresCanvasLevelChangeInputProcessor::open() -> void{
GameKeyEventHandler::getInstance()->addListener(this);
    
}


    auto HighScoresCanvasLevelChangeInputProcessor::close() -> void{
GameKeyEventHandler::getInstance()->removeListener(this);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    auto HighScoresCanvasLevelChangeInputProcessor::update() -> void{

    BasicArrayList* list = this->getGameKeyEventList();;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Object* anyType = list->objectArray[index];;
    

    int32_t key = GameKeyEventUtil::getKey(anyType);;
    

                        if(key == Canvas::RIGHT)
                        
                                    {
                                    this->getHighScoresCanvas()->getGameInfo()->nextGameLevel();
    

                                    }
                                
                             else 
                        if(key == Canvas::LEFT)
                        
                                    {
                                    this->getHighScoresCanvas()->getGameInfo()->previousGameLevel();
    

                                    }
                                
this->getHighScoresCanvas()->executeUpdate();
    
}

list->clear();
    
}


    auto HighScoresCanvasLevelChangeInputProcessor::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t width = this->displayInfoSingleton->getLastWidth();;
    

    int32_t topScoresWidth = (graphics->getFont()->stringWidth(this->INSTRUCTIONS)>>1);;
    
graphics->drawString(this->INSTRUCTIONS, (width>>1) -topScoresWidth, this->fontHeight *2, this->anchor);
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_CPP
