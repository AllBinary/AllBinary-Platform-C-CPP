
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H
        #define ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class GameInfo;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresBase.h"
class HighScores;
class HighScoresResultsListener;
class HighScoresHelperBase;
class HighScoresHelperBaseInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NoHighScoresFactory: public HighScoresBase {

    private: static NoHighScoresFactory* instance_owner();
    private: static NoHighScoresFactory* instance;

    public: static NoHighScoresFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: std::vector<HighScores*> NO_HIGH_SCORES;

private: NoHighScoresFactory();

    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener);

    public: HighScoresHelperBaseInterface* createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
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
#if __has_include("org/allbinary/game/score/HighScoresHelperBase.h")
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#endif
#if __has_include("org/allbinary/game/score/HighScoresHelperBaseInterface.h")
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"
#endif

        #endif
    
