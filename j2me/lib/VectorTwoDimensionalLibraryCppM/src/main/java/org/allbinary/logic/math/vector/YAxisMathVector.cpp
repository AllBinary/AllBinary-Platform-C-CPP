
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_YAXISMATHVECTOR_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_YAXISMATHVECTOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/vector/YAxisMathVector.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/vector/MathVector.h"
#include "org/allbinary/logic/math/vector/YAxisMathVectorUtil.h"


YAxisMathVector::YAxisMathVector(BasicDecimal* magnitudeBasicDecimal, int32_t direction) : MathVector(magnitudeBasicDecimal, direction){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->calculate();
    
}


    auto YAxisMathVector::getResult() -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resultBasicDecimal;
    
}


    auto YAxisMathVector::calculate() -> void{

    int64_t result = YAxisMathVectorUtil::calculate(this->getMagnitude()->getUnscaled(), this->getDirection());;
    
this->resultBasicDecimal= new BasicDecimal(result);
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_YAXISMATHVECTOR_CPP
