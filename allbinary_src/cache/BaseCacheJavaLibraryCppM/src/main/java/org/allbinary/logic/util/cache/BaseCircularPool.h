
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class JsType;
class NullUtil;
class CircularIndexUtil;
class JsMethod;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AllBinaryObjectFactoryInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BaseCircularPool
            : public virtual Object
         {


            
    public: BaseCircularPool();
        
    /*protected*/ public: CircularIndexUtil* circularIndexUtil;

    /*protected*/ public: std::vector<Object*> OBJECT_ARRAY;

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: Object* getNextInstance();

    public: void init(AllBinaryObjectFactoryInterface* allBinaryObjectFactoryInterface);

                //@Throws(Exception.constructor)
            
    public: Object* getInstance(int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASECIRCULARPOOL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/NullUtil.h>)
#include <org/allbinary/logic/NullUtil.h>
#endif
#if __has_include(<org/allbinary/util/CircularIndexUtil.h>)
#include <org/allbinary/util/CircularIndexUtil.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/logic/util/cache/AllBinaryObjectFactoryInterface.h")
#include "org/allbinary/logic/util/cache/AllBinaryObjectFactoryInterface.h"
#endif

        #endif
    
