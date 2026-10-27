
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_CPP
        #define ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/BasicHighScoresFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/RecordStoreHighScores.h"
#include "org/allbinary/game/score/ScoreComparator.h"
#include "org/allbinary/game/score/HighScoresHelper2.h"
#include "org/allbinary/game/score/HighScoresHelperBaseInterface.h"


BasicHighScoresFactory::BasicHighScoresFactory(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) : logUtil(LogUtil::getInstance()), highScoresArray(std::vector<HighScores*>(1)){
this->abeClientInformation= abeClientInformation;
    
}


    auto BasicHighScoresFactory::fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) -> void{
this->logUtil->putF("Getting Local HighScores", this, this->FETCH);
    
this->fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    auto BasicHighScoresFactory::fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) -> void{

        try {
            this->highScoresArray[0]= RecordStoreHighScores::getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, new ScoreComparator(true));
    
highScoresResultsListener->setHighScoresArray(this->highScoresArray);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->FETCH, &e);
    
}

}


    auto BasicHighScoresFactory::createHighScoresHelper() -> HighScoresHelperBaseInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScoresHelper2();
    
}


    auto BasicHighScoresFactory::loaded(int32_t index2) -> bool{

                        if(index2 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_BASICHIGHSCORESFACTORY_CPP
