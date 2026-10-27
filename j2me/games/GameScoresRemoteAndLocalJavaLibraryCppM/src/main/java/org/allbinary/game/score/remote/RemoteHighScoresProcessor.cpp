
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
        
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/GameInfoData.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
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
        #include "org/allbinary/game/score/remote/RemoteHighScoresProcessorInterface.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"
#include "org/allbinary/game/score/remote/XmlRpcRemoteHighScoresClient.h"
#include "org/allbinary/game/score/remote/RemoteHighScores.h"

class RemoteHighScoresProcessor
            : public Object
        , public RemoteHighScoresProcessorInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: NoCrypt* noCrypt = new NoCrypt();

public: RemoteHighScoresProcessor(){
}


                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void process(RemoteHighScores* remoteHighScores, AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo){
this->logUtil->putF("Begin Remote HighScores Retrieval", this, this->commonStrings->PROCESS);
    

    GameInfoData* gameInfoData = GameInfoData::getInstance();;
    

    ABHashtable<Object*, Object*>* hashtable = abeClientInformation->toHashtable();;
    
HashtableUtil::getInstance()->putAll(gameInfo->toHashtable(), hashtable);
    
hashtable->put(gameInfoData->SOFTWARE_INFORMATION, remoteHighScores->getSoftwareInformation()->toString());
    
hashtable->put(remoteHighScores->ASCENDING, remoteHighScores->getAscending()->toString());
    

    DisplayInfoSingleton* displayInfoSingleton = DisplayInfoSingleton::getInstance();;
    
hashtable->put(displayInfoSingleton->ORIENTATION, BooleanFactory::getInstance()->toStringb(displayInfoSingleton->isPortrait()));
    
hashtable->put(RemoteHighScoresData::getInstance()->GAME_CONFIGURATION, GameConfigurationCentral::getInstance()->toString());
    

                        if(XmlRpcAbeClient::isOnline)
                        
                                    {
                                    
    ABHashtable<Object*, Object*>* resultHashtable = dynamic_cast<ABHashtable<Object*, Object*>*>((new XmlRpcRemoteHighScoresClient(abeClientInformation, "highscoresservicessl.php", "HighScoresService.process"))->get(hashtable, this->noCrypt));;
    
remoteHighScores->update(resultHashtable);
    

                                    }
                                
}


};

            

