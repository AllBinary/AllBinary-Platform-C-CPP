
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/rms/RecordFilter.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRecordFilter
            : public virtual Object
        , public RecordFilter {

    private: static NullRecordFilter* NULL_RECORD_FILTER_owner();
    public: static NullRecordFilter* NULL_RECORD_FILTER;


            
    public: NullRecordFilter();
        
    public: bool matches(std::vector<int8_t> candidate);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDFILTER_H_COMPLETE
        #if __has_include(<javax/microedition/rms/RecordFilter.h>)
#include <javax/microedition/rms/RecordFilter.h>
#endif

        #endif
    
