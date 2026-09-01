
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

    private: std::string name;

    private: int64_t maxTime= 0;

    private: int64_t maxSize= 0;

public: CachePolicy(std::string name, int64_t maxTime, int64_t maxSize);

    public: int64_t getMaxTime();

    public: void setMaxTime(int64_t maxTime);

    public: int64_t getMaxSize();

    public: void setMaxSize(int64_t maxSize);

    public: std::string getName();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
