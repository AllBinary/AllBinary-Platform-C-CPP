
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresBase.h"
#include "HighScores.h"
#include "HighScoresResultsListener.h"
#include "RecordStoreHighScores.h"
#include "ScoreComparator.h"
#include "HighScoresHelper2.h"
#include "HighScoresHelperBaseInterface.h"

class BasicHighScoresFactory: public HighScoresBase {

    public: static bool loaded(int32_t index2);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface abeClientInformation;

public: BasicHighScoresFactory(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation);

    private: const std::vector<HighScores> highScoresArray = new Array(1);

    private: const std::string TOP = "Top";

    private: const std::string SCORES = "Scores";

    private: const std::string PERSONAL_HIGH_SCORES = "Personal Top Scores";

    private: const std::string FETCH = "fetchHighScores";

    public: void fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener);

    public: void fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload);

    public: HighScoresHelperBaseInterface createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
