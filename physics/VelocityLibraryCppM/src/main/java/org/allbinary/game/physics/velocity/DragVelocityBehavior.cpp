
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
        #include "VelocityBehaviorBase.h"
#include "BasicVelocityProperties.h"

class DragVelocityBehavior: public VelocityBehaviorBase {
        

    public static const instance: DragVelocityBehavior = new DragVelocityBehavior();

    public reduce(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator){

                        if(velocityProperties!.getVelocityXBasicDecimalP()!.getUnscaled() != 0)
                        
                                    {
                                    
    basicDecimal: BasicDecimal = velocityProperties!.getVelocityXBasicDecimalP()!;;
    
basicDecimal!.multiplyint(nominator);
    
basicDecimal!.divideint(denominator);
    

                                    }
                                

                        if(velocityProperties!.getVelocityYBasicDecimalP()!.getUnscaled() != 0)
                        
                                    {
                                    
    basicDecimal: BasicDecimal = velocityProperties!.getVelocityYBasicDecimalP()!;;
    
basicDecimal!.multiplyint(nominator);
    
basicDecimal!.divideint(denominator);
    

                                    }
                                
}


    public reduceX(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator){

    basicDecimal: BasicDecimal = velocityProperties!.getVelocityXBasicDecimalP()!;;
    

                        if(basicDecimal!.getUnscaled() != 0)
                        
                                    {
                                    basicDecimal!.multiplyint(nominator);
    
basicDecimal!.divideint(denominator);
    

                                    }
                                
}


    public reduceY(BasicVelocityProperties velocityProperties, int32_t nominator, int32_t denominator){

                        if(velocityProperties!.getVelocityYBasicDecimalP()!.getUnscaled() != 0)
                        
                                    {
                                    
    basicDecimal: BasicDecimal = velocityProperties!.getVelocityYBasicDecimalP()!;;
    
basicDecimal!.multiplyint(nominator);
    
basicDecimal!.divideint(denominator);
    

                                    }
                                
}


};

            

