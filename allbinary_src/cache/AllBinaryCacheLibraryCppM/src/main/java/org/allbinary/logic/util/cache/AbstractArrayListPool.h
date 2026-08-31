
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PoolInterface.h"
#include "CacheableInterfaceFactoryInterface.h"
#include "CacheableInterface.h"

class AbstractArrayListPool
            : public Object
        : public PoolInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    buffers: BasicArrayList = new BasicArrayListD();

    cacheableInterfaceFactoryInterface: CacheableInterfaceFactoryInterface;

public constructor (CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface);

                //@Throws(Exception.constructor)
            
    public clear();

                //@Throws(Exception.constructor)
            
    public CacheableInterface remove(any = {} key);

                //@Throws(Exception.constructor)
            
    public add(CacheableInterface cacheableInterface);

                //@Throws(Exception.constructor)
            
    public addArray(std::vector<CacheableInterface> cacheableInterfaces);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_ABSTRACTARRAYLISTPOOL_H
