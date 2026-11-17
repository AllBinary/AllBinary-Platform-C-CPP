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
// #include "java/io/ByteArrayOutputStream.h"
// #include "java/io/PrintStream.h"
// #include "java/util/HashMap.h"
// #include "java/util/Properties.h"
// #include "javax/mail/Address.h"
// #include "javax/mail/Authenticator.h"
// #include "javax/mail/Message.h"
// #include "javax/mail/MessagingException.h"
// #include "javax/mail/Session.h"
// #include "javax/mail/internet/InternetAddress.h"
// #include "javax/mail/internet/InternetHeaders.h"
// #include "javax/mail/internet/MimeBodyPart.h"
// #include "javax/mail/internet/MimeMessage.h"
// #include "javax/mail/internet/MimeMultipart.h"
#include "org/allbinary/data/tree/dom/ModDomHelper.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"
#include "org/allbinary/logic/communication/smtp/EmailInterface.h"

typedef struct Email Email;
struct Email {
    EmailInterface EmailInterface_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    MimeMessage* msg;
    Properties* properties;
    ByteArrayOutputStream* bs;
    bool isDebug;
};

static const char* Email_DEBUG = "mail.debug";
static const char* Email_SMTP_HOST = "mail.smtp.host";
static const char* Email_SMTP_PORT = "mail.smtp.port";
static const char* Email_SMTP_USER = "mail.smtp.user";
static const char* Email_SMTP_RETURN_ADDRESS = "mail.from";
static const char* Email_SMTP_LOCAL_HOST = "mail.smtp.localhost";

Email* Email_new(const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase);

void Email_init(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase);

Email* Email_new8(const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase, bool isDebug);
void Email_init8(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase, bool isDebug);
void Email_init(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase);
void Email_init(Email* this, const char* server, Authenticator* authenticator, InternetAddress** addresses_from, InternetAddress** addresses_to, InternetAddress** addresses_cc, InternetAddress** addresses_bcc, const char* subject, MimeBodyPart** mimeBodyParts);
MimeMessage* Email_getMimeMessage(Email* this);
const char* Email_getDebugInfo(Email* this);
const char* Email_log(Email* this);
HashMap* Email_toHashMap(Email* this);
Node* Email_toXmlNode(Email* this, Document* document);
Document* Email_toXmlDoc(Email* this);

static void Email_initFields(Email* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->msg = nullptr;
    this->properties = nullptr;
    this->bs = nullptr;
    
}


void Email_init(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase) {
    Email_initFields(this);
        this->isDebug = false;
        Email_init(this, from, to, subject, server, textBody, htmlAttachment, contentBase);
}

Email* Email_new(const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase) {
    Email* this = calloc(1, sizeof(Email));
    Email_init(this, from, to, subject, server, textBody, htmlAttachment, contentBase);
    return this;
}


void Email_init8(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase, bool isDebug) {
    Email_initFields(this);
        this->isDebug = isDebug;
        Email_init(this, from, to, subject, server, textBody, htmlAttachment, contentBase);
}

Email* Email_new8(const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase, bool isDebug) {
    Email* this = calloc(1, sizeof(Email));
    Email_init8(this, from, to, subject, server, textBody, htmlAttachment, contentBase, isDebug);
    return this;
}


// throws Exception
void Email_init(Email* this, const char* from, const char* to, const char* subject, const char* server, const char* textBody, const char* htmlAttachment, const char* contentBase) {
        JAVA_TRY {
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            MimeBodyPart** mimeBodyParts = ((MimeBodyPart**) java_array_new(sizeof(MimeBodyPart*), (!StringValidationUtil_isEmpty(stringValidationUtil, htmlAttachment) ? 2 : 1)));
            mimeBodyParts[0] = MimeBodyPart_new();
            JAVA_CALL(mimeBodyParts[0], setText, textBody);
            if (!StringValidationUtil_isEmpty(stringValidationUtil, htmlAttachment)) {
                InternetHeaders* internetHeaders = InternetHeaders_new();
                InternetHeaders_addHeader(internetHeaders, "Content-Type", "text/html");
                if (!StringValidationUtil_isEmpty(stringValidationUtil, contentBase)) {
                    InternetHeaders_addHeader(internetHeaders, "Content-Base", contentBase);
                }
                mimeBodyParts[1] = MimeBodyPart_new(internetHeaders, java_string_getBytes(htmlAttachment));
            }
            Email_init(this, server, ((Authenticator*) nullptr), ((InternetAddress**) java_array_from(sizeof(InternetAddress*), sizeof((InternetAddress*[]){ InternetAddress_new(from) }) / sizeof(InternetAddress*), (InternetAddress*[]){ InternetAddress_new(from) })), ((InternetAddress**) java_array_from(sizeof(InternetAddress*), sizeof((InternetAddress*[]){ InternetAddress_new(to) }) / sizeof(InternetAddress*), (InternetAddress*[]){ InternetAddress_new(to) })), ((InternetAddress**) nullptr), ((InternetAddress**) nullptr), subject, mimeBodyParts);
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "emailConstructor", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws MessagingException
// Java overloaded method: C needs a different name
void Email_init(Email* this, const char* server, Authenticator* authenticator, InternetAddress** addresses_from, InternetAddress** addresses_to, InternetAddress** addresses_cc, InternetAddress** addresses_bcc, const char* subject, MimeBodyPart** mimeBodyParts) {
        this->properties = Properties_new();
        Properties_put(this->properties, Email_SMTP_HOST, server);
        JAVA_TRY {
            const char* hostName = StringUtil_getInstance()->EMPTY_STRING;
            if (StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), hostName)) {
                if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                    LogUtil_putF(this->logUtil, "Unable to get HostName so using fake", this, "init()");
                }
                Properties_put(this->properties, Email_SMTP_LOCAL_HOST, "FakeHostName");
            }
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, "Continuing on Exception: Unable to get HostName", this, "init()", e);
            }
            Properties_put(this->properties, Email_SMTP_LOCAL_HOST, "FakeHostName");
        } JAVA_END_TRY;
        if (this->isDebug) {
            Properties_put(this->properties, Email_DEBUG, "true");
        }
        Session* session = Session_getInstance(this->properties, authenticator);
        if (this->isDebug) {
            Session_setDebug(session, true);
            this->bs = ByteArrayOutputStream_new();
            PrintStream* printStream = PrintStream_new(this->bs);
            Session_setDebugOut(session, printStream);
        }
        this->msg = MimeMessage_new(session);
        MimeMessage_addFrom(this->msg, addresses_from);
        MimeMessage_setRecipients(this->msg, Message_RecipientType->TO, addresses_to);
        MimeMessage_setRecipients(this->msg, Message_RecipientType->CC, addresses_cc);
        MimeMessage_setRecipients(this->msg, Message_RecipientType->BCC, addresses_bcc);
        MimeMessage_setSubject(this->msg, subject);
        MimeMultipart* mimeMultipart = MimeMultipart_new();
        for (int32_t i = 0; i < java_array_length(mimeBodyParts); i++) {
            MimeMultipart_addBodyPart(mimeMultipart, mimeBodyParts[i]);
        }
        MimeMessage_setContent(this->msg, mimeMultipart);
}


