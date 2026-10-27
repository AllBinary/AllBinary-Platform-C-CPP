
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

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/configuration/persistance/BasicPersitance.h"
#include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
#include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
#include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"

class KeyValuePersistance: public BasicPersitance {

    private: TsUtil* tsUtil = TsUtil::getInstance();

protected: KeyValuePersistance(std::string recordId);

                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void loadAllSize(AbeClientInformationInterface* abeClientInformation, int32_t size);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface* abeClientInformation, ABHashtable<Object*, Object*>* hashtable);

    public: ABHashtable<Object*, Object*>* get(int32_t index);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_KEYVALUEPERSISTANCE_H
