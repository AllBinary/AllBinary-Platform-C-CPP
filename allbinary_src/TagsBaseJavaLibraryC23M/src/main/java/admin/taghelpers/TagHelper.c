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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "admin/taghelpers/TagHelperInterface.h"

typedef struct TagHelper TagHelper;
struct TagHelper {
    TagHelperInterface TagHelperInterface_interface;
    CommonStrings* commonStrings;
};


TagHelper* TagHelper_new(void);

static void TagHelper_initFields(TagHelper* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void TagHelper_init(TagHelper* this) {
    TagHelper_initFields(this);
}

TagHelper* TagHelper_new(void) {
    TagHelper* this = calloc(1, sizeof(TagHelper));
    TagHelper_init(this);
    return this;
}

