
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/NoHighScoresFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/HighScoresHelperBase.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"

auto NoHighScoresFactory::instance_owner() -> NoHighScoresFactory* { static std::unique_ptr<NoHighScoresFactory> value(new NoHighScoresFactory()); return value.get(); }
NoHighScoresFactory* NoHighScoresFactory::instance = NoHighScoresFactory::instance_owner();

    auto NoHighScoresFactory::getInstance() -> NoHighScoresFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NoHighScoresFactory::instance;
    
}


NoHighScoresFactory::NoHighScoresFactory() : logUtil(LogUtil::getInstance()), NO_HIGH_SCORES({}){
}


    auto NoHighScoresFactory::fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) -> void{
this->logUtil->putF("Getting No HighScores", this, "fetchHighScores");
    
highScoresResultsListener->setHighScoresArray(this->NO_HIGH_SCORES);
    
}


    auto NoHighScoresFactory::createHighScoresHelper() -> HighScoresHelperBaseInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new HighScoresHelperBase();
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_NOHIGHSCORESFACTORY_CPP
