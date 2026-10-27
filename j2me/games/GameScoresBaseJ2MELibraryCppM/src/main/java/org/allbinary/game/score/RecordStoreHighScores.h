
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

      
#include <javax/microedition/rms/RecordComparator.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <javax/microedition/rms/RecordStoreNotFoundException.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScore.h"
#include "org/allbinary/game/score/ScoreComparator.h"

class RecordStoreHighScores: public HighScores {

    private: static inline ABHashtable<Object*, Object*>* hashTable = StdUtil::getInstance()->createHashtable();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: static HighScores* getInstance(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string highScoreName, std::string heading, std::string columnTwoHeading, RecordComparator* recordComparatorInterface);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: PlatformRecordIdUtil* platformRecordIdUtil = PlatformRecordIdUtil::getInstance();

    private: TsUtil* tsUtil = TsUtil::getInstance();

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
