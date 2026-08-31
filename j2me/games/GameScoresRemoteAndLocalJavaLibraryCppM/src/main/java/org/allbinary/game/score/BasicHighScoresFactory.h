
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H

            #include "../../../../java/lang/Exception.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <org/allbinary/game/BasicHighScoresGameInfoFactory.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/GameType.h>

      
#include <org/allbinary/game/GameTypeFactory.h>

      
#include <org/allbinary/game/score/remote/RemoteHighScores.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/thread/SecondaryThreadPool.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresBase.h"
#include "HighScores.h"
#include "HighScoresResultsListener.h"
#include "RecordStoreHighScores.h"
#include "ScoreComparator.h"
#include "LastFetchHighScoresFactory.h"
#include "HighScoresHelper2.h"
#include "HighScoresHelperBaseInterface.h"

class BasicHighScoresFactory: public HighScoresBase {
        

    public static bool loaded(int32_t index2);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const softwareInformation: SoftwareInformation;

public constructor (AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation);

    private: const highScoresArray: std::vector<HighScores> = new Array(2);

    private: const TOP: string = "Top";

    private: const SCORES: string = "Scores";

    private: const PERSONAL_HIGH_SCORES: string = "Personal Top Scores";

    private: const WORLD_TOP_SCORES: string = "World Top Scores";

    private: const FETCH: string = "fetchHighScores";

    public fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener);

    public fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload);

    public HighScoresHelperBaseInterface createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H
