
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class Font;
class Graphics;
class Anchor;
class BasicColor;
class BasicColorFactory;
class ColorChangeEvent;
#include <org/allbinary/graphics/color/ColorChangeListener.h>
class DisplayInfoSingleton;
class MyFontProcessor;
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
class UpdateMyFontProcessor;
#include <org/allbinary/graphics/paint/Paintable.h>
class AllBinaryEventObject;
class BasicArrayList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullHighScoresSingletonFactory;
class HighScores;
class HighScore;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoresPaintable: public Paintable, public virtual ColorChangeListener, public virtual UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton;

    private: MyFontProcessor* myFontProcessor;

    private: BasicColor* basicColor;

    private: HighScores* highScores;

    private: int32_t anchor;

    private: int32_t charHeight= 0;

public: HighScoresPaintable();

    public: void updateMeasurement(Graphics* graphics);

    public: void onEvent(AllBinaryEventObject* eventObject);

    public: void paint(Graphics* graphics);

    public: void setBasicColorP(BasicColor* basicColor);

    public: BasicColor* getBasicColorP();

    public: void setHighScores(HighScores* highScores);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Font.h>)
#include <javax/microedition/lcdui/Font.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<org/allbinary/graphics/Anchor.h>)
#include <org/allbinary/graphics/Anchor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColor.h>)
#include <org/allbinary/graphics/color/BasicColor.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorChangeEvent.h>)
#include <org/allbinary/graphics/color/ColorChangeEvent.h>
#endif
#if __has_include(<org/allbinary/graphics/color/ColorChangeListener.h>)
#include <org/allbinary/graphics/color/ColorChangeListener.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/DisplayInfoSingleton.h>)
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>
#endif
#if __has_include(<org/allbinary/graphics/font/MyFontProcessor.h>)
#include <org/allbinary/graphics/font/MyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontInterface.h>)
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>
#endif
#if __has_include(<org/allbinary/graphics/font/UpdateMyFontProcessor.h>)
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/paint/Paintable.h>)
#include <org/allbinary/graphics/paint/Paintable.h>
#endif
#if __has_include(<org/allbinary/logic/util/event/AllBinaryEventObject.h>)
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include("org/allbinary/game/score/NullHighScoresSingletonFactory.h")
#include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif
#if __has_include("org/allbinary/game/score/HighScore.h")
#include "org/allbinary/game/score/HighScore.h"
#endif

        #endif
    
