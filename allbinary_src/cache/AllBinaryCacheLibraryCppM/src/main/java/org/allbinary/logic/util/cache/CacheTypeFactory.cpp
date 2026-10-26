
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheType.h"

class CacheTypeFactory
            : public Object
         {

    private: static CacheTypeFactory instance() { return CacheTypeFactory(); }

    public: static CacheTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CacheTypeFactory::instance();
    
}


    public: CacheType NO_CACHE = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

    public: CacheType CACHE = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

    public: CacheType SET = CacheType(StringUtil::getInstance().EMPTY_STRING, "Set");

    public: CacheType CACHE_VECTOR = CacheType(StringUtil::getInstance().EMPTY_STRING, StringUtil::getInstance().EMPTY_STRING);

};

            

