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
// #include "javax/servlet/http/HttpServletRequest.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "admin/taghelpers/TagHelperFactoryInterface.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/sql/SqlStrings.h"
#include "org/allbinary/logic/java/bool/BooleanUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"
#include "tags/PropertiesTag.h"

typedef struct TableTag TableTag;
struct TableTag {
    PropertiesTag base;
    LogUtil* logUtil;
    const char* enabled;
    TagHelperFactoryInterface* tagHelperFactoryInterface;
    TagHelperFactoryInterface* tagRequestHelperFactoryInterface;
    Any* requestObject;
    int32_t current;
    int32_t total;
};


TableTag* TableTag_new(void);

void TableTag_init(TableTag* this);
void TableTag_setIsSelected(TableTag* this, const char* enabled);
bool TableTag_isEnabled(TableTag* this);
void TableTag_setTagHelperFactory(TableTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
TagHelperFactoryInterface* TableTag_getTagHelperFactoryInterface(TableTag* this);
void TableTag_setTagRequestHelperFactory(TableTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface);
TagHelperFactoryInterface* TableTag_getTagRequestHelperFactoryInterface(TableTag* this);
void TableTag_setCurrent(TableTag* this, int32_t current);
int32_t TableTag_getCurrent(TableTag* this);
void TableTag_setTotal(TableTag* this, int32_t total);
int32_t TableTag_getTotal(TableTag* this);
const char* TableTag_drop(TableTag* this);
const char* TableTag_create(TableTag* this);
const char* TableTag_restore(TableTag* this);
const char* TableTag_backup(TableTag* this);
const char* TableTag_insert(TableTag* this);
const char* TableTag_delete(TableTag* this);
const char* TableTag_update(TableTag* this);
int32_t TableTag_doStartTag(TableTag* this);

static void TableTag_initFields(TableTag* this) {
    this->logUtil = LogUtil_getInstance();
    this->enabled = nullptr;
    this->tagHelperFactoryInterface = nullptr;
    this->tagRequestHelperFactoryInterface = nullptr;
    this->requestObject = nullptr;
    this->current = nullptr;
    this->total = nullptr;
}


void TableTag_init(TableTag* this) {
    PropertiesTag_init(&this->base);
    TableTag_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
            LogUtil_putF(this->logUtil, this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
        }
}

TableTag* TableTag_new(void) {
    TableTag* this = calloc(1, sizeof(TableTag));
    TableTag_init(this);
    return this;
}


void TableTag_setIsSelected(TableTag* this, const char* enabled) {
        this->enabled = enabled;
}


// throws Exception
bool TableTag_isEnabled(TableTag* this) {
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), this->enabled)) {
            if (BooleanUtil_getFromString(BooleanUtil_getInstance(), this->enabled) || strcmp(this->enabled, "on") == 0) {
                return true;
            }
        }
        return false;
}


void TableTag_setTagHelperFactory(TableTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
        this->tagHelperFactoryInterface = tagHelperFactoryInterface;
}


TagHelperFactoryInterface* TableTag_getTagHelperFactoryInterface(TableTag* this) {
        return this->tagHelperFactoryInterface;
}


void TableTag_setTagRequestHelperFactory(TableTag* this, TagHelperFactoryInterface* tagHelperFactoryInterface) {
        this->tagRequestHelperFactoryInterface = tagHelperFactoryInterface;
}


TagHelperFactoryInterface* TableTag_getTagRequestHelperFactoryInterface(TableTag* this) {
        return this->tagRequestHelperFactoryInterface;
}


void TableTag_setCurrent(TableTag* this, int32_t current) {
        this->current = current;
}


int32_t TableTag_getCurrent(TableTag* this) {
        return this->current;
}


void TableTag_setTotal(TableTag* this, int32_t total) {
        this->total = total;
}


int32_t TableTag_getTotal(TableTag* this) {
        return this->total;
}


