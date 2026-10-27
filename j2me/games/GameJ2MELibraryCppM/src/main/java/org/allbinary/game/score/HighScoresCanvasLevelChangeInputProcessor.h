
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H

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

class HighScoresCanvasLevelChangeInputProcessor: public HighScoresCanvasInputProcessor, public UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: const std::string INSTRUCTIONS = "(Right = Next Track, Left = Previous Track)";

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t fontHeight = 0;

public: HighScoresCanvasLevelChangeInputProcessor(HighScoresCanvas* highScoresCanvas);

    public: void updateMeasurement(Graphics* graphics);

    public: void open();

    public: void close();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void update();

    public: void paint(Graphics* graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASLEVELCHANGEINPUTPROCESSOR_H
