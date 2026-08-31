
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

#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresBase.h"
#include "HighScores.h"
#include "HighScoresResultsListener.h"
#include "HighScoresHelperBase.h"
#include "HighScoresHelperBaseInterface.h"

class NoHighScoresFactory: public HighScoresBase {
        

    private: static const instance: NoHighScoresFactory = new NoHighScoresFactory();

    public static NoHighScoresFactory getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const NO_HIGH_SCORES: std::vector<HighScores> = [];

private constructor ();

    public fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener);

    public HighScoresHelperBaseInterface createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_H
