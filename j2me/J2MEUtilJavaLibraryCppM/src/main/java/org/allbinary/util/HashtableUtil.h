
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Enumeration.h>
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class EnumerationUtil;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayListS;
class BasicArrayList;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HashtableUtil
            : public virtual Object
         {

    private: static HashtableUtil* instance_owner();
    private: static HashtableUtil* instance;

    public: static HashtableUtil* getInstance();


            
    public: HashtableUtil();
        
    private: EnumerationUtil* enumerationUtil;

    public: void putAll(ABHashtable<Object*, Object*>* fromHashtable, ABHashtable<Object*, Object*>* hashtable);

    public: std::vector<Object*> getKeysAsArray(ABHashtable<Object*, Object*>* hashtable);

    public: BasicArrayList* getKeysAsList(ABHashtable<Object*, Object*>* hashtable);

};

            


        #endif //ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H_COMPLETE
        #if __has_include(<java/util/Enumeration.h>)
#include <java/util/Enumeration.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListS.h")
#include "org/allbinary/util/BasicArrayListS.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

        #endif
    
