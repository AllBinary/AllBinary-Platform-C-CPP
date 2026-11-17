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
// package org.allbinary.graphics.form.item.validation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/TextNotificationUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct TextItemUserIdentifierVisitor TextItemUserIdentifierVisitor;
struct TextItemUserIdentifierVisitor {
    Visitor base;
    LogUtil* logUtil;
};


TextItemUserIdentifierVisitor* TextItemUserIdentifierVisitor_new(void);

void TextItemUserIdentifierVisitor_init(TextItemUserIdentifierVisitor* this);
Any* TextItemUserIdentifierVisitor_visit(TextItemUserIdentifierVisitor* this, Any* anyType);
bool TextItemUserIdentifierVisitor_isLetter(TextItemUserIdentifierVisitor* this, uint16_t charValue);

static void TextItemUserIdentifierVisitor_initFields(TextItemUserIdentifierVisitor* this) {
    this->logUtil = LogUtil_getInstance();
}


void TextItemUserIdentifierVisitor_init(TextItemUserIdentifierVisitor* this) {
    Visitor_init(&this->base);
    TextItemUserIdentifierVisitor_initFields(this);
}

TextItemUserIdentifierVisitor* TextItemUserIdentifierVisitor_new(void) {
    TextItemUserIdentifierVisitor* this = calloc(1, sizeof(TextItemUserIdentifierVisitor));
    TextItemUserIdentifierVisitor_init(this);
    return this;
}


Any* TextItemUserIdentifierVisitor_visit(TextItemUserIdentifierVisitor* this, Any* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            uint16_t charValue = ((uint16_t) value[0]);
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isNumber(stringValidationUtil, value)) {
                return BooleanFactory_getInstance()->TRUE;
            } else if (TextItemUserIdentifierVisitor_isLetter(this, charValue)) {
                return BooleanFactory_getInstance()->TRUE;
            } else {
                JAVA_TRY {
                    TextNotificationUtil_fireError(TextNotificationUtil_getInstance(), "Only Letters & Numbers Allowed");
                } JAVA_CATCH(Exception, e) {
                    CommonStrings* commonStrings = CommonStrings_getInstance();
                    LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->VISIT, e);
                } JAVA_END_TRY;
                return BooleanFactory_getInstance()->FALSE;
            }
        } else {
            return BooleanFactory_getInstance()->FALSE;
        }
}


bool TextItemUserIdentifierVisitor_isLetter(TextItemUserIdentifierVisitor* this, uint16_t charValue) {
        int32_t value = ((int32_t) charValue);
        return (value > 64 && value < 91) || (value > 96 && value < 123);
}

