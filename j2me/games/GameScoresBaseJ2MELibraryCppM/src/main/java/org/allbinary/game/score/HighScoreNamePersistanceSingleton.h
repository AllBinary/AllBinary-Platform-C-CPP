
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <javax/microedition/rms/RecordStoreException.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/GameInfo.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HighScoreNamePersistanceSingleton
            : public Object
         {
        

    private: static SINGLETON: HighScoreNamePersistanceSingleton = new HighScoreNamePersistanceSingleton();

    public static HighScoreNamePersistanceSingleton getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const tsUtil: TsUtil = TsUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: const platformRecordIdUtil: PlatformRecordIdUtil = PlatformRecordIdUtil.getInstance()!;

    private: const RECORD_ID: string = "_SN";

    private: name: string = StringUtil.getInstance()!.EMPTY_STRING;

    private: nameBasicArrayList: BasicArrayList = new BasicArrayListD();

    public clear();

                //@Throws(Exception.constructor)
            
    public deleteAll(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo);

    string getRecordId(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public delete(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, int32_t deleteId);

    public BasicArrayList getIds();

    public string load(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo);

    public save(AbeClientInformationInterface abeClientInformation, GameInfo gameInfo, string name);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H
