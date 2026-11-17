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
// package views.generic.user

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
#include "org/allbinary/business/user/UserDomNode.h"
#include "org/allbinary/business/user/UsersData.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/data/tree/dom/DomNodeInterface.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/visual/transform/info/TransformInfoInterface.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "views/business/context/modules/storefront/HttpStoreComponentView.h"

typedef struct UsersView UsersView;
struct UsersView {
    HttpStoreComponentView base;
    DomNodeInterface DomNodeInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* userVector;
};


UsersView* UsersView_new(TransformInfoInterface* transformInfoInterface);

void UsersView_init(UsersView* this, TransformInfoInterface* transformInfoInterface);
Node* UsersView_toXmlNode(UsersView* this, Document* document);
void UsersView_addDomNodeInterfaces(UsersView* this);
const char* UsersView_view(UsersView* this);

static void UsersView_initFields(UsersView* this) {
    this->logUtil = LogUtil_getInstance();
    this->userVector = nullptr;
}


void UsersView_init(UsersView* this, TransformInfoInterface* transformInfoInterface) {
        HttpStoreComponentView_init(&this->base, transformInfoInterface);
        UsersView_initFields(this);
}

UsersView* UsersView_new(TransformInfoInterface* transformInfoInterface) {
    UsersView* this = calloc(1, sizeof(UsersView));
    UsersView_init(this, transformInfoInterface);
    return this;
}


Node* UsersView_toXmlNode(UsersView* this, Document* document) {
        JAVA_TRY {
            Node* usersNode = Document_createElement(document, UsersData_NAME);
            int32_t size = BasicArrayList_size(this->userVector);
            for (int32_t index = 0; index < size; index++) {
                User* userInterface = ((User*) BasicArrayList_get(this->userVector, index));
                if (userInterface != nullptr) {
                    Node* node = UserDomNode_toXmlNode(UserDomNode_new(userInterface), document);
                    Node_appendChild(usersNode, node);
                } else {
                    LogUtil_putF(this->logUtil, "UserHelper", this, "toXmlNode");
                }
            }
            return usersNode;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->XSLLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->FAILURE, this, "toXmlNode", e);
            }
            return nullptr;
        } JAVA_END_TRY;
}


void UsersView_addDomNodeInterfaces(UsersView* this) {
        UsersView_addDomNodeInterface(this, ((DomNodeInterface*) this));
}


// throws Exception
const char* UsersView_view(UsersView* this) {
        JAVA_TRY {
            UsersView_addDomNodeInterfaces(this);
            return HttpStoreComponentView_view((&this->base));
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->TAGHELPERERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "view()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}

