/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.logic.communication.log.config.type

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LogConfigTypeFactory LogConfigTypeFactory;
struct LogConfigTypeFactory {
    const char* NO_DESCRIPTION;
    LogConfigType* AUTHENTICATION;
    LogConfigType* AUTHENTICATIONERROR;
    LogConfigType* CATEGORY;
    LogConfigType* CATEGORYERROR;
    LogConfigType* CRYPT;
    LogConfigType* CRYPTERROR;
    LogConfigType* EMAILLOGGING;
    LogConfigType* EMAILLOGGINGERROR;
    LogConfigType* ENTITYFACTORYERROR;
    LogConfigType* NETBEANS_MODULE;
    LogConfigType* NETBEANS_MODULE_ERROR;
    LogConfigType* FACTORYERROR;
    LogConfigType* FILE;
    LogConfigType* FILEERROR;
    LogConfigType* HTTP;
    LogConfigType* HTTPERROR;
    LogConfigType* HTTPREQUEST;
    LogConfigType* HTTPREQUESTERROR;
    LogConfigType* IDLOGGING;
    LogConfigType* JSPEXTRAOUTPUT;
    LogConfigType* JSPTAGEXTRAOUTPUT;
    LogConfigType* JSPTAG;
    LogConfigType* JSPTAGERROR;
    LogConfigType* LICENSING;
    LogConfigType* LICENSINGERROR;
    LogConfigType* LOADER;
    LogConfigType* LOADERERROR;
    LogConfigType* OS;
    LogConfigType* OSERROR;
    LogConfigType* PAYMENT;
    LogConfigType* PAYMENTERROR;
    LogConfigType* PRELOADER;
    LogConfigType* PRELOADERERROR;
    LogConfigType* PRODUCTSEARCHLOGGING;
    LogConfigType* PRODUCTSEARCHLOGGINGERROR;
    LogConfigType* SERVLET;
    LogConfigType* SERVLETERROR;
    LogConfigType* SHIPPINGERROR;
    LogConfigType* SQLLOGGINGERROR;
    LogConfigType* SQLLOGGING;
    LogConfigType* SQLTAGS;
    LogConfigType* SQLTAGSERROR;
    LogConfigType* STYLE;
    LogConfigType* STYLEERROR;
    LogConfigType* TAGHELPER;
    LogConfigType* TAGHELPERERROR;
    LogConfigType* TAGHELPERFACTORY;
    LogConfigType* TAGHELPERFACTORYERROR;
    LogConfigType* TAX;
    LogConfigType* TAXERROR;
    LogConfigType* VALIDATION;
    LogConfigType* VALIDATIONERROR;
    LogConfigType* VIEW;
    LogConfigType* VIEWERROR;
    LogConfigType* VIEWFACTORYERROR;
    LogConfigType* WORKFLOW;
    LogConfigType* WORKFLOWERROR;
    LogConfigType* XMLLOGGING;
    LogConfigType* XMLLOGGINGERROR;
    LogConfigType* XSLLOGGING;
    LogConfigType* XSLLOGGINGERROR;
    LogConfigType* REPLACE;
    LogConfigType* REPLACE_INFO;
    LogConfigType* REPLACEERROR;
    LogConfigType* SQLLOGGINGPOOL;
    LogConfigType* SQLLOGGINGPOOLERROR;
    LogConfigType* STATICPAGEGENERATIONLOGGING;
    LogConfigType* STATICPAGEGENERATIONLOGGINGERROR;
};

static LogConfigTypeFactory* LogConfigTypeFactory_instance;

LogConfigTypeFactory* LogConfigTypeFactory_new(void);
LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void);

