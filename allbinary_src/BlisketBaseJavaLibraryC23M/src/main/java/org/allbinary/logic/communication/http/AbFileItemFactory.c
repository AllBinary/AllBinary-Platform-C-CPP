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
// package org.allbinary.logic.communication.http

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/apache/commons/fileupload/DefaultFileItemFactory.h"

typedef struct AbFileItemFactory AbFileItemFactory;
struct AbFileItemFactory {
    DefaultFileItemFactory base;
};


AbFileItemFactory* AbFileItemFactory_new(void);

void AbFileItemFactory_init(AbFileItemFactory* this);


void AbFileItemFactory_init(AbFileItemFactory* this) {
        DefaultFileItemFactory_init(&this->base);
}

AbFileItemFactory* AbFileItemFactory_new(void) {
    AbFileItemFactory* this = calloc(1, sizeof(AbFileItemFactory));
    AbFileItemFactory_init(this);
    return this;
}

