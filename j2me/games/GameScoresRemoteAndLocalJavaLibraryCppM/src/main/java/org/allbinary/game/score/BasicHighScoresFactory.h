
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class ARunnable;
class BasicHighScoresGameInfoFactory;
class GameInfo;
class GameType;
class GameTypeFactory;
class RemoteHighScores;
class LogUtil;
class BooleanFactory;
class SoftwareInformation;
class AbeClientInformationInterface;
class SecondaryThreadPool;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresBase.h"
class HighScores;
class HighScoresResultsListener;
class RecordStoreHighScores;
class ScoreComparator;
class LastFetchHighScoresFactory;
class HighScoresHelper2;
class HighScoresHelperBaseInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicHighScoresFactory: public HighScoresBase {

    public: static bool loaded(int32_t index2);

    /*protected*/ public: LogUtil* logUtil;

    private: AbeClientInformationInterface* abeClientInformation;

    private: SoftwareInformation* softwareInformation;

public: BasicHighScoresFactory(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation);

    private: std::vector<HighScores*> highScoresArray;

    private: const std::string TOP = "Top";

    private: const std::string SCORES = "Scores";

    private: const std::string PERSONAL_HIGH_SCORES = "Personal Top Scores";

    private: const std::string WORLD_TOP_SCORES = "World Top Scores";

    private: const std::string FETCH = "fetchHighScores";

    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);

    public: void fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload);

    public: HighScoresHelperBaseInterface* createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<org/allbinary/game/BasicHighScoresGameInfoFactory.h>)
#include <org/allbinary/game/BasicHighScoresGameInfoFactory.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/GameType.h>)
#include <org/allbinary/game/GameType.h>
#endif
#if __has_include(<org/allbinary/game/GameTypeFactory.h>)
#include <org/allbinary/game/GameTypeFactory.h>
#endif
#if __has_include(<org/allbinary/game/score/remote/RemoteHighScores.h>)
#include <org/allbinary/game/score/remote/RemoteHighScores.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/SoftwareInformation.h>)
#include <org/allbinary/logic/system/SoftwareInformation.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/thread/SecondaryThreadPool.h>)
#include <org/allbinary/thread/SecondaryThreadPool.h>
#endif
#if __has_include("org/allbinary/game/score/HighScoresBase.h")
#include "org/allbinary/game/score/HighScoresBase.h"
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresResultsListener.h")
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#endif
#if __has_include("org/allbinary/game/score/RecordStoreHighScores.h")
#include "org/allbinary/game/score/RecordStoreHighScores.h"
#endif
#if __has_include("org/allbinary/game/score/ScoreComparator.h")
#include "org/allbinary/game/score/ScoreComparator.h"
#endif
#if __has_include("org/allbinary/game/score/LastFetchHighScoresFactory.h")
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelper2.h")
#include "org/allbinary/game/score/HighScoresHelper2.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#endif

        #endif
    
