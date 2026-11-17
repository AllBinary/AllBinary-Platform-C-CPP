/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/tagext/TagSupport.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct CustomTagSupport CustomTagSupport;
struct CustomTagSupport {
    TagSupport base;
    CommonStrings* commonStrings;
    TagStrings* tagStrings;
};


CustomTagSupport* CustomTagSupport_new(void);

static void CustomTagSupport_initFields(CustomTagSupport* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->tagStrings = TagStrings_getInstance();
}

void CustomTagSupport_init(CustomTagSupport* this) {
    TagSupport_init(&this->base);
    CustomTagSupport_initFields(this);
}

CustomTagSupport* CustomTagSupport_new(void) {
    CustomTagSupport* this = calloc(1, sizeof(CustomTagSupport));
    CustomTagSupport_init(this);
    return this;
}

