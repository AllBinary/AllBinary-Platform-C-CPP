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
// package org.allbinary.business.user.commerce.inventory.item.option

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct XmlOptionItemData XmlOptionItemData;
struct XmlOptionItemData {
    char unused;
};

const char* XmlOptionItemData_XML_FILE_STATUS = "XMLOPTIONITEM_XML_FILE_STATUS";
const char* XmlOptionItemData_OPTION_XML_FILE = "XMLOPTIONITEM_OPTION_XML_FILE";

XmlOptionItemData* XmlOptionItemData_new(void);

void XmlOptionItemData_init(XmlOptionItemData* this) {
}

XmlOptionItemData* XmlOptionItemData_new(void) {
    XmlOptionItemData* this = calloc(1, sizeof(XmlOptionItemData));
    XmlOptionItemData_init(this);
    return this;
}

