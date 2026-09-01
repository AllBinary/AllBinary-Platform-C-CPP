
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H

            #include <vector>
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/commands/GameCommandsFactory.h>

      
#include <org/allbinary/game/displayable/canvas/GameCommandCanvas.h>

      
#include <org/allbinary/game/layer/AllBinaryGameLayerManager.h>

      
#include <org/allbinary/game/paint/ColorFillBasePaintable.h>

      
#include <org/allbinary/game/paint/ColorFillPaintableFactory.h>

      
#include <org/allbinary/game/score/HighScoreCommandsFactory.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessor.h>

      
#include <org/allbinary/game/score/HighScoresCanvasInputProcessorFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelperBase.h>

      
#include <org/allbinary/game/score/HighScoresPaintable.h>

      
#include <org/allbinary/game/score/HighScoresResultsListener.h>

      
#include <org/allbinary/game/score/NoHighScoresFactory.h>

      
#include <org/allbinary/game/score/NullHighScoresSingletonFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/NullPaintable.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/paint/SimpleTextPaintable.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/thread/SecondaryThreadPool.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoresCanvas: public GameCommandCanvas, public HighScoresResultsListener {

    public: static const std::string NAME = "HighScoresCanvas";

    private: Paintable paintable = NullPaintable::getInstance();

    private: const HighScoreCommandsFactory highScoreCommandsFactory = HighScoreCommandsFactory::getInstance();

    private: const SimpleTextPaintable waitPaintable = SimpleTextPaintable(this->commonStrings.PLEASE_WAIT_FOR_SERVER, BasicColorFactory::getInstance().WHITE);

    private: HighScoresPaintable highScoresPaintable;

    private: HighScoresFactoryInterface highScoresFactoryInterface;

    protected: ColorFillBasePaintable colorFillPaintable;

    private: const HighScoresHelperBase highScoresHelper = HighScoresHelperBase();

    private: GameInfo gameInfo;

    private: HighScoresCanvasInputProcessor highScoresCanvasInputProcessor;

    private: Command currentCommand = this->highScoreCommandsFactory.HIGH_SCORE_COMMANDS[0];

    private: bool hasPainted = false;

public: HighScoresCanvas(CommandListener commandListener, AllBinaryGameLayerManager allBinaryGameLayerManager, GameInfo gameInfo, HighScoresPaintable paintable, HighScoresFactoryInterface highScoresFactoryInterface, HighScoresCanvasInputProcessorFactoryInterface highScoresCanvasInputProcessorFactoryInterface);

    public: void initCommands(CommandListener cmdListener);

    public: void open();

    public: void close();

    public: void paint(Graphics graphics);

    public: void executeUpdate();

    private: HighScoresPaintable getHighScoresPaintable();

    public: void setHighScoresArray(std::vector<HighScores> highScoresArray);

                //@Throws(Exception.constructor)
            
    public: void updateCommand(Command command);

    public: GameInfo getGameInfo();

    private: void setPaintable(Paintable paintable);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCORESCANVAS_H
