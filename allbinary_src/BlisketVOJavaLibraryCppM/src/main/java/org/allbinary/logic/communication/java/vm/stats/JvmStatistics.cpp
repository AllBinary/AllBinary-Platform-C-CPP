
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Runtime.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
            #include "../../../../../../../java/lang/Thread.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class JvmStatistics
            : public Object
         {

    private: Runtime runtime;

public: JvmStatistics(){
this->runtime= Runtime::getRuntime();
    
}


    public: int64_t getFreeMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime.freeMemory();;
    
}


    public: int64_t getFreeMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryBytes() /1024;
    
}


    public: int64_t getFreeMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryKilobytes() /1024;
    
}


    public: int64_t getMaxMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime.maxMemory();;
    
}


    public: int64_t getMaxMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryBytes() /1024;
    
}


    public: int64_t getMaxMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryKilobytes() /1024;
    
}


    public: int64_t getTotalMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->runtime.totalMemory();;
    
}


    public: int64_t getTotalMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryBytes() /1024;
    
}


    public: int64_t getTotalMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryKilobytes() /1024;
    
}


    public: Long getFreeMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getFreeMemoryBytes());
    
}


    public: Long getFreeMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getFreeMemoryKilobytes());
    
}


    public: Long getFreeMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getFreeMemoryMegabytes());
    
}


    public: Long getMaxMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getMaxMemoryBytes());
    
}


    public: Long getMaxMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getMaxMemoryKilobytes());
    
}


    public: Long getMaxMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getMaxMemoryMegabytes());
    
}


    public: Long getTotalMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getTotalMemoryBytes());
    
}


    public: Long getTotalMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getTotalMemoryKilobytes());
    
}


    public: Long getTotalMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getTotalMemoryMegabytes());
    
}


    public: std::string getFreeMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryBytesLong().toString();;
    
}


    public: std::string getFreeMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryKilobytesLong().toString();;
    
}


    public: std::string getFreeMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getFreeMemoryMegabytesLong().toString();;
    
}


    public: std::string getMaxMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryBytesLong().toString();;
    
}


    public: std::string getMaxMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryKilobytesLong().toString();;
    
}


    public: std::string getMaxMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getMaxMemoryMegabytesLong().toString();;
    
}


    public: std::string getTotalMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryBytesLong().toString();;
    
}


    public: std::string getTotalMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryKilobytesLong().toString();;
    
}


    public: std::string getTotalMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getTotalMemoryMegabytesLong().toString();;
    
}


    public: int64_t getNumberOfThreads(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Thread::activeCount();;
    
}


    public: Long getNumberOfThreadsLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Long(this->getNumberOfThreads());
    
}


    public: std::string getNumberOfThreadsString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getNumberOfThreadsLong().toString();;
    
}


    public: void collectGarbage(){
this->runtime.gc();
    
}


};

            

