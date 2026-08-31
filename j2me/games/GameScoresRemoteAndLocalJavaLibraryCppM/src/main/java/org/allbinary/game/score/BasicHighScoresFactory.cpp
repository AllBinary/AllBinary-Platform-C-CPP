
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
        



            #include "../../../../java/lang/Exception.h"
        
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
        #include "HighScoresBase.h"
#include "HighScores.h"
#include "HighScoresResultsListener.h"
#include "RecordStoreHighScores.h"
#include "ScoreComparator.h"
#include "LastFetchHighScoresFactory.h"
#include "HighScoresHelper2.h"
#include "HighScoresHelperBaseInterface.h"

class BasicHighScoresFactory: public HighScoresBase {
        

    public static bool loaded(int32_t index2){

                        if(index2 >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const softwareInformation: SoftwareInformation;

public constructor (AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation){

            super();
        this.abeClientInformation= abeClientInformation;
    
this.softwareInformation= softwareInformation;
    
}


    private: const highScoresArray: std::vector<HighScores> = new Array(2);

    private: const TOP: string = "Top";

    private: const SCORES: string = "Scores";

    private: const PERSONAL_HIGH_SCORES: string = "Personal Top Scores";

    private: const WORLD_TOP_SCORES: string = "World Top Scores";

    private: const FETCH: string = "fetchHighScores";

    public fetchHighScores(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener){
this.logUtil!.putF("Getting Remote/Local HighScores", this, this.FETCH);
    
this.fetchHighScoresPreload(gameInfo, highScoresResultsListener, true);
    
}


    public fetchHighScoresPreload(GameInfo gameInfo, HighScoresResultsListener highScoresResultsListener, bool preload){
SecondaryThreadPool.getInstance()!.runTask(new class extends ARunnable
                                {
                                
    public run(){

    logUtil: LogUtil = LogUtil.getInstance()!;;
    

        try {
            logUtil!.putF(this::.commonStrings!.START, this, FETCH);
    
highScoresArray[0]= RecordStoreHighScores.getInstance(abeClientInformation, gameInfo, TOP, PERSONAL_HIGH_SCORES, SCORES, new ScoreComparator(true));
    

    gameType: GameType = gameInfo!.getGameType()!;;
    

    gameTypeFactory: GameTypeFactory = GameTypeFactory.getInstance()!;;
    

    gameInfo2: GameInfo = gameInfo;;
    

                        if(gameType == gameTypeFactory!.SINGLE_PLAYER || gameType == gameTypeFactory!.BOT)
                        
                                    {
                                    gameInfo2= BasicHighScoresGameInfoFactory.getInstance()!.SINGLE_PLAYER_SERVER;
    

                                    }
                                
                             else 
                        if(gameType == gameTypeFactory!.MULTI_PLAYER)
                        
                                    {
                                    gameInfo2= BasicHighScoresGameInfoFactory.getInstance()!.MULTI_PLAYER_SERVER;
    

                                    }
                                
highScoresArray[1]= RemoteHighScores.getInstancePreload(abeClientInformation, softwareInformation, gameInfo2, WORLD_TOP_SCORES, SCORES, BooleanFactory.getInstance()!.FALSE, preload);
    
logUtil!.putF(this::.commonStrings!.END, this, FETCH);
    
LastFetchHighScoresFactory.getInstance()!.highScoresArray= highScoresArray;
    
highScoresResultsListener!.setHighScoresArray(highScoresArray);
    

                //: 
} catch(e) 
            {
logUtil!.put(commonStrings!.EXCEPTION, this, FETCH, e);
    
}

}

                                }
                            );
    
}


    public HighScoresHelperBaseInterface createHighScoresHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new HighScoresHelper2();
    
}


};

            

