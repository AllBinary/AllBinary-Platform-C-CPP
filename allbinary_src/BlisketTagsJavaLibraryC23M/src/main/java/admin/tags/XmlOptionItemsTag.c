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
#include "admin/taghelpers/XmlOptionItemsHelperFactory.h"
#include "admin/taghelpers/XmlOptionItemsRequestHelperFactory.h"
#include "admin/tags/TableTag.h"

typedef struct XmlOptionItemsTag XmlOptionItemsTag;
struct XmlOptionItemsTag {
    TableTag base;
};


XmlOptionItemsTag* XmlOptionItemsTag_new(void);

void XmlOptionItemsTag_init(XmlOptionItemsTag* this);


void XmlOptionItemsTag_init(XmlOptionItemsTag* this) {
    TableTag_init(&this->base);
        XmlOptionItemsTag_setTagHelperFactory(this, XmlOptionItemsHelperFactory_new());
        XmlOptionItemsTag_setTagRequestHelperFactory(this, XmlOptionItemsRequestHelperFactory_new());
}

XmlOptionItemsTag* XmlOptionItemsTag_new(void) {
    XmlOptionItemsTag* this = calloc(1, sizeof(XmlOptionItemsTag));
    XmlOptionItemsTag_init(this);
    return this;
}

