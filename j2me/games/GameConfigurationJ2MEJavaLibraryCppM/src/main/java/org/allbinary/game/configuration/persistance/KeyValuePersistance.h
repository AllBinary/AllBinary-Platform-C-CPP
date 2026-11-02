
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H

        
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
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
class RecordEnumeration;
class RecordStore;
class TsUtil;
class PreLogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class CommonSeps;
template<typename T1, typename T2> class ABHashtable;
class HashtableUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
class NullRecordStore;
class NullRecordFilter;
class NullRecordComparator;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyValuePersistance: public BasicPersitance {

    private: TsUtil* tsUtil;

/*protected*/ public: KeyValuePersistance(std::string recordId);

                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void loadAllSize(AbeClientInformationInterface* abeClientInformation, int32_t size);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation, ABHashtable<Object*, Object*>* hashtable);

    public: ABHashtable<Object*, Object*>* get(int32_t index);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H_COMPLETE
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
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/PreLogUtil.h>)
#include <org/allbinary/logic/communication/log/PreLogUtil.h>
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
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include("org/allbinary/game/configuration/persistance/BasicPersitance.h")
#include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/NullRecordStore.h")
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/NullRecordFilter.h")
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#endif
#if __has_include("org/allbinary/game/configuration/persistance/NullRecordComparator.h")
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
#endif

        #endif
    
