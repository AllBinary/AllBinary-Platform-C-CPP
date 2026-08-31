
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IndexedBasicArrayListCache.h"

class KeylessBasicArrayListCache: public IndexedBasicArrayListCache {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

public constructor ();

    public BasicArrayList get();

    public clear();

    public string log();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_KEYLESSBASICARRAYLISTCACHE_H
