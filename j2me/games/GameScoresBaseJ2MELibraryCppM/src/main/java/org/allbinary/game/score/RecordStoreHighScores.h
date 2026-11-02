
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H
        #define ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/EOFException.h>
#include <java/io/IOException.h>
class RecordComparator;
class RecordEnumeration;
class RecordStore;
class RecordStoreException;
class RecordStoreNotFoundException;
class TsUtil;
class GameInfo;
class NullRecordComparator;
class NullRecordFilter;
class NullRecordStore;
class StdUtil;
class LogUtil;
class PreLogUtil;
class StringMaker;
class AbeClientInformationInterface;
class PlatformRecordIdUtil;
class CommonSeps;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScores.h"
class HighScore;
class ScoreComparator;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RecordStoreHighScores: public HighScores {

    private: static ABHashtable<Object*, Object*>* hashTable;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string highScoreName, std::string heading, std::string columnTwoHeading, RecordComparator* recordComparatorInterface);

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: PlatformRecordIdUtil* platformRecordIdUtil;

    private: TsUtil* tsUtil;

    private: const std::string RECORD_ID = "_HS";

    private: const int32_t MAXHIGHSCORES = 100;

    private: GameInfo* gameInfo;

    private: AbeClientInformationInterface* abeClientInformation;

    private: RecordComparator* recordComparatorInterface;

private: RecordStoreHighScores(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string name, std::string heading, std::string columnTwoHeading, RecordComparator* recordComparatorInterface);

    private: std::string getRecordId(AbeClientInformationInterface* abeClientInformation);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void addHighScore(HighScore* newHighScore);

    private: void removeLowestHighScore();

    private: void load();

    private: bool isTooManyHighScores();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isBestScore(HighScore* newHighScore);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/DataInputStream.h>)
#include <java/io/DataInputStream.h>
#endif
#if __has_include(<java/io/EOFException.h>)
#include <java/io/EOFException.h>
#endif
#if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<javax/microedition/rms/RecordComparator.h>)
#include <javax/microedition/rms/RecordComparator.h>
#endif
#if __has_include(<javax/microedition/rms/RecordEnumeration.h>)
#include <javax/microedition/rms/RecordEnumeration.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStore.h>)
#include <javax/microedition/rms/RecordStore.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStoreException.h>)
#include <javax/microedition/rms/RecordStoreException.h>
#endif
#if __has_include(<javax/microedition/rms/RecordStoreNotFoundException.h>)
#include <javax/microedition/rms/RecordStoreNotFoundException.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/game/GameInfo.h>)
#include <org/allbinary/game/GameInfo.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/NullRecordComparator.h>)
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/NullRecordFilter.h>)
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>
#endif
#if __has_include(<org/allbinary/game/configuration/persistance/NullRecordStore.h>)
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/persistance/PlatformRecordIdUtil.h>)
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/score/HighScores.h")
#include "org/allbinary/game/score/HighScores.h"
#endif
#if __has_include("org/allbinary/game/score/HighScore.h")
#include "org/allbinary/game/score/HighScore.h"
#endif
#if __has_include("org/allbinary/game/score/ScoreComparator.h")
#include "org/allbinary/game/score/ScoreComparator.h"
#endif

        #endif
    
