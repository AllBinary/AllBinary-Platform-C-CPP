
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StoreFront;
class StringMaker;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h"
class PaymentGateway;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayPrimaryKey
            : public virtual Object
        , public virtual java::io::Serializable {

    private: std::string storeName;

    private: std::string name;

public: PaymentGatewayPrimaryKey(std::string storeName, std::string gatewayName);

    public: std::string getStoreName();

    public: void setStoreName(std::string storeName);

    public: std::string getName();

    public: void setName(std::string name);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYPRIMARYKEY_H_COMPLETE
        #if __has_include(<org/allbinary/business/context/modules/storefront/StoreFront.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFront.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/Serializable.h"
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/gateway/PaymentGateway.h")
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGateway.h"
#endif

        #endif
    
