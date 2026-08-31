
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Command.h>

      
#include <javax/microedition/lcdui/CommandListener.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScoreNamePersistanceSingleton.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>

      
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>

      
#include <org/allbinary/game/score/HighScoresResultsListener.h>

      
#include <org/allbinary/graphics/displayable/MyCanvas.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreUtil
            : public Object
        : public HighScoresResultsListener {
        

    public static const SUBMIT_TEXTBOX_COMMAND: Command = new Command("Submit", StringUtil.getInstance()!.EMPTY_STRING, Command.SCREEN, 1);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const highScoresFactoryInterface: HighScoresFactoryInterface;

    private: highScoresArray: std::vector<HighScores>;

    private: const highScore: HighScore;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const gameInfo: GameInfo;

    private: const highScoresHelper: HighScoresHelperBaseInterface;

    private: firstTime: bool = true;

public constructor (HighScoresFactoryInterface highScoresFactoryInterface, HighScoresHelperBaseInterface highScoresHelper, AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, CommandListener cmdListener, string name, HighScore highScore);

    public setHighScoresArray(std::vector<HighScores> highScoresArray);

    public update(string name);

    public saveHighScore();

    public submit(MyCanvas myCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
