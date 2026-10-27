
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorChangeEvent.h>

      
#include <org/allbinary/graphics/color/ColorChangeListener.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScore.h"

class HighScoresPaintable: public Paintable, public ColorChangeListener, public UpdateMyFontInterface {

    private: DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor* myFontProcessor = new UpdateMyFontProcessor(this);

    private: BasicColor* basicColor = BasicColorFactory::getInstance()->WHITE;

    private: HighScores* highScores = NullHighScoresSingletonFactory::getInstance();

    private: int32_t anchor = Anchor::TOP_LEFT;

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
