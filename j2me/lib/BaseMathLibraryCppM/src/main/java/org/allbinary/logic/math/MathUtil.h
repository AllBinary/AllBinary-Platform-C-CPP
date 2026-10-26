
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H

            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MathUtil
            : public Object
         {

    private: static MathUtil instance() { return MathUtil(); }

    public: static MathUtil getInstance();

    public: int32_t getTotalDigits(int32_t digits);

    public: int32_t sqrt(int32_t value);

    private: const int32_t ACCURACY = 100;

    public: double sqrtd(int32_t x);

    public: int32_t abs(int32_t value);

    public: int64_t abslong(int64_t value);

    public: int32_t min(int32_t value, int32_t value2);

    public: int32_t max(int32_t value, int32_t value2);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
