
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CachePolicy
            : public Object
         {
        

    private: const name: string;

    private: maxTime: int64_t= 0;

    private: maxSize: int64_t= 0;

public constructor (string name, int64_t maxTime, int64_t maxSize);

    public int64_t getMaxTime();

    public setMaxTime(int64_t maxTime);

    public int64_t getMaxSize();

    public setMaxSize(int64_t maxSize);

    public string getName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
