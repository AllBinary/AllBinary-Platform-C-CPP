
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H

#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>

      
#include <org/allbinary/data/tables/BasicDataTableInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PaymentGatewayEntityInterface: public BasicDataTableInterface {
        

    PaymentGatewayInterface getPaymentGatewayInterface(string storeName, BasicPaymentType paymentType);

    Vector findPaymentTypeVectorByStore(string storeName);

    remove(string storeName, BasicPaymentType paymentType);

    add(PaymentGatewayInterface paymentGatewayInterface);

    update(PaymentGatewayInterface paymentGatewayInterface);

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H
