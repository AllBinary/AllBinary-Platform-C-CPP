
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSDATA_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class JvmStatisticsData
            : public virtual Object
         {

    public: static inline const std::string JVM_STATISTICS = "JVM_STATISTICS_";

    public: static const std::string NAME;

    public: static const std::string TOTAL_MEMORY_BYTES;

    public: static const std::string TOTAL_MEMORY_KILOBYTES;

    public: static const std::string TOTAL_MEMORY_MEGABYTES;

    public: static const std::string FREE_MEMORY_BYTES;

    public: static const std::string FREE_MEMORY_KILOBYTES;

    public: static const std::string FREE_MEMORY_MEGABYTES;

    public: static const std::string MAX_MEMORY_BYTES;

    public: static const std::string MAX_MEMORY_KILOBYTES;

    public: static const std::string MAX_MEMORY_MEGABYTES;

    public: static const std::string NUMBER_OF_THREADS;

private: JvmStatisticsData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICSDATA_H_COMPLETE
        
        #endif
    
