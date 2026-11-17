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
// package org.allbinary.business.user.commerce.money.payment.gateway.modules.processor.authorizenet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AuthorizeNetData AuthorizeNetData;
struct AuthorizeNetData {
    char unused;
};

const char* AuthorizeNetData_X_LOGIN = "x_login";
const char* AuthorizeNetData_X_TRAN_KEY = "x_tran_key";
const char* AuthorizeNetData_X_VERSION = "x_version";
const char* AuthorizeNetData_X_TEST_REQUEST = "x_test_request";
const char* AuthorizeNetData_X_RELAY_RESPONSE = "x_relay_response";
const char* AuthorizeNetData_X_DUPLICATE_WINDOW = "x_duplicate_window";
const char* AuthorizeNetData_X_FIRST_NAME = "x_first_name";
const char* AuthorizeNetData_X_LAST_NAME = "x_last_name";
const char* AuthorizeNetData_X_COMPANY = "x_company";
const char* AuthorizeNetData_X_ADDRESS = "x_address";
const char* AuthorizeNetData_X_CITY = "x_city";
const char* AuthorizeNetData_X_STATE = "x_state";
const char* AuthorizeNetData_X_ZIP = "x_zip";
const char* AuthorizeNetData_X_COUNTRY = "x_country";
const char* AuthorizeNetData_X_PHONE = "x_phone";
const char* AuthorizeNetData_X_FAX = "x_fax";
const char* AuthorizeNetData_X_CUST_ID = "x_cust_id";
const char* AuthorizeNetData_X_CUSTOMER_IP = "x_customer_ip";
const char* AuthorizeNetData_X_CUSTOMER_TAX_ID = "x_customer_tax_id";
const char* AuthorizeNetData_X_EMAIL_CUSTOMER = "x_email_customer";
const char* AuthorizeNetData_X_EMAIL = "x_email";
const char* AuthorizeNetData_X_EMAIL_MERCHANT = "x_email_merchant";
const char* AuthorizeNetData_X_INVOICE_NUM = "x_invoice_num";
const char* AuthorizeNetData_X_DESCRIPTION = "x_description";
const char* AuthorizeNetData_X_SHIP_TO_FIRST_NAME = "x_ship_to_first_name";
const char* AuthorizeNetData_X_SHIP_TO_LAST_NAME = "x_ship_to_last_name";
const char* AuthorizeNetData_X_SHIP_TO_COMPANY = "x_ship_to_company";
const char* AuthorizeNetData_X_SHIP_TO_ADDRESS = "x_ship_to_address";
const char* AuthorizeNetData_X_SHIP_TO_CITY = "x_ship_to_city";
const char* AuthorizeNetData_X_SHIP_TO_STATE = "x_ship_to_state";
const char* AuthorizeNetData_X_SHIP_TO_ZIP = "x_ship_to_zip";
const char* AuthorizeNetData_X_SHIP_TO_COUNTRY = "x_ship_to_country";
const char* AuthorizeNetData_X_AMOUNT = "x_amount";
const char* AuthorizeNetData_X_CURRENCY_CODE = "x_currency_code";
const char* AuthorizeNetData_X_METHOD = "x_method";
const char* AuthorizeNetData_X_TYPE = "x_type";
const char* AuthorizeNetData_X_RECURRING_BILLING = "x_recurring_billing";
const char* AuthorizeNetData_X_BANK_ABA_CODE = "x_bank_aba_code";
const char* AuthorizeNetData_X_BANK_ACCT_NUM = "x_bank_acct_num";
const char* AuthorizeNetData_X_BANK_ACCT_TYPE = "x_bank_acct_type";
const char* AuthorizeNetData_X_BANK_NAME = "x_bank_name";
const char* AuthorizeNetData_X_BANK_ACCT_NAME = "x_bank_acct_name";
const char* AuthorizeNetData_X_ECHECK_TYPE = "x_echeck_type";
const char* AuthorizeNetData_X_CARD_NUM = "x_card_num";
const char* AuthorizeNetData_X_EXP_DATE = "x_exp_date";
const char* AuthorizeNetData_X_CARD_CODE = "x_card_code";
const char* AuthorizeNetData_X_TRANS_ID = "x_trans_id";
const char* AuthorizeNetData_X_AUTH_CODE = "x_auth_code";
const char* AuthorizeNetData_X_PO_NUM = "x_po_num";
const char* AuthorizeNetData_X_TAX = "x_tax";
const char* AuthorizeNetData_X_TAX_EXEMPT = "x_tax_exempt";
const char* AuthorizeNetData_X_FREIGHT = "x_freight";
const char* AuthorizeNetData_X_DUTY = "x_duty";

AuthorizeNetData* AuthorizeNetData_new(void);

void AuthorizeNetData_init(AuthorizeNetData* this);


void AuthorizeNetData_init(AuthorizeNetData* this) {
}

AuthorizeNetData* AuthorizeNetData_new(void) {
    AuthorizeNetData* this = calloc(1, sizeof(AuthorizeNetData));
    AuthorizeNetData_init(this);
    return this;
}

