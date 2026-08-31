
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H

#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScoresResultsListener.h"
#include "HighScoresHelperBaseInterface.h"

class HighScoresFactoryInterface {
        

    fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener);

    fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload);

    HighScoresHelperBaseInterface createHighScoresHelper();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESFACTORYINTERFACE_H
