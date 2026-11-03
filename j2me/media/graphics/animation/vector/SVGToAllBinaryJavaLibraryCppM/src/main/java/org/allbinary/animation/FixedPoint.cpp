
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_ANIMATION_FIXEDPOINT_CPP
        #define ORG_ALLBINARY_ANIMATION_FIXEDPOINT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/FixedPoint.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

FixedPoint::FixedPoint() : ONE(1<<16) {
        }
        auto FixedPoint::instance_owner() -> FixedPoint* { static std::unique_ptr<FixedPoint> value(new FixedPoint()); return value.get(); }
FixedPoint* FixedPoint::instance = FixedPoint::instance_owner();

    auto FixedPoint::getInstance() -> FixedPoint*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FixedPoint::instance;
    
}


    auto FixedPoint::toFixed(double val) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((val *65536.0));
    
}


    auto FixedPoint::toFixed(float val) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((val *65536.0));
    
}


    auto FixedPoint::mul(int32_t a, int32_t b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>(((a *b)>>16));
    
}


    auto FixedPoint::div(int32_t a, int32_t b) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return static_cast<int32_t>((((a)<<16) /b));
    
}


    auto FixedPoint::toInt(int32_t fixed) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return fixed>>16;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_FIXEDPOINT_CPP
