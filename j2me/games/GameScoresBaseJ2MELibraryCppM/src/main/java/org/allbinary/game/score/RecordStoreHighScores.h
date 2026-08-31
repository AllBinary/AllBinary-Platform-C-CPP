
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

            #include "../../../../java/lang/Exception.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/EOFException.h>

      
#include <java/io/IOException.h>

      
#include <java/util/Hashtable.h>

      
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

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "HighScores.h"
#include "HighScore.h"
#include "ScoreComparator.h"

class RecordStoreHighScores: public HighScores {
        

    private: static const hashTable: Hashtable<any, any> = new Hashtable<any, any>();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public static HighScores getInstance(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, string highScoreName, string heading, string columnTwoHeading, RecordComparator recordComparatorInterface);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const platformRecordIdUtil: PlatformRecordIdUtil = PlatformRecordIdUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const RECORD_ID: string = "_HS";

    private: const MAXHIGHSCORES: int32_t = 100;

    private: const gameInfo: GameInfo;

    private: const abeClientInformation: AbeClientInformationInterface;

    private: const recordComparatorInterface: RecordComparator;

private constructor (AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, string name, string heading, string columnTwoHeading, RecordComparator recordComparatorInterface);

    string getRecordId(AbeClientInformationInterface abeClientInformation);
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public addHighScore(HighScore newHighScore);

    removeLowestHighScore();

    load();

    bool isTooManyHighScores();

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public bool isBestScore(HighScore newHighScore);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_RECORDSTOREHIGHSCORES_H
