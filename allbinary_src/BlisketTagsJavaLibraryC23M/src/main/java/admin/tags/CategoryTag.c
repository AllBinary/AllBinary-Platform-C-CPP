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
// #include "java/lang/reflect/Method.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/CategoryHelperFactory.h"
#include "admin/taghelpers/CategoryRequestHelperFactory.h"
#include "org/allbinary/business/category/CategoryData.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoData.h"
#include "admin/tags/TableTag.h"

typedef struct CategoryTag CategoryTag;
struct CategoryTag {
    TableTag base;
    LogUtil* logUtil;
    const char* xsl;
};


CategoryTag* CategoryTag_new(void);

void CategoryTag_init(CategoryTag* this);
void CategoryTag_setXsl(CategoryTag* this, const char* value);
static const char* CategoryTag_viewCategory(CategoryTag* this);
static const char* CategoryTag_viewCategories(CategoryTag* this);
int32_t CategoryTag_doStartTag(CategoryTag* this);

static void CategoryTag_initFields(CategoryTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->xsl = nullptr;
}


void CategoryTag_init(CategoryTag* this) {
    TableTag_init(&this->base);
    CategoryTag_initFields(this);
        CategoryTag_setTagHelperFactory(this, CategoryHelperFactory_new());
        CategoryTag_setTagRequestHelperFactory(this, CategoryRequestHelperFactory_new());
}

CategoryTag* CategoryTag_new(void) {
    CategoryTag* this = calloc(1, sizeof(CategoryTag));
    CategoryTag_init(this);
    return this;
}


void CategoryTag_setXsl(CategoryTag* this, const char* value) {
        this->xsl = value;
}


// throws LicensingException
static const char* CategoryTag_viewCategory(CategoryTag* this) {
        JAVA_TRY {
            Any* anyType = CategoryRequestHelperFactory_getInstance(CategoryRequestHelperFactory_new(), CategoryTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "viewCategory", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view a Category";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewCategory()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
static const char* CategoryTag_viewCategories(CategoryTag* this) {
        JAVA_TRY {
            Any* anyType = CategoryRequestHelperFactory_getInstance(CategoryRequestHelperFactory_new(), CategoryTag_getPropertiesHashMap(this), this->pageContext);
            const char* helperClass = java_class_of(anyType);
            Method* method = Class_getMethod(helperClass, "viewCategories", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to view a Categories";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "viewCategories()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t CategoryTag_doStartTag(CategoryTag* this) {
        JAVA_TRY {
            if (CategoryTag_isEnabled(this)) {
                if (CategoryTag_getCommand(this) != nullptr) {
                    JAVA_CALL(CategoryTag_getPropertiesHashMap(this), put, TransformInfoData_getInstance()->TEMPLATEFILENAME, this->xsl);
                    if (JAVA_CALL(CategoryTag_getCommand(this), compareTo, CategoryData_getInstance()->VIEW) == 0) {
                        const char* output = CategoryTag_viewCategory(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, output);
                        }
                    } else if (JAVA_CALL(CategoryTag_getCommand(this), compareTo, CategoryData_getInstance()->VIEW) == 0) {
                        const char* output = CategoryTag_viewCategories(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->base.pageContext, getOut), print, output);
                        }
                    } else {
                        return TableTag_doStartTag((&this->base));
                    }
                }
            }
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return TableTag_SKIP_BODY;
        } JAVA_END_TRY;
}

