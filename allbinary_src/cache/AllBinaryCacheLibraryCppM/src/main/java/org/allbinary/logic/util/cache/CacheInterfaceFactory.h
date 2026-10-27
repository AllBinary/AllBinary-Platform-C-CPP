
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class CacheInterface;
class CacheType;
class CachePolicy;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CacheInterfaceFactory
            : public virtual Object
         {

                //@Throws(Exception.constructor)
            
    public: static CacheInterface* getInstance(CacheType* cacheType, CachePolicy* cachePolicy);

private: CacheInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H_COMPLETE
        #if __has_include("org/allbinary/logic/util/cache/CacheInterface.h")
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CacheType.h")
#include "org/allbinary/logic/util/cache/CacheType.h"
#endif
#if __has_include("org/allbinary/logic/util/cache/CachePolicy.h")
#include "org/allbinary/logic/util/cache/CachePolicy.h"
#endif

        #endif
    
