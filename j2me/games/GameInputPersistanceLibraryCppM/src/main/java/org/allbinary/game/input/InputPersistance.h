
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H

        
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
class TsUtil;
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>
class NullRecordComparator;
class NullRecordFilter;
class NullRecordStore;
class PreLogUtil;
class SmallIntegerSingletonFactory;
class StringMaker;
class StringUtil;
class AbeClientInformationInterface;
class CommonSeps;
class BasicArrayList;
class HashtableUtil;
class StdUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class Input;
class GameKeyMappingFactory;
class InputFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //GameInputPersistanceLibrary
class InputPersistance: public BasicPersitance {

    private: TsUtil* tsUtil;

    private: HashtableUtil* hashtableUtil;

public: InputPersistance(std::string name);

                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation, ABHashtable<Object*, Object*>* hashtable);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H_COMPLETE
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
#if __has_include(<org/allbinary/game/configuration/persistance/BasicPersitance.h>)
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>
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
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/HashtableUtil.h>)
#include <org/allbinary/util/HashtableUtil.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/input/Input.h")
#include "org/allbinary/game/input/Input.h"
#endif
#if __has_include("org/allbinary/game/input/GameKeyMappingFactory.h")
#include "org/allbinary/game/input/GameKeyMappingFactory.h"
#endif
#if __has_include("org/allbinary/game/input/InputFactory.h")
#include "org/allbinary/game/input/InputFactory.h"
#endif

        #endif
    
