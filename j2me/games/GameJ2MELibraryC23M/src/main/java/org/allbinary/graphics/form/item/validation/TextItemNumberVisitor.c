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

typedef struct TextItemNumberVisitor TextItemNumberVisitor;
struct TextItemNumberVisitor {
    Visitor base;
    LogUtil* logUtil;
};


TextItemNumberVisitor* TextItemNumberVisitor_new(void);

void TextItemNumberVisitor_init(TextItemNumberVisitor* this);
Any* TextItemNumberVisitor_visit(TextItemNumberVisitor* this, Any* anyType);

static void TextItemNumberVisitor_initFields(TextItemNumberVisitor* this) {
    this->logUtil = LogUtil_getInstance();
}


void TextItemNumberVisitor_init(TextItemNumberVisitor* this) {
    Visitor_init(&this->base);
    TextItemNumberVisitor_initFields(this);
}

TextItemNumberVisitor* TextItemNumberVisitor_new(void) {
    TextItemNumberVisitor* this = calloc(1, sizeof(TextItemNumberVisitor));
    TextItemNumberVisitor_init(this);
    return this;
}


Any* TextItemNumberVisitor_visit(TextItemNumberVisitor* this, Any* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isNumber(stringValidationUtil, value)) {
                return BooleanFactory_getInstance()->TRUE;
            } else {
                JAVA_TRY {
                    TextNotificationUtil_fireError(TextNotificationUtil_getInstance(), "Numbers Only");
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