MimeMessage* Email_getMimeMessage(Email* this) {
        return this->msg;
}


const char* Email_getDebugInfo(Email* this) {
        if (this->isDebug) {
            return java_concat("More Logging Before This To Standard Out: ", java_string_of(java_string_new(ByteArrayOutputStream_toString(this->bs))));
        } else {
            return "Debugging Is Off";
        }
}


// throws Exception
const char* Email_log(Email* this) {
        return java_concat("\nHashMap: ", JAVA_CALL(Email_toHashMap(this), toString));
}


// throws Exception
HashMap* Email_toHashMap(Email* this) {
        JAVA_TRY {
            HashMap* hashMap = StdUtil_createHashMap(StdUtil_getInstance());
            HashMap_put(hashMap, EmailData_SERVER, ((const char*) Properties_get(this->properties, Email_SMTP_HOST)));
            Address** addresses = MimeMessage_getFrom(this->msg);
            if (addresses != nullptr) {
                for (int32_t index = 0; index < java_array_length(addresses); index++) {
                    HashMap_put(hashMap, EmailData_FROM, JAVA_CALL(addresses[index], toString));
                }
            }
            addresses = MimeMessage_getRecipients(this->msg, Message_RecipientType->TO);
            if (addresses != nullptr) {
                for (int32_t index = 0; index < java_array_length(addresses); index++) {
                    HashMap_put(hashMap, EmailData_TO, JAVA_CALL(addresses[index], toString));
                }
            }
            addresses = MimeMessage_getRecipients(this->msg, Message_RecipientType->CC);
            if (addresses != nullptr) {
                for (int32_t index = 0; index < java_array_length(addresses); index++) {
                    HashMap_put(hashMap, EmailData_CC, JAVA_CALL(addresses[index], toString));
                }
            }
            addresses = MimeMessage_getRecipients(this->msg, Message_RecipientType->BCC);
            if (addresses != nullptr) {
                for (int32_t index = 0; index < java_array_length(addresses); index++) {
                    HashMap_put(hashMap, EmailData_BCC, JAVA_CALL(addresses[index], toString));
                }
            }
            HashMap_put(hashMap, EmailData_SUBJECT, MimeMessage_getSubject(this->msg));
            MimeMultipart* mimeMultipart = ((MimeMultipart*) MimeMessage_getContent(this->msg));
            if (mimeMultipart != nullptr) {
                for (int32_t index = 0; index < MimeMultipart_getCount(mimeMultipart); index++) {
                    const char* content = ((const char*) JAVA_CALL(MimeMultipart_getBodyPart(mimeMultipart, index), getContent));
                    HashMap_put(hashMap, EmailData_CONTENT, content);
                }
            }
            return hashMap;
        } JAVA_CATCH(Exception, e) {
            if (JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypes->LOGGING, contains, JAVA_CALL(org_allbinary->logic->communication->log->config->type->LogConfigTypeFactory, getInstance)->EMAILLOGGINGERROR)) {
                LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "toHashMap()", e);
            }
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
Node* Email_toXmlNode(Email* this, Document* document) {
        Node* node = ModDomHelper_createNameValueNodes(document, EmailData_NAME, Email_toHashMap(this));
        return node;
}


// throws Exception
Document* Email_toXmlDoc(Email* this) {
        java_throw(java_exception_new("Exception", CommonStrings_getInstance()->NOT_IMPLEMENTED));
}

