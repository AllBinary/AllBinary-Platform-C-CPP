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
// package tags.admin

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/servlet/jsp/JspTagException.h"
#include "org/allbinary/logic/communication/http/request/AbResponseHandler.h"
#include "tags/StoreValidationTransformTag.h"

typedef struct WorkFlowsTag WorkFlowsTag;
struct WorkFlowsTag {
    StoreValidationTransformTag base;
};


WorkFlowsTag* WorkFlowsTag_new(void);

void WorkFlowsTag_init(WorkFlowsTag* this);
int32_t WorkFlowsTag_doStartTag(WorkFlowsTag* this);


void WorkFlowsTag_init(WorkFlowsTag* this) {
    StoreValidationTransformTag_init(&this->base);
}

WorkFlowsTag* WorkFlowsTag_new(void) {
    WorkFlowsTag* this = calloc(1, sizeof(WorkFlowsTag));
    WorkFlowsTag_init(this);
    return this;
}


// throws JspTagException
int32_t WorkFlowsTag_doStartTag(WorkFlowsTag* this) {
        JAVA_TRY {
            if (WorkFlowsTag_getCommand(this) != nullptr) {
                if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->NEW) == 0) {
                    WorkFlowsTag_setName(this, "New WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.NewView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, this->commonStrings->INSERT) == 0) {
                    WorkFlowsTag_setName(this, "Add Validation WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.AddValidationView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->VIEW) == 0) {
                    WorkFlowsTag_setName(this, "Validation WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.WorkflowsValidationView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->EDIT) == 0) {
                    WorkFlowsTag_setName(this, "Validation WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.EditValidationView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, this->commonStrings->UPDATE) == 0) {
                    WorkFlowsTag_setName(this, "Update Validation WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.UpdateValidationView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, this->commonStrings->DELETE) == 0) {
                    WorkFlowsTag_setName(this, "Delete Validation WorkFlow View");
                    WorkFlowsTag_setObjectFile(this, "views.admin.workflow.DeleteValidationView");
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->BACKUP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, org_allbinary->globals->GLOBALS2->RESTORE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, this->commonStrings->DROP) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else if (JAVA_CALL(WorkFlowsTag_getCommand(this), compareTo, this->commonStrings->CREATE) == 0) {
                    java_throw(java_exception_new("Exception", "View not implemented"));
                } else {
                    java_throw(java_exception_new("Exception", java_concat("No Such View Command: ", java_string_of(WorkFlowsTag_getCommand(this)))));
                }
                return StoreValidationTransformTag_doStartTag((&this->base));
            }
            java_throw(java_exception_new("Exception", "Command Null"));
        } JAVA_CATCH(Exception, e) {
            AbResponseHandler_sendJspTagRedirect(this->pageContext, e);
            return StoreValidationTransformTag_SKIP_BODY;
        } JAVA_END_TRY;
}

