
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H

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
        

    public static bool loaded(int32_t index2);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

public constructor (AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation);

    private: const highScoresArray: std::vector<HighScores> = new Array(1);

    private: const TOP: string = "Top";

    private: const SCORES: string = "Scores";

    private: const PERSONAL_HIGH_SCORES: string = "Personal Top Scores";

    private: const FETCH: string = "fetchHighScores";

    public fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener);

    public fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload);

    public HighScoresHelperBaseInterface createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
