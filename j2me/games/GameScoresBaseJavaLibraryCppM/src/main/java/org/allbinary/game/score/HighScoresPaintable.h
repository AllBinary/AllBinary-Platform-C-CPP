
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

#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullHighScoresSingletonFactory.h"
#include "HighScores.h"
#include "HighScore.h"

class HighScoresPaintable: public Paintable: public ColorChangeListener, public UpdateMyFontInterface {
        

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    private: highScores: HighScores = NullHighScoresSingletonFactory.getInstance()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: charHeight: int32_t= 0;

public constructor ();

    public updateMeasurement(Graphics graphics);

    public onEvent(AllBinaryEventObject eventObject);

    public paint(Graphics graphics);

    public setBasicColorP(BasicColor basicColor);

    public BasicColor getBasicColorP();

    public setHighScores(HighScores highScores);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_H
