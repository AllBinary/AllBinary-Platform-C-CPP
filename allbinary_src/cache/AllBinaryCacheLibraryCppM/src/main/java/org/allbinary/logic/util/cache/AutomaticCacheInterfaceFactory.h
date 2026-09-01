
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AutomaticCacheInterface.h"
#include "CacheableInterfaceFactoryInterface.h"
#include "CacheType.h"
#include "CachePolicy.h"

class AutomaticCacheInterfaceFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static AutomaticCacheInterface getInstance(CacheableInterfaceFactoryInterface cacheableInterfaceFactoryInterface, CacheType cacheType, CachePolicy cachePolicy);

private: AutomaticCacheInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H
