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
// #include "javax/servlet/jsp/JspTagException.h"
// #include "javax/servlet/jsp/tagext/Tag.h"
#include "admin/taghelpers/InventoryHelperFactory.h"
#include "admin/taghelpers/InventoryRequestHelperFactory.h"
#include "org/allbinary/business/context/modules/storefront/StoreFrontData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "admin/tags/TableTag.h"

typedef struct InventoryTag InventoryTag;
struct InventoryTag {
    TableTag base;
    const char* storeName;
};


InventoryTag* InventoryTag_new(void);

void InventoryTag_init(InventoryTag* this);
void InventoryTag_setStoreName(InventoryTag* this, const char* value);
int32_t InventoryTag_doStartTag(InventoryTag* this);

static void InventoryTag_initFields(InventoryTag* this) {
    this->storeName = nullptr;
}


void InventoryTag_init(InventoryTag* this) {
        TableTag_init(&this->base);
        InventoryTag_initFields(this);
        InventoryTag_setTagHelperFactory(this, InventoryHelperFactory_new());
        InventoryTag_setTagRequestHelperFactory(this, InventoryRequestHelperFactory_new());
}

InventoryTag* InventoryTag_new(void) {
    InventoryTag* this = calloc(1, sizeof(InventoryTag));
    InventoryTag_init(this);
    return this;
}


void InventoryTag_setStoreName(InventoryTag* this, const char* value) {
        this->storeName = value;
}


// throws JspTagException
int32_t InventoryTag_doStartTag(InventoryTag* this) {
        JAVA_TRY {
            if (InventoryTag_isEnabled(this)) {
                if (InventoryTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) != 0 && JAVA_CALL(InventoryTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) != 0 && JAVA_CALL(InventoryTag_getCommand(this), compareTo, this->commonStrings->CREATE) != 0 && JAVA_CALL(InventoryTag_getCommand(this), compareTo, this->commonStrings->DROP) != 0) {
                        Tag* parentTag = InventoryTag_getParent(this);
                        ParentInventoryTagHelper_isValid(ParentInventoryTagHelper_getInstance(), this, parentTag);
                        JAVA_CALL(InventoryTag_getPropertiesHashMap(this), put, AbTagData_PARENT, parentTag);
                        JAVA_CALL(InventoryTag_getPropertiesHashMap(this), put, StoreFrontData_getInstance()->NAME, this->storeName);
                    }
                    return TableTag_doStartTag((&this->base));
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

