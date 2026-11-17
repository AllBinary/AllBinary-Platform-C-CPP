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
// package org.allbinary.business.user.commerce.money

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonPhoneStrings.h"

typedef struct Money Money;
struct Money {
    int64_t units;
    const char* DEFAULT_CURRENCY;
};


Money* Money_new(Money* money);

void Money_init(Money* this, Money* money);

Money* Money_new0();
void Money_init0(Money* this);

Money* Money_new1(const char* usDollarStr);
void Money_init1(Money* this, const char* usDollarStr);

Money* Money_new1(int64_t units);
void Money_init1(Money* this, int64_t units);
bool Money_isValid(Money* this);
void Money_add(Money* this, Money* moreMoney);
void Money_add(Money* this, const char* usDollarStr);
void Money_subtract(Money* this, const char* usDollarStr);
void Money_multiply(Money* this, float multiplier);
void Money_multiply(Money* this, int32_t multiplier);
static const char* Money_convertUnitsTo(Money* this, const char* currency);
static int64_t Money_convertUsdToUnits(Money* this, const char* usDollarStr);
int64_t Money_getUnits(Money* this);
int64_t Money_getUnitsLong(Money* this);
const char* Money_toString(Money* this);

static void Money_initFields(Money* this) {
    
    this->DEFAULT_CURRENCY = "USD";
}


void Money_init(Money* this, Money* money) {
    Money_initFields(this);
        this->units = Money_getUnits(money);
}

Money* Money_new(Money* money) {
    Money* this = calloc(1, sizeof(Money));
    Money_init(this, money);
    return this;
}


void Money_init0(Money* this) {
    Money_initFields(this);
        this->units = 0;
}

Money* Money_new0(void) {
    Money* this = calloc(1, sizeof(Money));
    Money_init0(this);
    return this;
}


void Money_init1(Money* this, const char* usDollarStr) {
    Money_initFields(this);
        if (usDollarStr != nullptr && StringValidationUtil_isNumber(StringValidationUtil_getInstance(), usDollarStr)) {
            this->units = Money_convertUsdToUnits(this, usDollarStr);
        }
}

Money* Money_new1(const char* usDollarStr) {
    Money* this = calloc(1, sizeof(Money));
    Money_init1(this, usDollarStr);
    return this;
}


void Money_init1(Money* this, int64_t units) {
    Money_initFields(this);
        this->units = units;
}

Money* Money_new1(int64_t units) {
    Money* this = calloc(1, sizeof(Money));
    Money_init1(this, units);
    return this;
}


bool Money_isValid(Money* this) {
        if (this->units != nullptr && Long_longValue(this->units) > 0 && Long_longValue(this->units) < Long_MAX_VALUE) {
            return true;
        } else {
            return false;
        }
}


void Money_add(Money* this, Money* moreMoney) {
        Money_add(this, Money_toString(moreMoney));
}


// Java overloaded method: C needs a different name
void Money_add(Money* this, const char* usDollarStr) {
        this->units = Long_longValue(this->units) + Money_convertUsdToUnits(this, usDollarStr);
}


void Money_subtract(Money* this, const char* usDollarStr) {
        this->units = Long_longValue(this->units) - Money_convertUsdToUnits(this, usDollarStr);
}


void Money_multiply(Money* this, float multiplier) {
        this->units = Float_longValue(Long_longValue(this->units) * Float_floatValue(multiplier));
}


// Java overloaded method: C needs a different name
void Money_multiply(Money* this, int32_t multiplier) {
        this->units = Long_longValue(this->units) * multiplier;
}


static const char* Money_convertUnitsTo(Money* this, const char* currency) {
        StringMaker* stringBuffer = StringMaker_new();
        if (strcmp(currency, this->DEFAULT_CURRENCY) == 0) {
            int64_t dollar = Long_longValue(this->units) / 100;
            int64_t cents = Long_longValue(this->units) - (dollar * 100LL);
            StringMaker_append(stringBuffer, Long_toString(dollar));
            StringMaker_append(stringBuffer, AbPathData_getInstance()->EXTENSION_SEP);
            if (cents < 10LL) {
                StringMaker_append(stringBuffer, CommonPhoneStrings_getInstance()->ZERO);
            }
            StringMaker_append(stringBuffer, Long_toString(cents));
        }
        return StringMaker_toString(stringBuffer);
}


static int64_t Money_convertUsdToUnits(Money* this, const char* usDollarStr) {
        int64_t localUnit = 0LL;
        int32_t index = java_string_indexOf(usDollarStr, AbPathData_getInstance()->EXTENSION_SEP);
        StringUtil* stringUtil = StringUtil_getInstance();
        const char* dollarStr = stringUtil->EMPTY_STRING;
        const char* centsStr = stringUtil->EMPTY_STRING;
        if (index < 1) {
            dollarStr = java_string_new(usDollarStr);
            centsStr = "00";
        } else {
            dollarStr = java_string_new(java_substring(usDollarStr, 0, index));
            centsStr = java_string_new(java_substring(usDollarStr, index + 1, (int32_t) strlen(usDollarStr)));
        }
        localUnit = Long_longValue(Long_longValue(dollarStr) * 100);
        localUnit += Long_longValue(centsStr);
        return localUnit;
}


int64_t Money_getUnits(Money* this) {
        return Long_longValue(this->units);
}


int64_t Money_getUnitsLong(Money* this) {
        return this->units;
}


const char* Money_toString(Money* this) {
        return java_string_new(Money_convertUnitsTo(this, this->DEFAULT_CURRENCY));
}

