
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Exception.h"
        
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

    public: static bool loaded(int32_t index2){

                        if(index2 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AbeClientInformationInterface abeClientInformation;

public: BasicHighScoresFactory(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation){
this->abeClientInformation= abeClientInformation;
    
}


    private: const std::vector<HighScores> highScoresArray = std::vector<HighScores>(1);

    private: const std::string TOP = "Top";

    private: const std::string SCORES = "Scores";

    private: const std::string PERSONAL_HIGH_SCORES = "Personal Top Scores";

    private: const std::string FETCH = "fetchHighScores";

    public: void fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener){
this->logUtil.putF("Getting Local HighScores", this, this->FETCH);
    
this->fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    public: void fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload){

        try {
            this->highScoresArray[0]= RecordStoreHighScores::getInstance(this->abeClientInformation, gameInfo, this->TOP, this->PERSONAL_HIGH_SCORES, this->SCORES, ScoreComparator(true));
    
highScoresResultsListener.setHighScoresArray(this->highScoresArray);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->FETCH, e);
    
}

}


    public: HighScoresHelperBaseInterface createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HighScoresHelper2();
    
}


};

            

