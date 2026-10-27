
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
class RecordStore;
class LogUtil;
class PreLogUtil;
class StringMaker;
class AbeClientInformationInterface;
class PlatformRecordIdUtil;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class PersistanceStrings;
class NullRecordStore;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicPersitance
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    /*protected*/ public: PersistanceStrings* persistanceStrings;

    private: PlatformRecordIdUtil* platformRecordIdUtil;

    private: std::string recordId;

    /*protected*/ public: BasicArrayList* valueList;

    /*protected*/ public: BasicArrayList* idList;

/*protected*/ public: BasicPersitance(std::string recordId);

                //@Throws(Exception.constructor)
            
    public: void deleteRecoreStore(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void deleteAll(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void delete_(AbeClientInformationInterface* abeClientInformation, int32_t deleteId);

    public: std::string getRecordId(AbeClientInformationInterface* abeClientInformation);

    public: BasicArrayList* getList();

    public: BasicArrayList* getIds();

    public: void clear();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H_COMPLETE
        #if __has_include(<javax/microedition/rms/RecordStore.h>)
#include <javax/microedition/rms/RecordStore.h>
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
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include("org/allbinary/game/configuration/persistance/PersistanceStrings.h")
#include "org/allbinary/game/configuration/persistance/PersistanceStrings.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/NullRecordStore.h")
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#endif

        #endif
    
