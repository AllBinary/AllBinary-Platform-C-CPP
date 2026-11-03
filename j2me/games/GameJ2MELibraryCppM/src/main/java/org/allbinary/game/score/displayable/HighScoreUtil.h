
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Command;
class CommandListener;
class GameInfo;
class HighScore;
class HighScoreNamePersistanceSingleton;
class HighScores;
class HighScoresFactoryInterface;
class HighScoresHelperBaseInterface;
#include <org/allbinary/game/score/HighScoresResultsListener.h>
class MyCanvas;
class LogUtil;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoreUtil
            : public virtual Object
        , public virtual HighScoresResultsListener {

    private: static Command* SUBMIT_TEXTBOX_COMMAND_owner();
    public: static Command* SUBMIT_TEXTBOX_COMMAND;

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: HighScoresFactoryInterface* highScoresFactoryInterface;

    private: std::vector<HighScores*> highScoresArray;

    private: HighScore* highScore;

    private: AbeClientInformationInterface* abeClientInformation;

    private: GameInfo* gameInfo;

    private: HighScoresHelperBaseInterface* highScoresHelper;

    private: bool firstTime = true;

public: HighScoreUtil(HighScoresFactoryInterface* highScoresFactoryInterface, HighScoresHelperBaseInterface* highScoresHelper, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, CommandListener* cmdListener, std::string name, HighScore* highScore);

    public: void setHighScoresArray(std::vector<HighScores*> highScoresArray);

    public: void update(std::string name);

    public: void saveHighScore();

    public: void submit(MyCanvas* myCanvas);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_DISPLAYABLE_HIGHSCOREUTIL_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Command.h>)
#include <javax/microedition/lcdui/Command.h>
#endif
#if __has_include(<javax/microedition/lcdui/CommandListener.h>)
#include <javax/microedition/lcdui/CommandListener.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScore.h>)
#include <org/allbinary/game/score/HighScore.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoreNamePersistanceSingleton.h>)
#include <org/allbinary/game/score/HighScoreNamePersistanceSingleton.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScores.h>)
#include <org/allbinary/game/score/HighScores.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresFactoryInterface.h>)
#include <org/allbinary/game/score/HighScoresFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresHelperBaseInterface.h>)
#include <org/allbinary/game/score/HighScoresHelperBaseInterface.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScoresResultsListener.h>)
#include <org/allbinary/game/score/HighScoresResultsListener.h>
#endif
#if __has_include(<org/allbinary/graphics/displayable/MyCanvas.h>)
#include <org/allbinary/graphics/displayable/MyCanvas.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif

        #endif
    
