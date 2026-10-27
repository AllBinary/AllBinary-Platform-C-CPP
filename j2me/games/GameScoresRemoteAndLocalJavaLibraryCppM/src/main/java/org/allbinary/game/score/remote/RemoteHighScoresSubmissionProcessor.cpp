
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
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

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorInterface.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"
#include "org/allbinary/game/score/remote/XmlRpcRemoteHighScoresClient.h"
#include "org/allbinary/game/score/remote/RemoteHighScores.h"

class RemoteHighScoresSubmissionProcessor
            : public Object
        , public RemoteHighScoresSubmissionProcessorInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: NoCrypt* noCrypt = new NoCrypt();

public: RemoteHighScoresSubmissionProcessor(){
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void process(RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, HighScore* highScore){

        try {
            this->logUtil->putF("Begin Remote HighScores Submission", this, this->commonStrings->PROCESS);
    

    GameInfoData* gameInfoData = GameInfoData::getInstance();;
    

    ABHashtable<Object*, Object*>* hashtable = abeClientInformation->toHashtable();;
    
HashtableUtil::getInstance()->putAll(highScore->getGameInfo()->toHashtable(), hashtable);
    
hashtable->put(RemoteHighScoresData::getInstance()->CUSTOMER_USER_NAME, "None");
    
hashtable->put(RemoteHighScoresData::getInstance()->DISPLAY_NAME, highScore->getName());
    
hashtable->put(gameInfoData->SOFTWARE_INFORMATION, remoteHighScores->getSoftwareInformation()->toString());
    
hashtable->put(remoteHighScores->ASCENDING, remoteHighScores->getAscending()->toString());
    

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    
hashtable->put(displayInfoSingleton->ORIENTATION, BooleanFactory::getInstance()->toStringb(displayInfoSingleton->isPortrait()));
    
hashtable->put(RemoteHighScoresData::getInstance()->GAME_CONFIGURATION, GameConfigurationCentral::getInstance()->toString());
    
hashtable->put(RemoteHighScoresData::getInstance()->SCORE, std::to_string(getScore));
    

                        if(XmlRpcAbeClient::isOnline)
                        
                                    {
                                    
    ABHashtable<Object*, Object*>* resultHashtable = dynamic_cast<ABHashtable<Object*, Object*>*>((new XmlRpcRemoteHighScoresClient(abeClientInformation, "highscoresubmissionservicessl.php", "HighScoreSubmissionService.process"))->get(hashtable, this->noCrypt));;
    
remoteHighScores->update(resultHashtable);
    

                                    }
                                

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(this->commonStrings->EXCEPTION, this, this->commonStrings->PROCESS, &e);
    
}

}


};

            

