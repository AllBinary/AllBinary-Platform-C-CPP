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
// package admin.tags

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/tagext/Tag.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct ParentInventoryTagHelper ParentInventoryTagHelper;
struct ParentInventoryTagHelper {
    char unused;
};

static ParentInventoryTagHelper* ParentInventoryTagHelper_instance;

ParentInventoryTagHelper* ParentInventoryTagHelper_new(void);
ParentInventoryTagHelper* ParentInventoryTagHelper_getInstance(void);
void ParentInventoryTagHelper_isValid(ParentInventoryTagHelper* this, Any* tagClass, Tag* parentTag);

// Static fields with runtime initializers: call this once at startup
void ParentInventoryTagHelper_staticInit(void) {
    ParentInventoryTagHelper_instance = ParentInventoryTagHelper_new();
}

void ParentInventoryTagHelper_init(ParentInventoryTagHelper* this) {
}

ParentInventoryTagHelper* ParentInventoryTagHelper_new(void) {
    ParentInventoryTagHelper* this = calloc(1, sizeof(ParentInventoryTagHelper));
    ParentInventoryTagHelper_init(this);
    return this;
}


ParentInventoryTagHelper* ParentInventoryTagHelper_getInstance(void) {
        return ParentInventoryTagHelper_instance;
}


// throws Exception
void ParentInventoryTagHelper_isValid(ParentInventoryTagHelper* this, Any* tagClass, Tag* parentTag) {
        if (parentTag == nullptr) {
            java_throw(java_exception_new("Exception", "Must have parent tag."));
        } else if (!(java_instanceof(parentTag, "HelperTag"))) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, "Must have at least a ");
            StringMaker_append(stringBuffer, "tags.HelperTag");
            StringMaker_append(stringBuffer, " as parent");
            StringMaker_append(stringBuffer, "and not: ");
            StringMaker_append(stringBuffer, java_class_of(parentTag));
            java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
        }
}

