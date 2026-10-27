
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class BasicArrayList;

class PaymentGatewayInterface;
class BasicPaymentType;
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayEntityInterface: public BasicDataTableInterface {

    public: virtual PaymentGatewayInterface* getPaymentGatewayInterface(std::string storeName, BasicPaymentType* paymentType) = 0;

    public: virtual BasicArrayList* findPaymentTypeVectorByStore(std::string storeName) = 0;

    public: virtual void remove(std::string storeName, BasicPaymentType* paymentType) = 0;

    public: virtual void add(PaymentGatewayInterface* paymentGatewayInterface) = 0;

    public: virtual void update(PaymentGatewayInterface* paymentGatewayInterface) = 0;

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITYINTERFACE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/data/tables/BasicDataTableInterface.h>)
#include <org/allbinary/data/tables/BasicDataTableInterface.h>
#endif

        #endif
    
