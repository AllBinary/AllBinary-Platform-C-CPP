
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENCRYPTEDMAPPING_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENCRYPTEDMAPPING_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentGatewayInterface.h"

class PaymentGatewayEncryptedMapping
            : public Object
        : public TableMappingInterface {

    private: PaymentGatewayInterface paymentGatewayInterface;

public: PaymentGatewayEncryptedMapping(PaymentGatewayInterface paymentGatewayInterface);

                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap();

    public: BasicArrayList toVector();

                //@Throws(Exception.constructor)
            
    public: Object* getKey();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENCRYPTEDMAPPING_H
