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
// #include "java/util/HashMap.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/servlet/jsp/JspTagException.h"
// #include "javax/servlet/jsp/tagext/Tag.h"
#include "admin/taghelpers/MultipartRequestParamForwardHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/CustomTagSupport.h"
#include "tags/HelperTag.h"

typedef struct MultipartRequestParamForwardTag MultipartRequestParamForwardTag;
struct MultipartRequestParamForwardTag {
    CustomTagSupport base;
    const char* page;
    const char* command;
    BasicArrayList* paramVector;
};


MultipartRequestParamForwardTag* MultipartRequestParamForwardTag_new(void);
void MultipartRequestParamForwardTag_setPage(MultipartRequestParamForwardTag* this, const char* page);
void MultipartRequestParamForwardTag_setCommand(MultipartRequestParamForwardTag* this, const char* command);
void MultipartRequestParamForwardTag_setParamVector(MultipartRequestParamForwardTag* this, BasicArrayList* paramVector);
int32_t MultipartRequestParamForwardTag_doStartTag(MultipartRequestParamForwardTag* this);

static void MultipartRequestParamForwardTag_initFields(MultipartRequestParamForwardTag* this) {
    this->page = nullptr;
    this->command = nullptr;
    this->paramVector = nullptr;
}

void MultipartRequestParamForwardTag_init(MultipartRequestParamForwardTag* this) {
    CustomTagSupport_init(&this->base);
    MultipartRequestParamForwardTag_initFields(this);
}

MultipartRequestParamForwardTag* MultipartRequestParamForwardTag_new(void) {
    MultipartRequestParamForwardTag* this = calloc(1, sizeof(MultipartRequestParamForwardTag));
    MultipartRequestParamForwardTag_init(this);
    return this;
}


void MultipartRequestParamForwardTag_setPage(MultipartRequestParamForwardTag* this, const char* page) {
        this->page = page;
}


void MultipartRequestParamForwardTag_setCommand(MultipartRequestParamForwardTag* this, const char* command) {
        this->command = command;
}


void MultipartRequestParamForwardTag_setParamVector(MultipartRequestParamForwardTag* this, BasicArrayList* paramVector) {
        this->paramVector = paramVector;
}


// throws JspTagException
int32_t MultipartRequestParamForwardTag_doStartTag(MultipartRequestParamForwardTag* this) {
        JAVA_TRY {
            HelperTag* parentTag = ((HelperTag*) MultipartRequestParamForwardTag_getParent(this));
            ParentInventoryTagHelper_isValid(ParentInventoryTagHelper_getInstance(), this, parentTag);
            HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(hashMap, AbTagData_PARENT, parentTag);
            MultipartRequestParamForwardHelper* multipartRequestParamForwardHelper = MultipartRequestParamForwardHelper_new(parentTag, this->page, this->command, this->paramVector, this->pageContext);
            MultipartRequestParamForwardHelper_forward(multipartRequestParamForwardHelper);
            return Tag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return Tag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return Tag_SKIP_BODY;
        } JAVA_END_TRY;
}

