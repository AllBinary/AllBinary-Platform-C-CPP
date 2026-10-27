
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MathUtil
            : public virtual Object
         {

    private: static MathUtil* instance_owner();
    private: static MathUtil* instance;

    public: static MathUtil* getInstance();


            
    public: MathUtil();
        
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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
