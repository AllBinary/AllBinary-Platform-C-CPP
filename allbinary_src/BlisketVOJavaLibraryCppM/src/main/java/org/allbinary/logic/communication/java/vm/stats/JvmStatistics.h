
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runtime.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Thread.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JvmStatistics
            : public Object
         {

    private: Runtime* runtime;

public: JvmStatistics();

    public: int64_t getFreeMemoryBytes();

    public: int64_t getFreeMemoryKilobytes();

    public: int64_t getFreeMemoryMegabytes();

    public: int64_t getMaxMemoryBytes();

    public: int64_t getMaxMemoryKilobytes();

    public: int64_t getMaxMemoryMegabytes();

    public: int64_t getTotalMemoryBytes();

    public: int64_t getTotalMemoryKilobytes();

    public: int64_t getTotalMemoryMegabytes();

    public: int64_t getFreeMemoryBytesLong();

    public: int64_t getFreeMemoryKilobytesLong();

    public: int64_t getFreeMemoryMegabytesLong();

    public: int64_t getMaxMemoryBytesLong();

    public: int64_t getMaxMemoryKilobytesLong();

    public: int64_t getMaxMemoryMegabytesLong();

    public: int64_t getTotalMemoryBytesLong();

    public: int64_t getTotalMemoryKilobytesLong();

    public: int64_t getTotalMemoryMegabytesLong();

    public: std::string getFreeMemoryBytesString();

    public: std::string getFreeMemoryKilobytesString();

    public: std::string getFreeMemoryMegabytesString();

    public: std::string getMaxMemoryBytesString();

    public: std::string getMaxMemoryKilobytesString();

    public: std::string getMaxMemoryMegabytesString();

    public: std::string getTotalMemoryBytesString();

    public: std::string getTotalMemoryKilobytesString();

    public: std::string getTotalMemoryMegabytesString();

    public: int64_t getNumberOfThreads();

    public: int64_t getNumberOfThreadsLong();

    public: std::string getNumberOfThreadsString();

    public: void collectGarbage();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_H
