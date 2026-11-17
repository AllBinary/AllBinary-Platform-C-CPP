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

typedef struct AllCommandsVisitor AllCommandsVisitor;
struct AllCommandsVisitor {
    Visitor base;
};


AllCommandsVisitor* AllCommandsVisitor_new(void);

void AllCommandsVisitor_init(AllCommandsVisitor* this);
Any* AllCommandsVisitor_visit(AllCommandsVisitor* this, Any* anyType);


void AllCommandsVisitor_init(AllCommandsVisitor* this) {
    Visitor_init(&this->base);
}

AllCommandsVisitor* AllCommandsVisitor_new(void) {
    AllCommandsVisitor* this = calloc(1, sizeof(AllCommandsVisitor));
    AllCommandsVisitor_init(this);
    return this;
}


Any* AllCommandsVisitor_visit(AllCommandsVisitor* this, Any* anyType) {
        return BooleanFactory_getInstance()->TRUE;
}

