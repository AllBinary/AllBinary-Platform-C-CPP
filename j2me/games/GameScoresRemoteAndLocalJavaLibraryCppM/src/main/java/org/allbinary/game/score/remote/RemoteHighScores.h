
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Enumeration.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/remote/RemoteHighScoresProcessorFactory.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorFactory.h"
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"

class RemoteHighScores: public HighScores {

    private: static inline ABHashtable<Object*, Object*>* hashTable = StdUtil::getInstance()->createHashtable();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstance(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstancePreload(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending, bool preload);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    private: AbeClientInformationInterface* abeClientInformation;

    private: SoftwareInformation* softwareInformation;

    private: bool ascending;

    public: const std::string ASCENDING = "ASCENDING";

private: RemoteHighScores(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool ascending, bool preload);

    public: void addHighScore(HighScore* newHighScore);

    public: void update(ABHashtable<Object*, Object*>* hashtable);

    private: void setAscending(bool ascending);

    public: bool getAscending();

    public: SoftwareInformation* getSoftwareInformation();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H