// throws LicensingException
const char* TableTag_drop(TableTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(TableTag_getTagHelperFactoryInterface(this), getInstance, TableTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "drop", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to drop table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, this->commonStrings->DROP, e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_create(TableTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(TableTag_getTagHelperFactoryInterface(this), getInstance, TableTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "create", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to create table";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "create()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_restore(TableTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(TableTag_getTagHelperFactoryInterface(this), getInstance, TableTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "restore", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to restore backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "restore()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_backup(TableTag* this) {
        JAVA_TRY {
            Any* anyType = JAVA_CALL(TableTag_getTagHelperFactoryInterface(this), getInstance, TableTag_getPropertiesHashMap(this), this->base.pageContext);
            const char* addressHelperClass = java_class_of(anyType);
            Method* method = Class_getMethod(addressHelperClass, "backup", nullptr);
            const char* result = ((const char*) Method_invoke(method, anyType, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to make backup";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "backup()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_insert(TableTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->requestObject);
            Method* method = Class_getMethod(helperClass, "insert", nullptr);
            const char* result = ((const char*) Method_invoke(method, this->requestObject, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to insert";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "insert()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_delete(TableTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->requestObject);
            Method* method = Class_getMethod(helperClass, this->base.commonStrings->delete, nullptr);
            const char* result = ((const char*) Method_invoke(method, this->requestObject, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to delete";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "delete()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws LicensingException
const char* TableTag_update(TableTag* this) {
        JAVA_TRY {
            const char* helperClass = java_class_of(this->requestObject);
            Method* method = Class_getMethod(helperClass, "update", nullptr);
            const char* result = ((const char*) Method_invoke(method, this->requestObject, nullptr));
            return result;
        } JAVA_CATCH(Exception, e) {
            const char* error = "Failed to update";
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->SQLTAGSERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "update()", e);
            }
            return error;
        } JAVA_END_TRY;
}


// throws JspTagException
int32_t TableTag_doStartTag(TableTag* this) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                HttpServletRequest* request = ((HttpServletRequest*) JAVA_CALL(this->pageContext, getRequest));
                StringMaker* stringBuffer = StringMaker_new();
                StringMaker_append(stringBuffer, "TableTag Helper: ");
                StringMaker_append(stringBuffer, java_class_of(TableTag_getTagHelperFactoryInterface(this)));
                StringMaker_append(stringBuffer, " Request URI: ");
                StringMaker_append(stringBuffer, HttpServletRequest_getRequestURI(request));
                LogUtil_putF(this->logUtil, StringMaker_toString(stringBuffer), this, this->tagStrings->DO_START_TAG);
            }
            if (TableTag_getTagRequestHelperFactoryInterface(this) != nullptr) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                    LogUtil_putF(this->logUtil, java_concat("TableTag RequestHelper: ", java_class_of(TableTag_getTagRequestHelperFactoryInterface(this))), this, this->tagStrings->DO_START_TAG);
                }
            } else {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                    LogUtil_putF(this->logUtil, "TableTag RequestHelper: null", this, this->tagStrings->DO_START_TAG);
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAG)) {
                LogUtil_putF(this->logUtil, java_concat("TableTag this.getCommand(): ", java_string_of(TableTag_getCommand(this))), this, this->base.tagStrings->DO_START_TAG);
            }
            if (TableTag_isEnabled(this)) {
                if (TableTag_getCommand(this) != nullptr) {
                    if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, SqlStrings_getInstance()->INSERT_INTO) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->DELETE) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->UPDATE) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, SqlStrings_getInstance()->UPDATE) == 0) {
                        this->requestObject = JAVA_CALL(TableTag_getTagRequestHelperFactoryInterface(this), getInstance, TableTag_getPropertiesHashMap(this), this->base.pageContext);
                    }
                    if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, SqlStrings_getInstance()->INSERT_INTO) == 0) {
                        TableTag_insert(this);
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->DELETE) == 0) {
                        TableTag_delete(this);
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->UPDATE) == 0 || JAVA_CALL(TableTag_getCommand(this), compareTo, SqlStrings_getInstance()->UPDATE) == 0) {
                        TableTag_update(this);
                    }
                    if (JAVA_CALL(TableTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) == 0) {
                        const char* output = TableTag_backup(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                        return PropertiesTag_SKIP_BODY;
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) == 0) {
                        JAVA_CALL(TableTag_getPropertiesHashMap(this), put, "current", TableTag_getCurrent(this));
                        JAVA_CALL(TableTag_getPropertiesHashMap(this), put, "total", TableTag_getTotal(this));
                        const char* output = TableTag_restore(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                        return PropertiesTag_SKIP_BODY;
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->DROP) == 0) {
                        const char* output = TableTag_drop(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                        return PropertiesTag_SKIP_BODY;
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->CREATE) == 0) {
                        const char* output = TableTag_create(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                        return PropertiesTag_SKIP_BODY;
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->INSERT) == 0) {
                        const char* output = TableTag_insert(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->DELETE) == 0) {
                        const char* output = TableTag_delete(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                    } else if (JAVA_CALL(TableTag_getCommand(this), compareTo, this->base.commonStrings->UPDATE) == 0) {
                        const char* output = TableTag_update(this);
                        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->JSPTAGEXTRAOUTPUT)) {
                            JAVA_CALL(JAVA_CALL(this->pageContext, getOut), print, java_concat(output, "<br />"));
                        }
                    }
                }
            }
            return PropertiesTag_EVAL_BODY_INCLUDE;
        } JAVA_CATCH(LicensingException, e) {
            AbResponseHandler_sendJspTagLicensingRedirect(this->pageContext, e);
            return PropertiesTag_SKIP_BODY;
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return PropertiesTag_SKIP_BODY;
        } JAVA_END_TRY;
}

