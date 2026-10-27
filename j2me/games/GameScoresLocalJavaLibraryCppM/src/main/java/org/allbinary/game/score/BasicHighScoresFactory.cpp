
        /* Generated Code Do Not Modify */
        



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

class BasicHighScoresFactory: public HighScoresBase {

    public: static bool loaded(int32_t index2){

                        if(index2 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation;

public: BasicHighScoresFactory(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation){
this->abeClientInformation= abeClientInformation;
    
}


    private: const std::vector<HighScores*> highScoresArray = std::vector<HighScores*>(1);

    private: const std::string TOP = "Top";

    private: const std::string SCORES = "Scores";

    private: const std::string PERSONAL_HIGH_SCORES = "Personal Top Scores";

    private: const std::string FETCH = "fetchHighScores";

    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener){
this->logUtil->putF("Getting Local HighScores", this, this->FETCH);
    
this->fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    public: void fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload){

        try {
            this->highScoresArray[0]= RecordStoreHighScores::getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, new ScoreComparator(true));
    
highScoresResultsListener->setHighScoresArray(this->highScoresArray);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings.EXCEPTION, this, this->FETCH, &e);
    
}

}


    public: HighScoresHelperBaseInterface* createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScoresHelper2();
    
}


};

            

