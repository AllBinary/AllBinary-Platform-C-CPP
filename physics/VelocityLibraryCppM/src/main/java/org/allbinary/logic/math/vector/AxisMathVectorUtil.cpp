
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AxisMathVectorUtil::AxisMathVectorUtil() : noDecimalTrigTable(NoDecimalTrigTable::getInstance()) {
        }
        auto AxisMathVectorUtil::instance_owner() -> AxisMathVectorUtil* { static std::unique_ptr<AxisMathVectorUtil> value(new AxisMathVectorUtil()); return value.get(); }
AxisMathVectorUtil* AxisMathVectorUtil::instance = AxisMathVectorUtil::instance_owner();

    auto AxisMathVectorUtil::getInstance() -> AxisMathVectorUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AxisMathVectorUtil::instance;
    
}


    auto AxisMathVectorUtil::calculateX(int64_t magnitude, int32_t angle) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->cos(angle) /10;
    
}


    auto AxisMathVectorUtil::calculateY(int64_t magnitude, int32_t angle) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->sin(angle) /10;
    
}


    auto AxisMathVectorUtil::calculateZ(int64_t magnitude, int32_t otherAngle) -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->sin(otherAngle) /10;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_CPP
