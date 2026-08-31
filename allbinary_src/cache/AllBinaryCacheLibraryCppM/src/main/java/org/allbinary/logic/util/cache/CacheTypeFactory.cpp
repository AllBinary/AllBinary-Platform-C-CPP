
        /* Generated Code Do Not Modify */
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheType.h"

class CacheTypeFactory
            : public Object
         {
        

    private: static const instance: CacheTypeFactory = new CacheTypeFactory();

    public static CacheTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CacheTypeFactory.instance;
    
}


    public NO_CACHE: CacheType = new CacheType(StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING);

    public CACHE: CacheType = new CacheType(StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING);

    public SET: CacheType = new CacheType(StringUtil.getInstance()!.EMPTY_STRING, "Set");

    public CACHE_VECTOR: CacheType = new CacheType(StringUtil.getInstance()!.EMPTY_STRING, StringUtil.getInstance()!.EMPTY_STRING);

};

            

