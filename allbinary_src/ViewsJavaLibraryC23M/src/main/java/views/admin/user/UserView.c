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
// package views.admin.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/user/UserDomNode.h"
#include "org/allbinary/business/user/UserInterface.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "views/business/context/HttpContextView.h"

typedef struct UserView UserView;
struct UserView {
    HttpContextView base;
    LogUtil* logUtil;
    UserInterface* user;
};


UserView* UserView_new(TransformInfoInterface* transformInfoInterface);

void UserView_init(UserView* this, TransformInfoInterface* transformInfoInterface);
void UserView_addDomNodeInterfaces(UserView* this);
const char* UserView_view(UserView* this);

static void UserView_initFields(UserView* this) {
    this->logUtil = LogUtil_getInstance();
    this->user = nullptr;
}


void UserView_init(UserView* this, TransformInfoInterface* transformInfoInterface) {
        HttpContextView_init(&this->base, transformInfoInterface);
        UserView_initFields(this);
}

UserView* UserView_new(TransformInfoInterface* transformInfoInterface) {
    UserView* this = calloc(1, sizeof(UserView));
    UserView_init(this, transformInfoInterface);
    return this;
}


void UserView_addDomNodeInterfaces(UserView* this) {
        UserView_addDomNodeInterface(this, ((DomNodeInterface*) UserDomNode_new(this->user)));
}


// throws Exception
const char* UserView_view(UserView* this) {
        JAVA_TRY {
            UserView_addDomNodeInterfaces(this);
            return HttpContextView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

