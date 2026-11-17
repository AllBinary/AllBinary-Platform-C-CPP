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
#include "org/allbinary/logic/communication/smtp/info/BasicEmailInfo.h"
#include "org/allbinary/logic/communication/smtp/info/EmailInfo.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"

typedef struct BasicEmail BasicEmail;
struct BasicEmail {
    EmailInterface EmailInterface_interface;
    AbEmail* email;
};


BasicEmail* BasicEmail_new(EmailInfo* emailInfo, const char* to);

void BasicEmail_init(BasicEmail* this, EmailInfo* emailInfo, const char* to);
Email* BasicEmail_getEmail(BasicEmail* this);
MimeMessage* BasicEmail_getMimeMessage(BasicEmail* this);
const char* BasicEmail_getDebugInfo(BasicEmail* this);
const char* BasicEmail_log(BasicEmail* this);
HashMap* BasicEmail_toHashMap(BasicEmail* this);
Node* BasicEmail_toXmlNode(BasicEmail* this, Document* document);
Document* BasicEmail_toXmlDoc(BasicEmail* this);

static void BasicEmail_initFields(BasicEmail* this) {
    
}


void BasicEmail_init(BasicEmail* this, EmailInfo* emailInfo, const char* to) {
    BasicEmail_initFields(this);
        BasicEmailInfo* basicEmailInfo = EmailInfo_getBasicEmailInfo(emailInfo);
        this->email = AbEmail_new(JAVA_CALL(BasicEmailInfo_getEmailServerConfigurationInterface(basicEmailInfo), getSmtpServer), JAVA_CALL(BasicEmailInfo_getEmailServerConfigurationInterface(basicEmailInfo), getAccountName), to, BasicEmailInfo_getSubject(basicEmailInfo), BasicEmailInfo_getTextBody(basicEmailInfo), EmailInfo_getHtmlAttachment(emailInfo), EmailInfo_getContentBase(emailInfo));
}

BasicEmail* BasicEmail_new(EmailInfo* emailInfo, const char* to) {
    BasicEmail* this = calloc(1, sizeof(BasicEmail));
    BasicEmail_init(this, emailInfo, to);
    return this;
}


Email* BasicEmail_getEmail(BasicEmail* this) {
        return ((Email*) AbEmail_getEmail(this->email));
}


MimeMessage* BasicEmail_getMimeMessage(BasicEmail* this) {
        return AbEmail_getMimeMessage(this->email);
}


const char* BasicEmail_getDebugInfo(BasicEmail* this) {
        return AbEmail_getDebugInfo(this->email);
}


// throws Exception
const char* BasicEmail_log(BasicEmail* this) {
        return AbEmail_log(this->email);
}


// throws Exception
HashMap* BasicEmail_toHashMap(BasicEmail* this) {
        return AbEmail_toHashMap(this->email);
}


// throws Exception
Node* BasicEmail_toXmlNode(BasicEmail* this, Document* document) {
        return AbEmail_toXmlNode(this->email, document);
}


// throws Exception
Document* BasicEmail_toXmlDoc(BasicEmail* this) {
        return AbEmail_toXmlDoc(this->email);
}

