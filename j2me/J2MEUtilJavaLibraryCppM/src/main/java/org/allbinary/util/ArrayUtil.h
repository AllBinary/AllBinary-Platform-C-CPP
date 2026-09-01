
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_ARRAYUTIL_H
        #define ORG_ALLBINARY_UTIL_ARRAYUTIL_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Class.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ArrayUtil
            : public Object
         {

    private: static ArrayUtil instance() { return ArrayUtil(); }

    public: static ArrayUtil getInstance();

    private: const MathUtil mathUtil = MathUtil::getInstance();

    public: std::vector<Object*> copyOf(std::vector<Object*> original, int32_t newLength);

    public: std::vector<Object*> copyOfType(std::vector<Object*> original, int32_t newLength, Function newType);

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
