
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


BasicHighScoresFactory::BasicHighScoresFactory(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation) : logUtil(LogUtil::getInstance()), highScoresArray(std::vector<HighScores*>(2)){
this->abeClientInformation= abeClientInformation;
    
this->softwareInformation= softwareInformation;
    
}


    auto BasicHighScoresFactory::fetchHighScores(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener) -> void{
this->logUtil->putF("Getting Remote/Local HighScores", this, this->FETCH);
    
this->fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    auto BasicHighScoresFactory::fetchHighScoresPreload(GameInfo* gameInfo, HighScoresResultsListener* highScoresResultsListener, bool preload) -> void{
SecondaryThreadPool::getInstance()->runTask([&]() {
    static thread_local BasicHighScoresFactory* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    static thread_local GameInfo* anonymous0_gameInfo{};
    anonymous0_gameInfo = gameInfo;
    static thread_local HighScoresResultsListener* anonymous0_highScoresResultsListener{};
    anonymous0_highScoresResultsListener = highScoresResultsListener;
    static thread_local bool anonymous0_preload{};
    anonymous0_preload = preload;
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;
    BasicHighScoresFactory* outer = anonymousOuter0;
    GameInfo* gameInfo = anonymous0_gameInfo;
    HighScoresResultsListener* highScoresResultsListener = anonymous0_highScoresResultsListener;
    bool preload = anonymous0_preload;

    public: void run(){

    LogUtil* logUtil = LogUtil::getInstance();;
    

        try {
            logUtil->putF(outer->commonStrings->START, this, FETCH);
    
outer->highScoresArray[0]= RecordStoreHighScores::getInstance(outer->abeClientInformation, gameInfo, TOP, PERSONAL_HIGH_SCORES, SCORES, new ScoreComparator(true));
    

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
                                
outer->highScoresArray[1]= RemoteHighScores::getInstancePreload(outer->abeClientInformation, outer->softwareInformation, gameInfo2, WORLD_TOP_SCORES, SCORES, BooleanFactory::getInstance()->FALSE, preload);
    
logUtil->putF(outer->commonStrings->END, this, FETCH);
    
LastFetchHighScoresFactory::getInstance()->highScoresArray= outer->highScoresArray;
    
highScoresResultsListener->setHighScoresArray(outer->highScoresArray);
    

                //: 
} catch(Exception& e) 
            {
logUtil->put(outer->commonStrings.EXCEPTION, this, FETCH, &e);
    
}

}

    };
    return new Anonymous0();
}());
    
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
