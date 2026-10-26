
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheableInterfaceFactoryInterface.h"
#include "BasicArrayListCacheable.h"
#include "CacheableInterface.h"

class BasicArrayListCacheableInterfaceFactory
            : public Object
        : public CacheableInterfaceFactoryInterface {

                //@Throws(Exception.constructor)
            
    public: CacheableInterface getInstance(Object* key);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H
