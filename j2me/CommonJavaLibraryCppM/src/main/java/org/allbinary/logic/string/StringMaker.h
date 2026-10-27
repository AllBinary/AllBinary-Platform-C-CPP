
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
class JsType;
class JsMethod;
class JsConstructor;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class StringMaker
            : public virtual Object
         {

    private: std::vector<char> charArray;

    private: int32_t currentLength= 0;

public: StringMaker();

    public: StringMaker* append(std::string string);

    public: StringMaker* appendchar(char c);

    public: StringMaker* appendCharArray(std::vector<char> charArray, int32_t start, int32_t end);

    public: StringMaker* appendbyte(int8_t b);

    public: StringMaker* appendshort(int16_t b);

    public: StringMaker* appendint(int32_t i);

    public: StringMaker* appendlong(int64_t l);

    public: StringMaker* appendfloat(float f);

    public: StringMaker* appendboolean(bool bool_);

    public: void ensureCapacity(int32_t minSize);

    public: int32_t min(int32_t value, int32_t value2);

    public: StringMaker* delete_(int32_t start, int32_t end);

    public: int32_t length();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif

        #endif
    
