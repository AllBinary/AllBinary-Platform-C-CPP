
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/NullRecordComparator.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/rms/RecordComparator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullRecordComparator::NullRecordComparator() {
        }
        auto NullRecordComparator::NULL_RECORD_COMPARATOR_owner() -> NullRecordComparator* { static std::unique_ptr<NullRecordComparator> value(new NullRecordComparator()); return value.get(); }
NullRecordComparator* NullRecordComparator::NULL_RECORD_COMPARATOR = NullRecordComparator::NULL_RECORD_COMPARATOR_owner();

    auto NullRecordComparator::compare(std::vector<int8_t> rec1, std::vector<int8_t> rec2) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_CPP
