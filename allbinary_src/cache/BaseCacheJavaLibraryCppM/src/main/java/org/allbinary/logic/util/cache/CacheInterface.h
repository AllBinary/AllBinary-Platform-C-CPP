
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/CacheableInterface.h"

class CacheInterface {

                //@Throws(Exception.constructor)
            
    public: virtual void add(CacheableInterface* cacheableInterface) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void addArray(std::vector<CacheableInterface*> cacheableInterfaces) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void clear() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACE_H
