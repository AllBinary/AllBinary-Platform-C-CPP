
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentTypeUtil.h"

class BasicPaymentType
            : public Object
         {

    private: std::string name;

    private: std::string value;

    private: PaymentGatewayInterfaceFactoryInterface paymentGatewayInterfaceFactoryInterface;

    private: PaymentGatewayDomNodeFactoryInterface paymentGatewayDomNodeFactoryInterface;

protected: BasicPaymentType(std::string paymentMethod);

protected: BasicPaymentType(std::string paymentMethod, PaymentGatewayInterfaceFactoryInterface paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface paymentGatewayDomNodeFactoryInterface);

    private: void init(std::string paymentMethod);

    public: std::string getName();

    public: std::string getValue();

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterfaceFactoryInterface getPaymentGatewayInterfaceFactoryInterface();

                //@Throws(Exception.constructor)
            
    public: PaymentGatewayDomNodeFactoryInterface getPaymentGatewayDomNodeFactoryInterface();

    public: Object* getKey();

    public: BasicArrayList toVector();

    public: HashMap<any, any> toHashMap();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_TYPES_BASICPAYMENTTYPE_H
