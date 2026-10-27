
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
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
        #include "org/allbinary/game/score/HighScoresBase.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScoresResultsListener.h"
#include "org/allbinary/game/score/RecordStoreHighScores.h"
#include "org/allbinary/game/score/ScoreComparator.h"
#include "org/allbinary/game/score/LastFetchHighScoresFactory.h"
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

    private: SoftwareInformation* softwareInformation;

public: BasicHighScoresFactory(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation){
this->abeClientInformation= abeClientInformation;
    
this->softwareInformation= softwareInformation;
    
}


    private: const std::vector<HighScores*> highScoresArray = std::vector<HighScores*>(2);

    private: const std::string TOP = "Top";

    private: const std::string SCORES = "Scores";

    private: const std::string PERSONAL_HIGH_SCORES = "Personal Top Scores";

    private: const std::string WORLD_TOP_SCORES = "World Top Scores";

    private: const std::string FETCH = "fetchHighScores";

    public: void fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener){
this->logUtil->putF("Getting Remote/Local HighScores", this, this->FETCH);
    
this->fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    public: void fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload){
SecondaryThreadPool::getInstance()->runTask(class extends ARunnable
                                {
                                
    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            logUtil->putF(this->commonStrings.START, this, FETCH);
    
highScoresArray[0]= RecordStoreHighScores::getInstance(abeClientInformation, gameInfo, TOP, PERSONAL_HIGH_SCORES, SCORES, new ScoreComparator(true));
    

    GameType* gameType = gameInfo->getGameType();;
    

    GameTypeFactory* gameTypeFactory = GameTypeFactory::getInstance();;
    

    GameInfo* gameInfo2 = gameInfo;;
    

                        if(gameType == gameTypeFactory->SINGLE_PLAYER || gameType == gameTypeFactory->BOT)
                        
                                    {
                                    gameInfo2= BasicHighScoresGameInfoFactory::getInstance()->SINGLE_PLAYER_SERVER;
    

                                    }
                                
                             else 
                        if(gameType == gameTypeFactory->MULTI_PLAYER)
                        
                                    {
                                    gameInfo2= BasicHighScoresGameInfoFactory::getInstance()->MULTI_PLAYER_SERVER;
    

                                    }
                                
highScoresArray[1]= RemoteHighScores::getInstancePreload(abeClientInformation, softwareInformation, gameInfo2, WORLD_TOP_SCORES, SCORES, BooleanFactory::getInstance()->FALSE, preload);
    
logUtil->putF(this->commonStrings.END, this, FETCH);
    
LastFetchHighScoresFactory::getInstance()->highScoresArray= highScoresArray;
    
highScoresResultsListener->setHighScoresArray(highScoresArray);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(commonStrings.EXCEPTION, this, FETCH, &e);
    
}

}

                                }
                            );
    
}


    public: HighScoresHelperBaseInterface* createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScoresHelper2();
    
}


};

            

