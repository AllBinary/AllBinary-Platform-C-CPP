
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_MODULES_PROCESSOR_ECHO_ECHOPAYMENTGATEWAYDATA_H
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_MODULES_PROCESSOR_ECHO_ECHOPAYMENTGATEWAYDATA_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class EchoPaymentGatewayData
            : public Object
         {

    public: static inline std::string TRANSACTION_TYPE = "transaction_type";

    public: static inline std::string MERCHANT_ECHO_ID = "merchant_echo_id";

    public: static inline std::string ORDER_TYPE = "order_type";

    public: static inline std::string MERCHANT_PIN = "merchant_pin";

    public: static inline std::string ISP_ECHO_ID = "isp_echo_id";

    public: static inline std::string ISP_PIN = "isp_pin";

    public: static inline std::string BILLING_IP_ADDRESS = "billing_ip_address";

    public: static inline std::string MERCHANT_EMAIL = "merchant_email";

    public: static inline std::string AUTHORIZATION = "authorization";

    public: static inline std::string BILLING_PREFIX = "billing_prefix";

    public: static inline std::string BILLING_NAME = "billing_name";

    public: static inline std::string BILLING_FIRST_NAME = "billing_first_name";

    public: static inline std::string BILLING_LAST_NAME = "billing_last_name";

    public: static inline std::string BILLING_COMPANY_NAME = "billing_company_name";

    public: static inline std::string BILLING_ADDRESS1 = "billing_address1";

    public: static inline std::string BILLING_ADDRESS2 = "billing_address2";

    public: static inline std::string BILLING_CITY = "billing_city";

    public: static inline std::string BILLING_STATE = "billing_state";

    public: static inline std::string BILLING_ZIP = "billing_zip";

    public: static inline std::string BILLING_COUNTRY = "billing_country";

    public: static inline std::string BILLING_PHONE = "billing_phone";

    public: static inline std::string BILLING_FAX = "billing_fax";

    public: static inline std::string BILLING_EMAIL = "billing_email";

    public: static inline std::string CC_NUMBER = "cc_number";

    public: static inline std::string CCEXP_MONTH = "ccexp_month";

    public: static inline std::string CCEXP_YEAR = "ccexp_year";

    public: static inline std::string CNP_RECURRING = "cnp_recurring";

    public: static inline std::string cnp_security = "cnp_security";

    public: static inline std::string COUNTER = "counter";

    public: static inline std::string DEBUG = "debug";

    public: static inline std::string EC_ACCOUNT = "ec_account";

    public: static inline std::string EC_ACCOUNT_TYPE = "ec_account_type";

    public: static inline std::string EC_ADDRESS1 = "ec_address1";

    public: static inline std::string EC_ADDRESS2 = "ec_address2";

    public: static inline std::string EC_BANK_NAME = "ec_bank_name";

    public: static inline std::string EC_CITY = "ec_city";

    public: static inline std::string EC_EMAIL = "ec_email";

    public: static inline std::string EC_FIRST_NAME = "ec_first_name";

    public: static inline std::string EC_ID_COUNTRY = "ec_id_country";

    public: static inline std::string EC_ID_EXP_MM = "ec_id_exp_mm";

    public: static inline std::string EC_ID_EXP_DD = "ec_id_exp_dd";

    public: static inline std::string EC_ID_EXP_YY = "ec_id_exp_yy";

    public: static inline std::string EC_ID_NUMBER = "ec_id_number";

    public: static inline std::string EC_ID_STATE = "ec_id_state";

    public: static inline std::string EC_ID_TYPE = "ec_id_type";

    public: static inline std::string EC_LAST_NAME = "ec_last_name";

    public: static inline std::string EC_BUSINESS_NAME = "ec_BUSINESS_NAME";

    public: static inline std::string EC_LICENSE_NUMBER = "ec_LICENSE_NUMBER";

    public: static inline std::string EC_LICENSE_STATE = "ec_LICENSE_STATE";

    public: static inline std::string EC_MERCHANT_REF = "ec_MERCHANT_REF";

    public: static inline std::string EC_NBDS_CODE = "ec_NBDS_CODE";

    public: static inline std::string EC_OTHER_NAME = "ec_other_name";

    public: static inline std::string EC_PAYEE = "ec_payee";

    public: static inline std::string EC_PAYMENT_TYPE = "ec_payment_type";

    public: static inline std::string EC_RT = "ec_rt";

    public: static inline std::string EC_SERIAL_NUMBER = "ec_serial_number";

    public: static inline std::string EC_STATE = "ec_state";

    public: static inline std::string EC_TRANSACTION_DT = "ec_transaction_dt";

    public: static inline std::string EC_ZIP = "ec_zip";

    public: static inline std::string GRAND_TOTAL = "grand_total";

    public: static inline std::string MERCHANT_TRACE_NBR = "merchant_trace_nbr";

    public: static inline std::string ORDER_NUMBER = "order_number";

    public: static inline std::string ORIGINAL_AMOUNT = "original_amount";

    public: static inline std::string ORIGINAL_TRANDATE_MM = "original_trandate_mm";

    public: static inline std::string ORIGINAL_TRANDATE_DD = "original_trandate_dd";

    public: static inline std::string ORIGINAL_TRANDATE_YYYY = "original_trandate_yyyy";

    public: static inline std::string ORIGINAL_REFERENCE = "original_reference";

    public: static inline std::string PRODUCT_DESCRIPTION = "product_description";

    public: static inline std::string PURCHASE_ORDER_NUMBER = "purchase_order_number";

    public: static inline std::string SALES_TAX = "sales_tax";

private: EchoPaymentGatewayData();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_MODULES_PROCESSOR_ECHO_ECHOPAYMENTGATEWAYDATA_H
