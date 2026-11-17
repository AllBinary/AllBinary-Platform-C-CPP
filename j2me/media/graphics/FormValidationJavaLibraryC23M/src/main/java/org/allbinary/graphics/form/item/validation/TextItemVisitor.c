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
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#include "org/allbinary/logic/util/visitor/Visitor.h"

typedef struct TextItemVisitor TextItemVisitor;
struct TextItemVisitor {
    Visitor base;
};


TextItemVisitor* TextItemVisitor_new(void);

void TextItemVisitor_init(TextItemVisitor* this);
Any* TextItemVisitor_visit(TextItemVisitor* this, Any* anyType);


void TextItemVisitor_init(TextItemVisitor* this) {
    Visitor_init(&this->base);
}

TextItemVisitor* TextItemVisitor_new(void) {
    TextItemVisitor* this = calloc(1, sizeof(TextItemVisitor));
    TextItemVisitor_init(this);
    return this;
}


Any* TextItemVisitor_visit(TextItemVisitor* this, Any* anyType) {
        const char* value = ((const char*) anyType);
        if (((int32_t) strlen(value)) < 2) {
            return BooleanFactory_getInstance()->TRUE;
        } else {
            return BooleanFactory_getInstance()->FALSE;
        }
}

