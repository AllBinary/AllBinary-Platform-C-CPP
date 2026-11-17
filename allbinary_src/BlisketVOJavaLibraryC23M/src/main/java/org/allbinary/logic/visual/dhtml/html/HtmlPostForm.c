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
#include "org/allbinary/logic/visual/dhtml/html/HtmlForm.h"

typedef struct HtmlPostForm HtmlPostForm;
struct HtmlPostForm {
    HtmlForm base;
};


HtmlPostForm* HtmlPostForm_new(const char* action);

void HtmlPostForm_init(HtmlPostForm* this, const char* action);


void HtmlPostForm_init(HtmlPostForm* this, const char* action) {
        HtmlForm_init(&this->base, action);
        HtmlPostForm_setPost(this);
}

HtmlPostForm* HtmlPostForm_new(const char* action) {
    HtmlPostForm* this = calloc(1, sizeof(HtmlPostForm));
    HtmlPostForm_init(this, action);
    return this;
}

