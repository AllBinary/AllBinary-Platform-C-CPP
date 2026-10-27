
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_ARRAYUTIL_H
        #define ORG_ALLBINARY_UTIL_ARRAYUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/System.h"
        
class JsType;
class MathUtil;
class StringMaker;
class StringUtil;
class CommonSeps;
class JsMethod;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ArrayUtil
            : public virtual Object
         {

    private: static ArrayUtil* instance_owner();
    private: static ArrayUtil* instance;

    public: static ArrayUtil* getInstance();


            
    public: ArrayUtil();
        
    private: MathUtil* mathUtil;

    public: std::vector<Object*> copyOf(std::vector<Object*> original, int32_t newLength);

    public: std::vector<Object*> copyOfType(std::vector<Object*> original, int32_t newLength, Class* newType);

    public: std::vector<int8_t> copyOfbyte(std::vector<int8_t> original, int32_t newLength);

    public: std::vector<int16_t> copyOfshort(std::vector<int16_t> original, int32_t newLength);

    public: std::vector<int32_t> copyOfint(std::vector<int32_t> original, int32_t newLength);

    public: std::vector<int64_t> copyOflong(std::vector<int64_t> original, int32_t newLength);

    public: std::vector<char> copyOfchar(std::vector<char> original, int32_t newLength);

    public: std::vector<float> copyOffloat(std::vector<float> original, int32_t newLength);

    public: std::vector<double> copyOfdouble(std::vector<double> original, int32_t newLength);

    public: std::vector<bool> copyOfboolean(std::vector<bool> original, int32_t newLength);

    public: void reverse(std::vector<int32_t> intArray);

    public: void flip(std::vector<int32_t> intArray, int32_t width, int32_t height);

    public: std::string toStringFromTwoDimensionaArray(std::vector<std::vector<int32_t>> twoDimensionalIntArray);

    public: std::string toStringFromObjectArray(std::vector<Object*> objectArray);

    public: std::string toStringFromByteArray(std::vector<int8_t> byteArray);

};

            


        #endif //ORG_ALLBINARY_UTIL_ARRAYUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ARRAYUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ARRAYUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/math/MathUtil.h>)
#include <org/allbinary/logic/math/MathUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif

        #endif
    
