
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CachePolicy.h"

class CachePolicyFactory
            : public Object
         {

    private: static CachePolicyFactory instance() { return CachePolicyFactory(); }

    public: static CachePolicyFactory getInstance();

    public: const std::string NAME = "lru";

    public: CachePolicy MAX_TIME_THOUSAND_MAX = CachePolicy(this->NAME, Long::MAX_VALUE, 1000);

    public: CachePolicy THIRTY_MINUTES_TEN_THOUSAND_MAX = CachePolicy(this->NAME, 1000 *60 *30, 10000);

    public: CachePolicy THIRTY_MINUTES_FIFTY_THOUSAND_MAX = CachePolicy(this->NAME, 1000 *60 *30, 100000);

    public: CachePolicy ONE_MINUTE_FIVE_MAX = CachePolicy(this->NAME, 1000 *60 *1, 5);

    public: CachePolicy ONE_MINUTE_TEN_MAX = CachePolicy(this->NAME, 1000 *60 *1, 10);

    public: CachePolicy ONE_MINUTE_ONE_HUNDRED_MAX = CachePolicy(this->NAME, 1000 *60 *1, 100);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
