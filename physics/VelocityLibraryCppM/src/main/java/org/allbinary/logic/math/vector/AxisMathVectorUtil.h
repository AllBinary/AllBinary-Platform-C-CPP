
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H
        #define ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AxisMathVectorUtil
            : public Object
         {

    private: static AxisMathVectorUtil instance() { return AxisMathVectorUtil(); }

    public: static AxisMathVectorUtil getInstance();

    private: const NoDecimalTrigTable noDecimalTrigTable = NoDecimalTrigTable::getInstance();

    public: int64_t calculateX(int64_t magnitude, int32_t angle);

    public: int64_t calculateY(int64_t magnitude, int32_t angle);

    public: int64_t calculateZ(int64_t magnitude, int32_t otherAngle);

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H
