
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

            #include <vector>
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/io/ByteArrayInputStream.h>

      
#include <java/io/ByteArrayOutputStream.h>

      
#include <java/io/DataInputStream.h>

      
#include <java/io/DataOutputStream.h>

      
#include <java/util/Hashtable.h>

      
#include <javax/microedition/rms/RecordEnumeration.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/game/configuration/persistance/BasicPersitance.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordComparator.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordFilter.h>

      
#include <org/allbinary/game/configuration/persistance/NullRecordStore.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/HashtableUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Input.h"
#include "GameKeyMappingFactory.h"
#include "InputFactory.h"
//GameInputPersistanceLibrary
class InputPersistance: public BasicPersitance {

    private: const TsUtil tsUtil = TsUtil::getInstance();

    private: const HashtableUtil hashtableUtil = HashtableUtil::getInstance();

public: InputPersistance(std::string name);

                //@Throws(Exception.constructor)
            
    public: void loadAll(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: void save(AbeClientInformationInterface abeClientInformation, Hashtable<any, any> hashtable);

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_INPUTPERSISTANCE_H
