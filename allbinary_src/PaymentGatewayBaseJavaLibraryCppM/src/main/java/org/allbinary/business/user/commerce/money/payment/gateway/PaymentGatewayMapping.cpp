
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"

class PaymentGatewayMapping
            : public Object
        , public TableMappingInterface {

    private: PaymentGatewayInterface* paymentGatewayInterface;

public: PaymentGatewayMapping(PaymentGatewayInterface* paymentGatewayInterface){
this->paymentGatewayInterface= paymentGatewayInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*>* toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayInterface->toHashMap(false);;
    
}


    public: BasicArrayList* toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayInterface->toVector(false);;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayInterface->getKey();
    
}


};

            

