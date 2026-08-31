
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

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Long.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/score/HighScore.h>

      
#include <org/allbinary/game/score/HighScores.h>

      
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/SoftwareInformation.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "RemoteHighScoresProcessorFactory.h"
#include "RemoteHighScoresSubmissionProcessorFactory.h"
#include "RemoteHighScoresData.h"

class RemoteHighScores: public HighScores {
        

    private: static const hashTable: Hashtable<any, any> = new Hashtable<any, any>();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstance(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean isAscending);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstancePreload(AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean isAscending, bool preload);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const softwareInformation: SoftwareInformation;

    private: ascending: Boolean;

    public const ASCENDING: string = "ASCENDING";

private constructor (AbeClientInformationInterface abeClientInformation, SoftwareInformation softwareInformation, GameInfo gameInfo, string heading, string columnTwoHeading, Boolean ascending, bool preload);

    public addHighScore(HighScore newHighScore);

    public update(Hashtable<any, any> hashtable);

    setAscending(Boolean ascending);

    public Boolean getAscending();

    public SoftwareInformation getSoftwareInformation();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H
