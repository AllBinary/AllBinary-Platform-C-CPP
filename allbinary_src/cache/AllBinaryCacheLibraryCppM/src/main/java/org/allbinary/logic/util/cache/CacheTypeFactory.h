
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheType.h"

class CacheTypeFactory
            : public Object
         {

    private: static CacheTypeFactory instance() { return CacheTypeFactory(); }

    public: static CacheTypeFactory getInstance();

    public: CacheType NO_CACHE = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

    public: CacheType CACHE = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

    public: CacheType SET = CacheType(StringUtil::getInstance().EMPTY_STRING, "Set");

    public: CacheType CACHE_VECTOR = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
