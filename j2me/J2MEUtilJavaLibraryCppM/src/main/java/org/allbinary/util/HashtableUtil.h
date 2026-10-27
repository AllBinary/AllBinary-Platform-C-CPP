
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
        



        #ifndef ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
        #define ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/EnumerationUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayListS.h"
#include "org/allbinary/util/BasicArrayList.h"

class HashtableUtil
            : public Object
         {

    private: static HashtableUtil* instance() { static std::unique_ptr<HashtableUtil> value(new HashtableUtil()); return value.get(); }

    public: static HashtableUtil* getInstance();

    private: EnumerationUtil* enumerationUtil = EnumerationUtil::getInstance();

    public: void putAll(ABHashtable<Object*, Object*>* fromHashtable, ABHashtable<Object*, Object*>* hashtable);

    public: std::vector<Object*> getKeysAsArray(ABHashtable<Object*, Object*>* hashtable);

    public: BasicArrayList* getKeysAsList(ABHashtable<Object*, Object*>* hashtable);

};

            


        #endif //ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
