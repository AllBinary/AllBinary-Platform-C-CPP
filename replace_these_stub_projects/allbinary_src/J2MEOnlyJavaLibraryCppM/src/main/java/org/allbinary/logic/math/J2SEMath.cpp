
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/J2SEMath.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

J2SEMath::J2SEMath() {
        }
        auto J2SEMath::instance_owner() -> J2SEMath* { static std::unique_ptr<J2SEMath> value(new J2SEMath()); return value.get(); }
J2SEMath* J2SEMath::instance = J2SEMath::instance_owner();

    auto J2SEMath::getInstance() -> J2SEMath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEMath::instance;
    
}


    auto J2SEMath::round(float value) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>(value);
    
}


    auto J2SEMath::abs(float value) -> float{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;;
    
}


    auto J2SEMath::absdouble(double value) -> double{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value < 0)
                        ?       
                                 -value
                                :

                            value;;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_CPP
