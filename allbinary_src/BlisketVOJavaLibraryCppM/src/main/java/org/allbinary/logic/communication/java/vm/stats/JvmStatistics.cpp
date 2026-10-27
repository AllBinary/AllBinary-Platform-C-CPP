
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/java/vm/stats/JvmStatistics.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Runtime.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Thread.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

JvmStatistics::JvmStatistics(){
this->runtime= Runtime::getRuntime();
    
}


    auto JvmStatistics::getFreeMemoryBytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime->freeMemory();;
    
}


    auto JvmStatistics::getFreeMemoryKilobytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryBytes() /1024;
    
}


    auto JvmStatistics::getFreeMemoryMegabytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryKilobytes() /1024;
    
}


    auto JvmStatistics::getMaxMemoryBytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime->maxMemory();;
    
}


    auto JvmStatistics::getMaxMemoryKilobytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryBytes() /1024;
    
}


    auto JvmStatistics::getMaxMemoryMegabytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryKilobytes() /1024;
    
}


    auto JvmStatistics::getTotalMemoryBytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime->totalMemory();;
    
}


    auto JvmStatistics::getTotalMemoryKilobytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryBytes() /1024;
    
}


    auto JvmStatistics::getTotalMemoryMegabytes() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryKilobytes() /1024;
    
}


    auto JvmStatistics::getFreeMemoryBytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getFreeMemoryBytes());
    
}


    auto JvmStatistics::getFreeMemoryKilobytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getFreeMemoryKilobytes());
    
}


    auto JvmStatistics::getFreeMemoryMegabytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getFreeMemoryMegabytes());
    
}


    auto JvmStatistics::getMaxMemoryBytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getMaxMemoryBytes());
    
}


    auto JvmStatistics::getMaxMemoryKilobytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getMaxMemoryKilobytes());
    
}


    auto JvmStatistics::getMaxMemoryMegabytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getMaxMemoryMegabytes());
    
}


    auto JvmStatistics::getTotalMemoryBytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getTotalMemoryBytes());
    
}


    auto JvmStatistics::getTotalMemoryKilobytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getTotalMemoryKilobytes());
    
}


    auto JvmStatistics::getTotalMemoryMegabytesLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getTotalMemoryMegabytes());
    
}


    auto JvmStatistics::getFreeMemoryBytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryBytesLong().toString();;
    
}


    auto JvmStatistics::getFreeMemoryKilobytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryKilobytesLong().toString();;
    
}


    auto JvmStatistics::getFreeMemoryMegabytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryMegabytesLong().toString();;
    
}


    auto JvmStatistics::getMaxMemoryBytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryBytesLong().toString();;
    
}


    auto JvmStatistics::getMaxMemoryKilobytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryKilobytesLong().toString();;
    
}


    auto JvmStatistics::getMaxMemoryMegabytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryMegabytesLong().toString();;
    
}


    auto JvmStatistics::getTotalMemoryBytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryBytesLong().toString();;
    
}


    auto JvmStatistics::getTotalMemoryKilobytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryKilobytesLong().toString();;
    
}


    auto JvmStatistics::getTotalMemoryMegabytesString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryMegabytesLong().toString();;
    
}


    auto JvmStatistics::getNumberOfThreads() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Thread::activeCount();;
    
}


    auto JvmStatistics::getNumberOfThreadsLong() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return int64_t(this->getNumberOfThreads());
    
}


    auto JvmStatistics::getNumberOfThreadsString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getNumberOfThreadsLong().toString();;
    
}


    auto JvmStatistics::collectGarbage() -> void{
this->runtime->gc();
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_JAVA_VM_STATS_JVMSTATISTICS_CPP
