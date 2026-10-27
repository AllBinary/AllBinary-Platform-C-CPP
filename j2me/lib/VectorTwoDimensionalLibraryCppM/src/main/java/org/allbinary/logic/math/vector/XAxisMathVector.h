
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_XAXISMATHVECTOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_XAXISMATHVECTOR_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/vector/MathVector.h"
#include "org/allbinary/logic/math/vector/YAxisMathVectorUtil.h"

class XAxisMathVector: public MathVector {

public: XAxisMathVector(BasicDecimal* magnitudeBasicDecimal, int32_t direction);

    private: void calculate();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_XAXISMATHVECTOR_H
