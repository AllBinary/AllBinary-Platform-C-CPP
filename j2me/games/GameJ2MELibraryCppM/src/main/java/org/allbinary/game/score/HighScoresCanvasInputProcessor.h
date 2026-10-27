
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Graphics;
#include <org/allbinary/game/input/PlayerGameInput.h>
class GameKeyEvent;
class HighScoresCanvas;

class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresCanvasInputProcessor: public PlayerGameInput {

    private: HighScoresCanvas* highScoresCanvas;

public: HighScoresCanvasInputProcessor(HighScoresCanvas* highScoresCanvas);

    public: void open();

    public: void close();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onPressGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onDownGameKeyEvent(GameKeyEvent* gameKeyEvent);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void onUpGameKeyEvent(GameKeyEvent* gameKeyEvent);

    public: void paint(Graphics* graphics);

    public: HighScoresCanvas* getHighScoresCanvas();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESCANVASINPUTPROCESSOR_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/game/input/PlayerGameInput.h>)
#include <org/allbinary/game/input/PlayerGameInput.h>
#endif
#if __has_include(<org/allbinary/game/input/event/GameKeyEvent.h>)
#include <org/allbinary/game/input/event/GameKeyEvent.h>
#endif
#if __has_include(<org/allbinary/game/score/displayable/HighScoresCanvas.h>)
#include <org/allbinary/game/score/displayable/HighScoresCanvas.h>
#endif

#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
