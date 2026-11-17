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
// package admin.taghelpers

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
// #include "javax/servlet/jsp/PageContext.h"
#include "org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h"
#include "org/allbinary/logic/communication/smtp/event/handler/UserEmailEventHandler.h"
#include "org/allbinary/logic/communication/smtp/event/handler/factory/AdminUserEmailEventHandlerSingletons.h"
#include "org/allbinary/logic/communication/smtp/info/AdminEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/ServiceClientInformationInterfaceFactory.h"
#include "admin/taghelpers/TagHelper.h"

typedef struct BasicTextEmailHelper BasicTextEmailHelper;
struct BasicTextEmailHelper {
    TagHelper base;
    AbeClientInformationInterface* abeClientInformation;
    HashMap* hashMap;
    PageContext* pageContext;
};


BasicTextEmailHelper* BasicTextEmailHelper_new(HashMap* hashMap, PageContext* pageContext);

void BasicTextEmailHelper_init(BasicTextEmailHelper* this, HashMap* hashMap, PageContext* pageContext);
void BasicTextEmailHelper_send(BasicTextEmailHelper* this);

static void BasicTextEmailHelper_initFields(BasicTextEmailHelper* this) {
    this->abeClientInformation = ServiceClientInformationInterfaceFactory_getInstance();
    
    
}


void BasicTextEmailHelper_init(BasicTextEmailHelper* this, HashMap* hashMap, PageContext* pageContext) {
    TagHelper_init(&this->base);
    BasicTextEmailHelper_initFields(this);
        this->pageContext = pageContext;
        this->hashMap = hashMap;
}

BasicTextEmailHelper* BasicTextEmailHelper_new(HashMap* hashMap, PageContext* pageContext) {
    BasicTextEmailHelper* this = calloc(1, sizeof(BasicTextEmailHelper));
    BasicTextEmailHelper_init(this, hashMap, pageContext);
    return this;
}


// throws Exception
void BasicTextEmailHelper_send(BasicTextEmailHelper* this) {
        const char* adminEmailSubject = ((const char*) HashMap_get(this->hashMap, "Subject"));
        const char* adminEmailTextBody = ((const char*) HashMap_get(this->hashMap, "Body"));
        BasicEmailInfo* adminBasicEmailInfo = ((BasicEmailInfo*) AdminEmailInfo_new(adminEmailSubject, adminEmailTextBody));
        EmailInfo* adminEmailInfo = EmailInfo_new(adminBasicEmailInfo);
        UserEmailEventHandler* adminUserEmailEventHandler = AdminUserEmailEventHandlerSingletons_getInstance(AdminUserEmailEventHandlerSingletons_getInstance(), this->abeClientInformation, UserEmailEventNameData_INSTALLER);
        UserEmailEventHandler_receiveEmailInfo(adminUserEmailEventHandler, UserEmailEventNameData_INSTALLER, adminEmailInfo);
}

