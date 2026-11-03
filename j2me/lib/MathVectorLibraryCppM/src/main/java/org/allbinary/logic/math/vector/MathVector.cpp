
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/vector/MathVector.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/vector/MathVectorInterface.h"


MathVector::MathVector(BasicDecimal* magnitudeBasicDecimal, int32_t direction){
this->magnitudeBasicDecimal= magnitudeBasicDecimal;
    
this->direction= direction;
    
}


    auto MathVector::getMagnitude() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->magnitudeBasicDecimal;
    
}


    auto MathVector::getDirection() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->direction;
    
}


    auto MathVector::getResult() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->resultBasicDecimal;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_CPP
