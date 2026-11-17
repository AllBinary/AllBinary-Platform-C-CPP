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
// package org.allbinary.logic.control.validate

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ValidatorFactory ValidatorFactory;
struct ValidatorFactory {
    char unused;
};


ValidatorFactory* ValidatorFactory_new(void);

void ValidatorFactory_init(ValidatorFactory* this);


void ValidatorFactory_init(ValidatorFactory* this) {
}

ValidatorFactory* ValidatorFactory_new(void) {
    ValidatorFactory* this = calloc(1, sizeof(ValidatorFactory));
    ValidatorFactory_init(this);
    return this;
}

