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
// #include "java/util/HashMap.h"
// #include "javax/mail/internet/MimeMessage.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"

typedef struct AbEmail AbEmail;
struct AbEmail {
    EmailInterface EmailInterface_interface;
    Email* email;
};


AbEmail* AbEmail_new(const char* server, const char* from, const char* to, const char* subject, const char* textBody, const char* htmlAttachment, const char* contentBase);

void AbEmail_init(AbEmail* this, const char* server, const char* from, const char* to, const char* subject, const char* textBody, const char* htmlAttachment, const char* contentBase);
MimeMessage* AbEmail_getMimeMessage(AbEmail* this);
const char* AbEmail_getDebugInfo(AbEmail* this);
const char* AbEmail_log(AbEmail* this);
HashMap* AbEmail_toHashMap(AbEmail* this);
Node* AbEmail_toXmlNode(AbEmail* this, Document* document);
Email* AbEmail_getEmail(AbEmail* this);
Document* AbEmail_toXmlDoc(AbEmail* this);

static void AbEmail_initFields(AbEmail* this) {
    this->email = nullptr;
}


void AbEmail_init(AbEmail* this, const char* server, const char* from, const char* to, const char* subject, const char* textBody, const char* htmlAttachment, const char* contentBase) {
    AbEmail_initFields(this);
        if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
            this->email = Email_new(from, to, subject, server, textBody, htmlAttachment, contentBase, true);
        } else {
            this->email = Email_new(from, to, subject, server, textBody, htmlAttachment, contentBase);
        }
}

AbEmail* AbEmail_new(const char* server, const char* from, const char* to, const char* subject, const char* textBody, const char* htmlAttachment, const char* contentBase) {
    AbEmail* this = calloc(1, sizeof(AbEmail));
    AbEmail_init(this, server, from, to, subject, textBody, htmlAttachment, contentBase);
    return this;
}


MimeMessage* AbEmail_getMimeMessage(AbEmail* this) {
        return Email_getMimeMessage(this->email);
}


const char* AbEmail_getDebugInfo(AbEmail* this) {
        return Email_getDebugInfo(this->email);
}


// throws Exception
const char* AbEmail_log(AbEmail* this) {
        return Email_log(this->email);
}


// throws Exception
HashMap* AbEmail_toHashMap(AbEmail* this) {
        return Email_toHashMap(this->email);
}


// throws Exception
Node* AbEmail_toXmlNode(AbEmail* this, Document* document) {
        return Email_toXmlNode(this->email, document);
}


Email* AbEmail_getEmail(AbEmail* this) {
        return ((Email*) this->email);
}


// throws Exception
Document* AbEmail_toXmlDoc(AbEmail* this) {
        return Email_toXmlDoc(this->email);
}

