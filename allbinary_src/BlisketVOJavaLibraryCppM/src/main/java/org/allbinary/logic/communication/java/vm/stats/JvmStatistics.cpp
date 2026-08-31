
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
        

    private: runtime: Runtime;

public constructor (){

            super();
        this.runtime= Runtime.getRuntime();
    
}


    public int64_t getFreeMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.runtime.freeMemory();;
    
}


    public int64_t getFreeMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getFreeMemoryBytes() /1024;
    
}


    public int64_t getFreeMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getFreeMemoryKilobytes() /1024;
    
}


    public int64_t getMaxMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.runtime.maxMemory();;
    
}


    public int64_t getMaxMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMaxMemoryBytes() /1024;
    
}


    public int64_t getMaxMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMaxMemoryKilobytes() /1024;
    
}


    public int64_t getTotalMemoryBytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.runtime.totalMemory();;
    
}


    public int64_t getTotalMemoryKilobytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTotalMemoryBytes() /1024;
    
}


    public int64_t getTotalMemoryMegabytes(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTotalMemoryKilobytes() /1024;
    
}


    public Long getFreeMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getFreeMemoryBytes());
    
}


    public Long getFreeMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getFreeMemoryKilobytes());
    
}


    public Long getFreeMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getFreeMemoryMegabytes());
    
}


    public Long getMaxMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getMaxMemoryBytes());
    
}


    public Long getMaxMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getMaxMemoryKilobytes());
    
}


    public Long getMaxMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getMaxMemoryMegabytes());
    
}


    public Long getTotalMemoryBytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getTotalMemoryBytes());
    
}


    public Long getTotalMemoryKilobytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getTotalMemoryKilobytes());
    
}


    public Long getTotalMemoryMegabytesLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getTotalMemoryMegabytes());
    
}


    public string getFreeMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getFreeMemoryBytesLong()!.toString();;
    
}


    public string getFreeMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getFreeMemoryKilobytesLong()!.toString();;
    
}


    public string getFreeMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getFreeMemoryMegabytesLong()!.toString();;
    
}


    public string getMaxMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMaxMemoryBytesLong()!.toString();;
    
}


    public string getMaxMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMaxMemoryKilobytesLong()!.toString();;
    
}


    public string getMaxMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getMaxMemoryMegabytesLong()!.toString();;
    
}


    public string getTotalMemoryBytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTotalMemoryBytesLong()!.toString();;
    
}


    public string getTotalMemoryKilobytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTotalMemoryKilobytesLong()!.toString();;
    
}


    public string getTotalMemoryMegabytesString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getTotalMemoryMegabytesLong()!.toString();;
    
}


    public int64_t getNumberOfThreads(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Thread.activeCount();;
    
}


    public Long getNumberOfThreadsLong(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new Long(this.getNumberOfThreads());
    
}


    public string getNumberOfThreadsString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getNumberOfThreadsLong()!.toString();;
    
}


    public collectGarbage(){
this.runtime.gc();
    
}


};

            

