
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
        



        #ifndef ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H
        #define ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class StringMaker;
class CommonLabels;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class CircularIndexUtil
            : public virtual Object
         {

    private: static CircularIndexUtil* NULL_CIRCULAR_INDEX_UTIL_owner();
    public: static CircularIndexUtil* NULL_CIRCULAR_INDEX_UTIL;

    public: static CircularIndexUtil* createInstance(int32_t max);

    public: static CircularIndexUtil* createInstanceAt(int32_t index, int32_t max);

    private: int32_t index = 0;

    private: int32_t lastIndex = 0;

    private: int32_t size = 0;

private: CircularIndexUtil(int32_t index, int32_t size);

    public: int32_t next();

    public: int32_t previous();

    public: void setIndex(int32_t index);

    public: int32_t getIndex();

    public: void setSize(int32_t size);

    public: int32_t getSize();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif

        #endif
    
