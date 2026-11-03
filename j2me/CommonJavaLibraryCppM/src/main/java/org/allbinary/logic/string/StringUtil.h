
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StringUtil
            : public virtual Object
         {

    private: static StringUtil* instance_owner();
    private: static StringUtil* instance;

    public: static StringUtil* getInstance();

    public: const std::string INIT_STRING;

    public: const std::string NULL_STRING = "null";

    public: const std::string EMPTY_STRING = "";

    public: std::vector<std::string> ONE_EMPTY_STRING_ARRAY;

    public: std::vector<std::vector<std::string>> ONE_EMPTY_STRING_ARRAY_OF_ARRAYS;

    private: std::vector<std::string> stringArray;

private: StringUtil();

    public: std::string getNonNull(std::string string);

    public: std::vector<std::string> getArrayInstance();

    public: int32_t count(std::string string, char aChar);

    public: std::string toString(Object* anyType);
    public: std::string toString(const std::string& anyType) { return toString(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> std::string toString(BoxValue anyType) { return toString(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> std::string toString(const std::vector<BoxElement>& anyType) { return toString(JavaBoxes::toObject(anyType)); }

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
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
    
