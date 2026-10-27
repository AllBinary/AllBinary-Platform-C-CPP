
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_H
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class BasicDecimal;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/vector/MathVectorInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MathVector
            : public virtual Object
        , public MathVectorInterface {

    private: BasicDecimal* magnitudeBasicDecimal;

    private: int32_t direction;

    /*protected*/ public: BasicDecimal* resultBasicDecimal;

public: MathVector(BasicDecimal* magnitudeBasicDecimal, int32_t direction);

    public: BasicDecimal* getMagnitude();

    public: int32_t getDirection();

    public: BasicDecimal* getResult();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_MATHVECTOR_H_COMPLETE
        #if __has_include(<org/allbinary/logic/math/BasicDecimal.h>)
#include <org/allbinary/logic/math/BasicDecimal.h>
#endif
#if __has_include("org/allbinary/logic/math/vector/MathVectorInterface.h")
#include "org/allbinary/logic/math/vector/MathVectorInterface.h"
#endif

        #endif
    
