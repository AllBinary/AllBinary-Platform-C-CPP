
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_H

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
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StringMaker
            : public Object
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
