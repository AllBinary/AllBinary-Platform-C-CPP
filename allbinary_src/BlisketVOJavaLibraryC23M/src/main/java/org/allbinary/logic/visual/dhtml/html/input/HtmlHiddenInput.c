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
// package org.allbinary.logic.visual.dhtml.html.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HtmlHiddenInput HtmlHiddenInput;
struct HtmlHiddenInput {
    char unused;
};


HtmlHiddenInput* HtmlHiddenInput_new(void);

void HtmlHiddenInput_init(HtmlHiddenInput* this);


void HtmlHiddenInput_init(HtmlHiddenInput* this) {
}

HtmlHiddenInput* HtmlHiddenInput_new(void) {
    HtmlHiddenInput* this = calloc(1, sizeof(HtmlHiddenInput));
    HtmlHiddenInput_init(this);
    return this;
}

