
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Enumeration.h>
class BasicArrayList;
class GameInfo;
class HighScore;
#include <org/allbinary/game/score/HighScores.h>
class RemoteErrorHighScoresSingletonFactory;
class StdUtil;
class LogUtil;
class StringMaker;
class SoftwareInformation;
class AbeClientInformationInterface;
class CommonLabels;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
class EnumerationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class RemoteHighScoresProcessorFactory;
class RemoteHighScoresSubmissionProcessorFactory;
class RemoteHighScoresData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoteHighScores: public HighScores {

    private: static ABHashtable<Object*, Object*>* hashTable;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstance(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstancePreload(AbeClientInformationInterface* abeClientInformation, SoftwareInformation* softwareInformation, GameInfo* gameInfo, std::string heading, std::string columnTwoHeading, bool isAscending, bool preload);

    /*protected*/ public: LogUtil* logUtil;

    private: EnumerationUtil* enumerationUtil;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_REMOTE_REMOTEHIGHSCORES_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScore.h>)
#include <org/allbinary/game/score/HighScore.h>
#endif
#if __has_include(<org/allbinary/game/score/HighScores.h>)
#include <org/allbinary/game/score/HighScores.h>
#endif
#if __has_include(<org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>)
#include <org/allbinary/game/score/RemoteErrorHighScoresSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/SoftwareInformation.h>)
#include <org/allbinary/logic/system/SoftwareInformation.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/EnumerationUtil.h>)
#include <org/allbinary/util/EnumerationUtil.h>
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScoresProcessorFactory.h")
#include "org/allbinary/game/score/remote/RemoteHighScoresProcessorFactory.h"
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorFactory.h")
#include "org/allbinary/game/score/remote/RemoteHighScoresSubmissionProcessorFactory.h"
#endif
#if __has_include("org/allbinary/game/score/remote/RemoteHighScoresData.h")
#include "org/allbinary/game/score/remote/RemoteHighScoresData.h"
#endif

        #endif
    
