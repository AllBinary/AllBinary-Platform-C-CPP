
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbstractArrayListPool.h"
#include "CacheableInterfaceFactoryInterface.h"
#include "CacheableInterface.h"
#include "BasicArrayListCacheable.h"

class BasicArrayListPool: public AbstractArrayListPool {

public: BasicArrayListPool(CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface);

    public: void clear();

                //@Throws(Exception.constructor)
            
    public: CacheableInterface remove(Object* key);

                //@Throws(Exception.constructor)
            
    public: void addAll(BasicArrayList usedList);

                //@Throws(Exception.constructor)
            
    public: void releaseUsedBackToPool(BasicArrayList usedList);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTPOOL_H
