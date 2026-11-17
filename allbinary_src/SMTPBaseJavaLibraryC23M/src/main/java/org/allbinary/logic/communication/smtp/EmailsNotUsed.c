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
// package org.allbinary.logic.communication.smtp

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/data/tree/dom/BasicErrorNodeUtil.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct EmailsNotUsed EmailsNotUsed;
struct EmailsNotUsed {
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* emailInfoVector;
};


EmailsNotUsed* EmailsNotUsed_new(void);

void EmailsNotUsed_init(EmailsNotUsed* this);
Node* EmailsNotUsed_toXmlNode(EmailsNotUsed* this, Document* document);

static void EmailsNotUsed_initFields(EmailsNotUsed* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    
}


void EmailsNotUsed_init(EmailsNotUsed* this) {
    EmailsNotUsed_initFields(this);
        this->emailInfoVector = BasicArrayListD_new();
}

EmailsNotUsed* EmailsNotUsed_new(void) {
    EmailsNotUsed* this = calloc(1, sizeof(EmailsNotUsed));
    EmailsNotUsed_init(this);
    return this;
}


// throws Exception
Node* EmailsNotUsed_toXmlNode(EmailsNotUsed* this, Document* document) {
        JAVA_TRY {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                LogUtil_putF(this->logUtil, this->commonStrings->START, this, "toXmlNode");
            }
            Node* node = Document_createElement(document, EmailData_NAME);
            int32_t size = BasicArrayList_size(this->emailInfoVector);
            for (int32_t index = 0; index < size; index++) {
                Email* email = ((Email*) BasicArrayList_get(this->emailInfoVector, index));
                Node* emailNode = Email_toXmlNode(email, document);
                if (emailNode != nullptr) {
                    Node_appendChild(node, emailNode);
                }
            }
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->PAYMENT)) {
                LogUtil_putF(this->logUtil, this->commonStrings->END, this, "toXmlNode()");
            }
            return node;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toXmlNode()", e);
            }
            const char* error = "Error Processing Order.  Please contact us if error persists.<p/>";
            return BasicErrorNodeUtil_get(document, error);
        } JAVA_END_TRY;
}