void LogConfigTypeFactory_init(LogConfigTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void LogConfigTypeFactory_staticInit(void) {
    LogConfigTypeFactory_instance = LogConfigTypeFactory_new();
}

static void LogConfigTypeFactory_initFields(LogConfigTypeFactory* this) {
    this->NO_DESCRIPTION = "No Description";
    this->AUTHENTICATION = LogConfigType_new("Authentication", this->NO_DESCRIPTION);
    this->AUTHENTICATIONERROR = LogConfigType_new("Authentication Error", this->NO_DESCRIPTION);
    this->CATEGORY = LogConfigType_new("Category", this->NO_DESCRIPTION);
    this->CATEGORYERROR = LogConfigType_new("Category Error", this->NO_DESCRIPTION);
    this->CRYPT = LogConfigType_new("Crypt", this->NO_DESCRIPTION);
    this->CRYPTERROR = LogConfigType_new("Crypt Error", this->NO_DESCRIPTION);
    this->EMAILLOGGING = LogConfigType_new("Email", this->NO_DESCRIPTION);
    this->EMAILLOGGINGERROR = LogConfigType_new("Email Error", this->NO_DESCRIPTION);
    this->ENTITYFACTORYERROR = LogConfigType_new("Entity Factory Error", this->NO_DESCRIPTION);
    this->NETBEANS_MODULE = LogConfigType_new("NetBeans Module", this->NO_DESCRIPTION);
    this->NETBEANS_MODULE_ERROR = LogConfigType_new("NetBeans Module Error", this->NO_DESCRIPTION);
    this->FACTORYERROR = LogConfigType_new("General Factory Error", this->NO_DESCRIPTION);
    this->FILE = LogConfigType_new("File", this->NO_DESCRIPTION);
    this->FILEERROR = LogConfigType_new("File Error", this->NO_DESCRIPTION);
    this->HTTP = LogConfigType_new("HTTP", this->NO_DESCRIPTION);
    this->HTTPERROR = LogConfigType_new("HTTP Error", this->NO_DESCRIPTION);
    this->HTTPREQUEST = LogConfigType_new("Http Request", this->NO_DESCRIPTION);
    this->HTTPREQUESTERROR = LogConfigType_new("Http Request Error", this->NO_DESCRIPTION);
    this->IDLOGGING = LogConfigType_new("ID Logging", this->NO_DESCRIPTION);
    this->JSPEXTRAOUTPUT = LogConfigType_new("JSP Extra Output", this->NO_DESCRIPTION);
    this->JSPTAGEXTRAOUTPUT = LogConfigType_new("JSP Tag Extra Output", this->NO_DESCRIPTION);
    this->JSPTAG = LogConfigType_new("JSP Tag", this->NO_DESCRIPTION);
    this->JSPTAGERROR = LogConfigType_new("JSP Tag Error", this->NO_DESCRIPTION);
    this->LICENSING = LogConfigType_new("Licensing", this->NO_DESCRIPTION);
    this->LICENSINGERROR = LogConfigType_new("Licensing Error", this->NO_DESCRIPTION);
    this->LOADER = LogConfigType_new("Loader", this->NO_DESCRIPTION);
    this->LOADERERROR = LogConfigType_new("Loader Error", this->NO_DESCRIPTION);
    this->OS = LogConfigType_new("OS", this->NO_DESCRIPTION);
    this->OSERROR = LogConfigType_new("OS Error", this->NO_DESCRIPTION);
    this->PAYMENT = LogConfigType_new("Payment", this->NO_DESCRIPTION);
    this->PAYMENTERROR = LogConfigType_new("Payment Error", this->NO_DESCRIPTION);
    this->PRELOADER = LogConfigType_new("PreLoader", this->NO_DESCRIPTION);
    this->PRELOADERERROR = LogConfigType_new("PreLoader Error", this->NO_DESCRIPTION);
    this->PRODUCTSEARCHLOGGING = LogConfigType_new("Product Search Logging", this->NO_DESCRIPTION);
    this->PRODUCTSEARCHLOGGINGERROR = LogConfigType_new("Product Search Logging Error", this->NO_DESCRIPTION);
    this->SERVLET = LogConfigType_new("Servlet", this->NO_DESCRIPTION);
    this->SERVLETERROR = LogConfigType_new("Servlet Error", this->NO_DESCRIPTION);
    this->SHIPPINGERROR = LogConfigType_new("Shipping Error", this->NO_DESCRIPTION);
    this->SQLLOGGINGERROR = LogConfigType_new("SQL Error", this->NO_DESCRIPTION);
    this->SQLLOGGING = LogConfigType_new("SQL Logging", this->NO_DESCRIPTION);
    this->SQLTAGS = LogConfigType_new("SQL Tag Logging", this->NO_DESCRIPTION);
    this->SQLTAGSERROR = LogConfigType_new("SQL Tag Error", this->NO_DESCRIPTION);
    this->STYLE = LogConfigType_new("Style", this->NO_DESCRIPTION);
    this->STYLEERROR = LogConfigType_new("Style Error", this->NO_DESCRIPTION);
    this->TAGHELPER = LogConfigType_new("Tag Helper", this->NO_DESCRIPTION);
    this->TAGHELPERERROR = LogConfigType_new("Tag Helper Error", this->NO_DESCRIPTION);
    this->TAGHELPERFACTORY = LogConfigType_new("Tag Helper Factory", this->NO_DESCRIPTION);
    this->TAGHELPERFACTORYERROR = LogConfigType_new("Tag Helper Factory Error", this->NO_DESCRIPTION);
    this->TAX = LogConfigType_new("Tax", this->NO_DESCRIPTION);
    this->TAXERROR = LogConfigType_new("Tax Error", this->NO_DESCRIPTION);
    this->VALIDATION = LogConfigType_new("Validation", this->NO_DESCRIPTION);
    this->VALIDATIONERROR = LogConfigType_new("Validation Error", this->NO_DESCRIPTION);
    this->VIEW = LogConfigType_new("View", this->NO_DESCRIPTION);
    this->VIEWERROR = LogConfigType_new("View Error", this->NO_DESCRIPTION);
    this->VIEWFACTORYERROR = LogConfigType_new("View Factory Error", this->NO_DESCRIPTION);
    this->WORKFLOW = LogConfigType_new("Workflow", this->NO_DESCRIPTION);
    this->WORKFLOWERROR = LogConfigType_new("Workflow Error", this->NO_DESCRIPTION);
    this->XMLLOGGING = LogConfigType_new("XML Logging", this->NO_DESCRIPTION);
    this->XMLLOGGINGERROR = LogConfigType_new("XML Logging Error", this->NO_DESCRIPTION);
    this->XSLLOGGING = LogConfigType_new("XSL Logging", this->NO_DESCRIPTION);
    this->XSLLOGGINGERROR = LogConfigType_new("XSL Logging Error", this->NO_DESCRIPTION);
    this->REPLACE = LogConfigType_new("Replace", this->NO_DESCRIPTION);
    this->REPLACE_INFO = LogConfigType_new("Replace Info", this->NO_DESCRIPTION);
    this->REPLACEERROR = LogConfigType_new("Replace Error", this->NO_DESCRIPTION);
    this->SQLLOGGINGPOOL = LogConfigType_new("SQL Pool", this->NO_DESCRIPTION);
    this->SQLLOGGINGPOOLERROR = LogConfigType_new("SQL Pool Error", this->NO_DESCRIPTION);
    this->STATICPAGEGENERATIONLOGGING = LogConfigType_new("Static Page Generation Logging", this->NO_DESCRIPTION);
    this->STATICPAGEGENERATIONLOGGINGERROR = LogConfigType_new("Static Page Generation Logging Error", this->NO_DESCRIPTION);
}


LogConfigTypeFactory* LogConfigTypeFactory_getInstance(void) {
        return LogConfigTypeFactory_instance;
}


void LogConfigTypeFactory_init(LogConfigTypeFactory* this) {
    LogConfigTypeFactory_initFields(this);
        PreLogUtil_put("FreeBlisket", this, CommonStrings_getInstance()->CONSTRUCTOR);
}

LogConfigTypeFactory* LogConfigTypeFactory_new(void) {
    LogConfigTypeFactory* this = calloc(1, sizeof(LogConfigTypeFactory));
    LogConfigTypeFactory_init(this);
    return this;
}

