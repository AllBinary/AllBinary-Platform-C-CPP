
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
        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "EnumerationUtil.h"
#include "ABHashtable.h"
#include "BasicArrayListS.h"
#include "BasicArrayList.h"

class HashtableUtil
            : public Object
         {

    private: static HashtableUtil instance() { return HashtableUtil(); }

    public: static HashtableUtil getInstance();

    private: const EnumerationUtil enumerationUtil = EnumerationUtil::getInstance();

    public: void putAll(ABHashtable<Object*, Object*> fromHashtable, ABHashtable<Object*, Object*> hashtable);

    public: std::vector<Object*> getKeysAsArray(ABHashtable<Object*, Object*> hashtable);

    public: BasicArrayList getKeysAsList(ABHashtable<Object*, Object*> hashtable);

};

            


        #endif //ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
