
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MathVectorInterface.h"

class MathVector
            : public Object
        : public MathVectorInterface {

    private: BasicDecimal magnitudeBasicDecimal;

    private: int32_t direction;

    protected: BasicDecimal resultBasicDecimal;

public: MathVector(BasicDecimal magnitudeBasicDecimal, int32_t direction){
this->magnitudeBasicDecimal= magnitudeBasicDecimal;
    
this->direction= direction;
    
}


    public: BasicDecimal getMagnitude(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->magnitudeBasicDecimal;
    
}


    public: int32_t getDirection(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->direction;
    
}


    public: BasicDecimal getResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->resultBasicDecimal;
    
}


};

            

