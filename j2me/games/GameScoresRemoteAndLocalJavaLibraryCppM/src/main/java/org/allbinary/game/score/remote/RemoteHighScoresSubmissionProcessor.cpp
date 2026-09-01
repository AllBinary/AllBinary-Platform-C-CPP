
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/GameInfoData.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/xmlrpc/XmlRpcAbeClient.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/system/security/crypt/jcehelper/NoCrypt.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RemoteHighScoresSubmissionProcessorInterface.h"
#include "RemoteHighScoresData.h"
#include "XmlRpcRemoteHighScoresClient.h"
#include "RemoteHighScores.h"

class RemoteHighScoresSubmissionProcessor
            : public Object
        : public RemoteHighScoresSubmissionProcessorInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const NoCrypt noCrypt = NoCrypt();

public: RemoteHighScoresSubmissionProcessor(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void process(RemoteHighScores remoteHighScores, AbeClientInformationInterface abeClientInformation, HighScore highScore){

        try {
            this->logUtil.putF("Begin Remote HighScores Submission", this, this->commonStrings.PROCESS);
    

    GameInfoData gameInfoData = GameInfoData::getInstance();;
    

    Hashtable<any, any> hashtable = abeClientInformation.toHashtable();;
    
HashtableUtil::getInstance().putAll(highScore.getGameInfo().toHashtable(), hashtable);
    
hashtable.put(RemoteHighScoresData::getInstance().CUSTOMER_USER_NAME, "None");
    
hashtable.put(RemoteHighScoresData::getInstance().DISPLAY_NAME, highScore.getName());
    
hashtable.put(gameInfoData.SOFTWARE_INFORMATION, remoteHighScores.getSoftwareInformation().toString());
    
hashtable.put(remoteHighScores.ASCENDING, remoteHighScores.getAscending().toString());
    

    DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    
hashtable.put(displayInfoSingleton.ORIENTATION, BooleanFactory::getInstance().toStringb(displayInfoSingleton.isPortrait()));
    
hashtable.put(RemoteHighScoresData::getInstance().GAME_CONFIGURATION, GameConfigurationCentral::getInstance().toString());
    
hashtable.put(RemoteHighScoresData::getInstance().SCORE, std::to_string(getScore));
    

                        if(XmlRpcAbeClient::isOnline)
                        
                                    {
                                    
    Hashtable<any, any> resultHashtable = XmlRpcRemoteHighScoresClient(abeClientInformation, "highscoresubmissionservicessl.php", "HighScoreSubmissionService.process").get(hashtable, this->noCrypt) as Hashtable<any, any>;;
    
remoteHighScores.update(resultHashtable);
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.PROCESS, e);
    
}

}


};

            

