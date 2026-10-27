
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/util/cache/CacheTypeFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/CacheType.h"


CacheTypeFactory::CacheTypeFactory() : NO_CACHE(new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING)), CACHE(new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING)), SET(new CacheType(StringUtil::getInstance()->EMPTY_STRING, "Set")), CACHE_VECTOR(new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING)) {
        }
        auto CacheTypeFactory::instance_owner() -> CacheTypeFactory* { static std::unique_ptr<CacheTypeFactory> value(new CacheTypeFactory()); return value.get(); }
CacheTypeFactory* CacheTypeFactory::instance = CacheTypeFactory::instance_owner();

    auto CacheTypeFactory::getInstance() -> CacheTypeFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CacheTypeFactory::instance;
    
}




        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_CPP
