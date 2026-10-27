
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
class RecordEnumeration;
class RecordStore;
class RecordStoreException;
class TsUtil;
class GameInfo;
class NullRecordComparator;
class NullRecordFilter;
class NullRecordStore;
class LogUtil;
class PreLogUtil;
class ExceptionUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class PlatformRecordIdUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HighScoreNamePersistanceSingleton
            : public virtual Object
         {

    private: static HighScoreNamePersistanceSingleton* SINGLETON_owner();
    private: static HighScoreNamePersistanceSingleton* SINGLETON;

    public: static HighScoreNamePersistanceSingleton* getInstance();


            
    public: HighScoreNamePersistanceSingleton();
        
    /*protected*/ public: LogUtil* logUtil;

    private: TsUtil* tsUtil;

    private: CommonStrings* commonStrings;

    private: PlatformRecordIdUtil* platformRecordIdUtil;

    private: const std::string RECORD_ID = "_SN";

    private: std::string name;

    private: BasicArrayList* nameBasicArrayList;

    public: void clear();

                //@Throws(Exception.constructor)
            
    public: void deleteAll(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);

    private: std::string getRecordId(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void delete_(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, int32_t deleteId);

    public: BasicArrayList* getIds();

    public: std::string load(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo);

    public: void save(AbeClientInformationInterface* abeClientInformation, GameInfo* gameInfo, std::string name);

};

            


        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORENAMEPERSISTANCESINGLETON_H_COMPLETE
        #if __has_include(<java/io/ByteArrayInputStream.h>)
#include <java/io/ByteArrayInputStream.h>
#endif
#if __has_include(<java/io/ByteArrayOutputStream.h>)
#include <java/io/ByteArrayOutputStream.h>
#endif
#if __has_include(<java/io/DataInputStream.h>)
#include <java/io/DataInputStream.h>
#endif
#if __has_include(<java/io/DataOutputStream.h>)
#include <java/io/DataOutputStream.h>
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
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/exception/ExceptionUtil.h>)
#include <org/allbinary/logic/java/exception/ExceptionUtil.h>
#endif
#if __has_include(<org/allbinary/logic/math/SmallIntegerSingletonFactory.h>)
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/persistance/PlatformRecordIdUtil.h>)
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
