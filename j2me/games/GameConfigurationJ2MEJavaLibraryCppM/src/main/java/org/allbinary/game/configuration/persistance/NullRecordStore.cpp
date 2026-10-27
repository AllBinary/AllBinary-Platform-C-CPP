
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/NullRecordStore.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <javax/microedition/rms/RecordStore.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullRecordStore::NullRecordStore() {
        }
        auto NullRecordStore::NULL_RECORD_STORE_owner() -> NullRecordStore* { static std::unique_ptr<NullRecordStore> value(new NullRecordStore()); return value.get(); }
NullRecordStore* NullRecordStore::NULL_RECORD_STORE = NullRecordStore::NULL_RECORD_STORE_owner();



        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDSTORE_CPP
