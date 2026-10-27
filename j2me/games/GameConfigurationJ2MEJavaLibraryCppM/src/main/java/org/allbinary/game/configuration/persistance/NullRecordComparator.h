
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/rms/RecordComparator.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullRecordComparator
            : public virtual Object
        , public RecordComparator {

    private: static NullRecordComparator* NULL_RECORD_COMPARATOR_owner();
    public: static NullRecordComparator* NULL_RECORD_COMPARATOR;


            
    public: NullRecordComparator();
        
    public: int32_t compare(std::vector<int8_t> rec1, std::vector<int8_t> rec2);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H_COMPLETE
        #if __has_include(<javax/microedition/rms/RecordComparator.h>)
#include <javax/microedition/rms/RecordComparator.h>
#endif

        #endif
    
