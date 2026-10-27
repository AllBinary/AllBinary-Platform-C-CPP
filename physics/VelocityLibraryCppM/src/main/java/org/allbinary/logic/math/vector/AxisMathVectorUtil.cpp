
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/math/NoDecimalTrigTable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AxisMathVectorUtil
            : public Object
         {

    private: static AxisMathVectorUtil* instance() { static std::unique_ptr<AxisMathVectorUtil> value(new AxisMathVectorUtil()); return value.get(); }

    public: static AxisMathVectorUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AxisMathVectorUtil::instance();
    
}


    private: NoDecimalTrigTable* noDecimalTrigTable = NoDecimalTrigTable::getInstance();

    public: int64_t calculateX(int64_t magnitude, int32_t angle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->cos(angle) /10;
    
}


    public: int64_t calculateY(int64_t magnitude, int32_t angle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->sin(angle) /10;
    
}


    public: int64_t calculateZ(int64_t magnitude, int32_t otherAngle){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return magnitude *this->noDecimalTrigTable->sin(otherAngle) /10;
    
}


};

            

