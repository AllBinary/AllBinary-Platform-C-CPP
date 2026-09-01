
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

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
#include <javax/microedition/rms/RecordComparator.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullRecordComparator
            : public Object
        : public RecordComparator {

    public: static const NullRecordComparator NULL_RECORD_COMPARATOR = NullRecordComparator();

    public: int32_t compare(std::vector<int8_t> rec1, std::vector<int8_t> rec2);

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_NULLRECORDCOMPARATOR_H
