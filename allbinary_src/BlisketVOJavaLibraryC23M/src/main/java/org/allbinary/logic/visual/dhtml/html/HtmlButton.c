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
// package org.allbinary.logic.visual.dhtml.html

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct HtmlButton HtmlButton;
struct HtmlButton {
    char unused;
};


HtmlButton* HtmlButton_new(void);

void HtmlButton_init(HtmlButton* this);


void HtmlButton_init(HtmlButton* this) {
}

HtmlButton* HtmlButton_new(void) {
    HtmlButton* this = calloc(1, sizeof(HtmlButton));
    HtmlButton_init(this);
    return this;
}

