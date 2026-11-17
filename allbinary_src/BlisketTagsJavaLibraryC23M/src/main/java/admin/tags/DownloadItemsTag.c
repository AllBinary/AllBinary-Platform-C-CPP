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
#include "admin/taghelpers/DownloadItemsHelperFactory.h"
#include "admin/taghelpers/DownloadItemsRequestHelperFactory.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "admin/tags/TableTag.h"

typedef struct DownloadItemsTag DownloadItemsTag;
struct DownloadItemsTag {
    TableTag base;
};


DownloadItemsTag* DownloadItemsTag_new(void);

void DownloadItemsTag_init(DownloadItemsTag* this);
int32_t DownloadItemsTag_doStartTag(DownloadItemsTag* this);


void DownloadItemsTag_init(DownloadItemsTag* this) {
    TableTag_init(&this->base);
        DownloadItemsTag_setTagHelperFactory(this, DownloadItemsHelperFactory_new());
        DownloadItemsTag_setTagRequestHelperFactory(this, DownloadItemsRequestHelperFactory_new());
}

DownloadItemsTag* DownloadItemsTag_new(void) {
    DownloadItemsTag* this = calloc(1, sizeof(DownloadItemsTag));
    DownloadItemsTag_init(this);
    return this;
}


// throws JspTagException
int32_t DownloadItemsTag_doStartTag(DownloadItemsTag* this) {
        JAVA_TRY {
            if (DownloadItemsTag_isEnabled(this)) {
                if (DownloadItemsTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(DownloadItemsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) != 0 && JAVA_CALL(DownloadItemsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) != 0 && JAVA_CALL(DownloadItemsTag_getCommand(this), compareTo, this->commonStrings->CREATE) != 0 && JAVA_CALL(DownloadItemsTag_getCommand(this), compareTo, this->commonStrings->DROP) != 0) {
                        Tag* parentTag = DownloadItemsTag_getParent(this);
                        ParentInventoryTagHelper_isValid(ParentInventoryTagHelper_getInstance(), this, parentTag);
                        JAVA_CALL(DownloadItemsTag_getPropertiesHashMap(this), put, AbTagData_PARENT, parentTag);
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

