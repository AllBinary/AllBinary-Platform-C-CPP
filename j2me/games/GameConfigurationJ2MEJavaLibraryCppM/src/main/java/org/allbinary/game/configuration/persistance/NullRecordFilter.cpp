
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_CPP
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/configuration/persistance/NullRecordFilter.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/rms/RecordFilter.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

NullRecordFilter::NullRecordFilter() {
        }
        auto NullRecordFilter::NULL_RECORD_FILTER_owner() -> NullRecordFilter* { static std::unique_ptr<NullRecordFilter> value(new NullRecordFilter()); return value.get(); }
NullRecordFilter* NullRecordFilter::NULL_RECORD_FILTER = NullRecordFilter::NULL_RECORD_FILTER_owner();

    auto NullRecordFilter::matches(std::vector<int8_t> candidate) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_CPP
