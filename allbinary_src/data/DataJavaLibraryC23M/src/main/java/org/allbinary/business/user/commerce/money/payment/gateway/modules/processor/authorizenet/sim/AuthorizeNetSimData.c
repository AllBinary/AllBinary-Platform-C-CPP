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
// package org.allbinary.business.user.commerce.money.payment.gateway.modules.processor.authorizenet.sim

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AuthorizeNetSimData AuthorizeNetSimData;
struct AuthorizeNetSimData {
    char unused;
};

const char* AuthorizeNetSimData_X_FP_HASH = "x_fp_hash";
const char* AuthorizeNetSimData_X_FP_SEQUENCE = "x_fp_sequence";
const char* AuthorizeNetSimData_X_FP_TIMESTAMP = "x_fp_timestamp";
const char* AuthorizeNetSimData_X_SHOW_FORM = "x_show_form";
const char* AuthorizeNetSimData_X_HEADER_HTML_PAYMENT_FORM = "x_header_html_payment_form";
const char* AuthorizeNetSimData_X_FOOTER_HTML_PAYMENT_FORM = "x_footer_html_payment_form";
const char* AuthorizeNetSimData_X_HEADER_HTML_RECEIPT = "x_header_html_receipt";
const char* AuthorizeNetSimData_X_FOOTER_HTML_RECEIPT = "x_footer_html_receipt";
const char* AuthorizeNetSimData_X_RECEIPT_LINK_TEXT = "x_receipt_link_text";
const char* AuthorizeNetSimData_X_RECEIPT_LINK_URL = "x_receipt_link_url";
const char* AuthorizeNetSimData_X_LOGO_URL = "x_logo_url";
const char* AuthorizeNetSimData_X_BACKGROUND_URL = "x_background_url";
const char* AuthorizeNetSimData_X_COLOR_BACKGROUND = "x_color_background";
const char* AuthorizeNetSimData_X_COLOR_LINK = "x_color_link";
const char* AuthorizeNetSimData_X_COLOR_TEXT = "x_color_text";
const char* AuthorizeNetSimData_X_RELAY_URL = "x_relay_url";

AuthorizeNetSimData* AuthorizeNetSimData_new(void);

void AuthorizeNetSimData_init(AuthorizeNetSimData* this);


void AuthorizeNetSimData_init(AuthorizeNetSimData* this) {
}

AuthorizeNetSimData* AuthorizeNetSimData_new(void) {
    AuthorizeNetSimData* this = calloc(1, sizeof(AuthorizeNetSimData));
    AuthorizeNetSimData_init(this);
    return this;
}

