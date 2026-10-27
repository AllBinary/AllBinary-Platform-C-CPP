
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class PaymentGatewayData;
class PaymentGatewayInterfaceFactoryInterface;
class PaymentGatewayDomNodeFactoryInterface;
class StdUtil;
class AbPathData;
class Replace;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BasicPaymentTypeUtil;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicPaymentType
            : public virtual Object
         {

    private: std::string name;

    private: std::string value;

    private: PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface;

    private: PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface;

/*protected*/ public: BasicPaymentType(std::string paymentMethod);

/*protected*/ public: BasicPaymentType(std::string paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface);

    private: void init(std::string paymentMethod);

    public: std::string getName();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterfaceFactoryInterface* getPaymentGatewayInterfaceFactoryInterface();

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayDomNodeFactoryInterface* getPaymentGatewayDomNodeFactoryInterface();

    public: Object* getKey();

    public: BasicArrayList* toVector();

    public: HashMap<Object*, Object*>* toHashMap();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/allbinary/logic/string/regex/replace/Replace.h>)
#include <org/allbinary/logic/string/regex/replace/Replace.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include("org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h")
#include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"
#endif

        #endif
    
