
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
        



        #ifndef ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_H
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/Calendar.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StoreFrontData;
class EntryData;
class UserDbInitInfo;
class UserData;
class PaymentData;
class PaymentGatewayData;
class PaymentGatewayEncryptedMapping;
class PaymentGatewayInterface;
class PaymentGatewayInterfaceFactory;
class BasicPaymentType;
class BasicPaymentTypeUtil;
class PaymentGatewayIdGenerator;
class StdUtil;
class LogUtil;
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
class SuperCrypt;
class StringMaker;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PaymentGatewayEntity: public AbSqlBean, public PaymentGatewayEntityInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: const std::string tableName = "paymentgateways";

public: PaymentGatewayEntity();

    public: void add(PaymentGatewayInterface* paymentGatewayInterface);

    public: void update(PaymentGatewayInterface* paymentGatewayInterface);

    public: PaymentGatewayInterface* getPaymentGatewayInterface(std::string storeName, BasicPaymentType* paymentType);

    public: BasicArrayList* findPaymentTypeVectorByStore(std::string storeName);

    public: void remove(std::string storeName, BasicPaymentType* paymentType);

    public: std::string createTableStatement();

    public: std::string createTable();

    public: std::string dropTable();

};

            


        #endif //ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_TABLES_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAYENTITY_H_COMPLETE
        #if __has_include(<java/util/Calendar.h>)
#include <java/util/Calendar.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/business/context/modules/storefront/StoreFrontData.h>)
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>
#endif
#if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/init/db/UserDbInitInfo.h>)
#include <org/allbinary/business/init/db/UserDbInitInfo.h>
#endif
#if __has_include(<org/allbinary/business/user/UserData.h>)
#include <org/allbinary/business/user/UserData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/PaymentData.h>)
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayEncryptedMapping.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayEncryptedMapping.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h>)
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentType.h>
#endif
#if __has_include(<org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>)
#include <org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h>
#endif
#if __has_include(<org/allbinary/data/generator/PaymentGatewayIdGenerator.h>)
#include <org/allbinary/data/generator/PaymentGatewayIdGenerator.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/sql/AbSqlBean.h>)
#include <org/allbinary/logic/communication/sql/AbSqlBean.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/SuperCrypt.h>)
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include("org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h")
#include "org/allbinary/data/tables/user/commerce/money/payment/gateway/PaymentGatewayEntityInterface.h"
#endif

        #endif
    
