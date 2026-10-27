
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/util/cache/CacheType.h"

class CacheTypeFactory
            : public Object
         {

    private: static CacheTypeFactory* instance() { static std::unique_ptr<CacheTypeFactory> value(new CacheTypeFactory()); return value.get(); }

    public: static CacheTypeFactory* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CacheTypeFactory::instance();
    
}


    public: CacheType* NO_CACHE = new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING);

    public: CacheType* CACHE = new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING);

    public: CacheType* SET = new CacheType(StringUtil::getInstance()->EMPTY_STRING, "Set");

    public: CacheType* CACHE_VECTOR = new CacheType(StringUtil::getInstance()->EMPTY_STRING, StringUtil::getInstance()->EMPTY_STRING);

};

            

