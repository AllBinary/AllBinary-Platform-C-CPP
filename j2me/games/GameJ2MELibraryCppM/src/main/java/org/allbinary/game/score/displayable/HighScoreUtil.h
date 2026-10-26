
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

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
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

    public: static const Command SUBMIT_TEXTBOX_COMMAND = Command("Submit", StringUtil::getInstance().EMPTY_STRING, Command::SCREEN, 1);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HighScoresFactoryInterface highScoresFactoryInterface;

    private: std::vector<HighScores> highScoresArray;

    private: HighScore highScore;

    private: AbeClientInformationInterface abeClientInformation;

    private: GameInfo gameInfo;

    private: HighScoresHelperBaseInterface highScoresHelper;

    private: bool firstTime = true;

public: HighScoreUtil(HighScoresFactoryInterface highScoresFactoryInterface, HighScoresHelperBaseInterface highScoresHelper, AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, CommandListener cmdListener, std::string name, HighScore highScore);

    public: void setHighScoresArray(std::vector<HighScores> highScoresArray);

    public: void update(std::string name);

    public: void saveHighScore();

    public: void submit(MyCanvas myCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H
