
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/MathUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MathUtil::MathUtil() {
        }
        auto MathUtil::instance_owner() -> MathUtil* { static std::unique_ptr<MathUtil> value(new MathUtil()); return value.get(); }
MathUtil* MathUtil::instance = MathUtil::instance_owner();

    auto MathUtil::getInstance() -> MathUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MathUtil::instance;
    
}


    auto MathUtil::getTotalDigits(int32_t digits) -> int32_t{

    int32_t total = 0;;
    

        while(digits > 0)
        {
digits= digits /10;
    
total++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return total;
    
}


    auto MathUtil::sqrt(int32_t value) -> int32_t{

                        if(value <= 1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return value;
    

                                    }
                                

    int32_t accumulated = value>>1;;
    

    int32_t result = (accumulated +(value /accumulated))>>1;;
    

        do
        {
accumulated= result;
    
result= (accumulated +(value /accumulated))>>1;
    
}

        while(accumulated > result);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return accumulated;
    
}


    auto MathUtil::sqrtd(int32_t x) -> double{

                        if(x == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0.0;
    

                                    }
                                

                        if(x < 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1.0;
    

                                    }
                                

    double result = x;;
    




                        for (
    int32_t index = 0;index < this->ACCURACY; index++)
        {
result= (result +(x /result)) /2;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    auto MathUtil::abs(int32_t value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    auto MathUtil::abslong(int64_t value) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;

    ;
    
}


    auto MathUtil::min(int32_t value, int32_t value2) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value <= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


    auto MathUtil::max(int32_t value, int32_t value2) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value >= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_CPP
