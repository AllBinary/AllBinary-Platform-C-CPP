/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.business.user.commerce.money.payment.gateway.modules.processor.echo

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct EchoPaymentGatewayData EchoPaymentGatewayData;
struct EchoPaymentGatewayData {
    char unused;
};

const char* EchoPaymentGatewayData_TRANSACTION_TYPE = "transaction_type";
const char* EchoPaymentGatewayData_MERCHANT_ECHO_ID = "merchant_echo_id";
const char* EchoPaymentGatewayData_ORDER_TYPE = "order_type";
const char* EchoPaymentGatewayData_MERCHANT_PIN = "merchant_pin";
const char* EchoPaymentGatewayData_ISP_ECHO_ID = "isp_echo_id";
const char* EchoPaymentGatewayData_ISP_PIN = "isp_pin";
const char* EchoPaymentGatewayData_BILLING_IP_ADDRESS = "billing_ip_address";
const char* EchoPaymentGatewayData_MERCHANT_EMAIL = "merchant_email";
const char* EchoPaymentGatewayData_AUTHORIZATION = "authorization";
const char* EchoPaymentGatewayData_BILLING_PREFIX = "billing_prefix";
const char* EchoPaymentGatewayData_BILLING_NAME = "billing_name";
const char* EchoPaymentGatewayData_BILLING_FIRST_NAME = "billing_first_name";
const char* EchoPaymentGatewayData_BILLING_LAST_NAME = "billing_last_name";
const char* EchoPaymentGatewayData_BILLING_COMPANY_NAME = "billing_company_name";
const char* EchoPaymentGatewayData_BILLING_ADDRESS1 = "billing_address1";
const char* EchoPaymentGatewayData_BILLING_ADDRESS2 = "billing_address2";
const char* EchoPaymentGatewayData_BILLING_CITY = "billing_city";
const char* EchoPaymentGatewayData_BILLING_STATE = "billing_state";
const char* EchoPaymentGatewayData_BILLING_ZIP = "billing_zip";
const char* EchoPaymentGatewayData_BILLING_COUNTRY = "billing_country";
const char* EchoPaymentGatewayData_BILLING_PHONE = "billing_phone";
const char* EchoPaymentGatewayData_BILLING_FAX = "billing_fax";
const char* EchoPaymentGatewayData_BILLING_EMAIL = "billing_email";
const char* EchoPaymentGatewayData_CC_NUMBER = "cc_number";
const char* EchoPaymentGatewayData_CCEXP_MONTH = "ccexp_month";
const char* EchoPaymentGatewayData_CCEXP_YEAR = "ccexp_year";
const char* EchoPaymentGatewayData_CNP_RECURRING = "cnp_recurring";
const char* EchoPaymentGatewayData_cnp_security = "cnp_security";
const char* EchoPaymentGatewayData_COUNTER = "counter";
const char* EchoPaymentGatewayData_DEBUG = "debug";
const char* EchoPaymentGatewayData_EC_ACCOUNT = "ec_account";
const char* EchoPaymentGatewayData_EC_ACCOUNT_TYPE = "ec_account_type";
const char* EchoPaymentGatewayData_EC_ADDRESS1 = "ec_address1";
const char* EchoPaymentGatewayData_EC_ADDRESS2 = "ec_address2";
const char* EchoPaymentGatewayData_EC_BANK_NAME = "ec_bank_name";
const char* EchoPaymentGatewayData_EC_CITY = "ec_city";
const char* EchoPaymentGatewayData_EC_EMAIL = "ec_email";
const char* EchoPaymentGatewayData_EC_FIRST_NAME = "ec_first_name";
const char* EchoPaymentGatewayData_EC_ID_COUNTRY = "ec_id_country";
const char* EchoPaymentGatewayData_EC_ID_EXP_MM = "ec_id_exp_mm";
const char* EchoPaymentGatewayData_EC_ID_EXP_DD = "ec_id_exp_dd";
const char* EchoPaymentGatewayData_EC_ID_EXP_YY = "ec_id_exp_yy";
const char* EchoPaymentGatewayData_EC_ID_NUMBER = "ec_id_number";
const char* EchoPaymentGatewayData_EC_ID_STATE = "ec_id_state";
const char* EchoPaymentGatewayData_EC_ID_TYPE = "ec_id_type";
const char* EchoPaymentGatewayData_EC_LAST_NAME = "ec_last_name";
const char* EchoPaymentGatewayData_EC_BUSINESS_NAME = "ec_BUSINESS_NAME";
const char* EchoPaymentGatewayData_EC_LICENSE_NUMBER = "ec_LICENSE_NUMBER";
const char* EchoPaymentGatewayData_EC_LICENSE_STATE = "ec_LICENSE_STATE";
const char* EchoPaymentGatewayData_EC_MERCHANT_REF = "ec_MERCHANT_REF";
const char* EchoPaymentGatewayData_EC_NBDS_CODE = "ec_NBDS_CODE";
const char* EchoPaymentGatewayData_EC_OTHER_NAME = "ec_other_name";
const char* EchoPaymentGatewayData_EC_PAYEE = "ec_payee";
const char* EchoPaymentGatewayData_EC_PAYMENT_TYPE = "ec_payment_type";
const char* EchoPaymentGatewayData_EC_RT = "ec_rt";
const char* EchoPaymentGatewayData_EC_SERIAL_NUMBER = "ec_serial_number";
const char* EchoPaymentGatewayData_EC_STATE = "ec_state";
const char* EchoPaymentGatewayData_EC_TRANSACTION_DT = "ec_transaction_dt";
const char* EchoPaymentGatewayData_EC_ZIP = "ec_zip";
const char* EchoPaymentGatewayData_GRAND_TOTAL = "grand_total";
const char* EchoPaymentGatewayData_MERCHANT_TRACE_NBR = "merchant_trace_nbr";
const char* EchoPaymentGatewayData_ORDER_NUMBER = "order_number";
const char* EchoPaymentGatewayData_ORIGINAL_AMOUNT = "original_amount";
const char* EchoPaymentGatewayData_ORIGINAL_TRANDATE_MM = "original_trandate_mm";
const char* EchoPaymentGatewayData_ORIGINAL_TRANDATE_DD = "original_trandate_dd";
const char* EchoPaymentGatewayData_ORIGINAL_TRANDATE_YYYY = "original_trandate_yyyy";
const char* EchoPaymentGatewayData_ORIGINAL_REFERENCE = "original_reference";
const char* EchoPaymentGatewayData_PRODUCT_DESCRIPTION = "product_description";
const char* EchoPaymentGatewayData_PURCHASE_ORDER_NUMBER = "purchase_order_number";
const char* EchoPaymentGatewayData_SALES_TAX = "sales_tax";

EchoPaymentGatewayData* EchoPaymentGatewayData_new(void);

void EchoPaymentGatewayData_init(EchoPaymentGatewayData* this);


void EchoPaymentGatewayData_init(EchoPaymentGatewayData* this) {
}

EchoPaymentGatewayData* EchoPaymentGatewayData_new(void) {
    EchoPaymentGatewayData* this = calloc(1, sizeof(EchoPaymentGatewayData));
    EchoPaymentGatewayData_init(this);
    return this;
}

