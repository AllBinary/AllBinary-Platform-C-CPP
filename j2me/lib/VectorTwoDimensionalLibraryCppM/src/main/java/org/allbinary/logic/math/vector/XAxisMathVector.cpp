
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
        



#include <org/allbinary/logic/math/BasicDecimal.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "MathVector.h"
#include "YAxisMathVectorUtil.h"

class XAxisMathVector: public MathVector {
        

public constructor (BasicDecimal magnitudeBasicDecimal, int32_t direction){
            super(magnitudeBasicDecimal, direction);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.calculate();
    
}


    calculate(){

    result: int64_t = YAxisMathVectorUtil.calculate(this.getMagnitude()!.getUnscaled(), this.getDirection())!;;
    
this.resultBasicDecimal= new BasicDecimal(result);
    
}


};

            

