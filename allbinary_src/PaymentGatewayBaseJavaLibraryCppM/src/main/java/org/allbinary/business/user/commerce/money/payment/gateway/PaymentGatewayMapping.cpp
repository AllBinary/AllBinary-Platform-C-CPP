
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayInterface.h"

class PaymentGatewayMapping
            : public Object
        : public TableMappingInterface {
        

    private: paymentGatewayInterface: PaymentGatewayInterface;

public constructor (PaymentGatewayInterface paymentGatewayInterface){

            super();
        this.paymentGatewayInterface= paymentGatewayInterface;
    
}


                //@Throws(Exception.constructor)
            
    public HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentGatewayInterface!.toHashMap(false);;
    
}


    public Vector toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentGatewayInterface!.toVector(false);;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentGatewayInterface!.getKey();
    
}


};

            

