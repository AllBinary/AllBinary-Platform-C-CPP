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
// package org.allbinary.business.installer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct InitializerData InitializerData;
struct InitializerData {
    const char* DBUSER;
    const char* DBPASSWORD;
    const char* ADMINJDBCDRIVER;
    const char* ADMINSCHEMA;
    const char* ADMINSERVER;
    const char* ADMINPORT;
    const char* CUSTOMERJDBCDRIVER;
    const char* CUSTOMERNAME;
    const char* CUSTOMERUSERNAME;
    const char* CUSTOMERPASSWORD;
    const char* CUSTOMERSCHEMA;
    const char* CUSTOMERSERVER;
    const char* CUSTOMERPORT;
    const char* HISTORYJDBCDRIVER;
    const char* HISTORYNAME;
    const char* HISTORYUSERNAME;
    const char* HISTORYPASSWORD;
    const char* HISTORYSCHEMA;
    const char* HISTORYSERVER;
    const char* HISTORYPORT;
    const char* LOGJDBCDRIVER;
    const char* LOGNAME;
    const char* LOGUSERNAME;
    const char* LOGPASSWORD;
    const char* LOGSCHEMA;
    const char* LOGSERVER;
    const char* LOGPORT;
    const char* INVENTORYJDBCDRIVER;
    const char* INVENTORYNAME;
    const char* INVENTORYUSERNAME;
    const char* INVENTORYPASSWORD;
    const char* INVENTORYSCHEMA;
    const char* INVENTORYSERVER;
    const char* INVENTORYPORT;
    const char* STATICPAGESJDBCDRIVER;
    const char* STATICPAGESNAME;
    const char* STATICPAGESUSERNAME;
    const char* STATICPAGESPASSWORD;
    const char* STATICPAGESSCHEMA;
    const char* STATICPAGESSERVER;
    const char* STATICPAGESPORT;
};

static InitializerData* InitializerData_instance;

InitializerData* InitializerData_new(void);
InitializerData* InitializerData_getInstance(void);
const char* InitializerData_getJdbcDriverSolutionInfo(InitializerData* this);

// Static fields with runtime initializers: call this once at startup
void InitializerData_staticInit(void) {
    InitializerData_instance = InitializerData_new();
}

static void InitializerData_initFields(InitializerData* this) {
    this->DBUSER = "DBUSER";
    this->DBPASSWORD = "DBPASSWORD";
    this->ADMINJDBCDRIVER = "ADMIN_JDBCDRIVER";
    this->ADMINSCHEMA = "ADMINSCHEMA";
    this->ADMINSERVER = "ADMINSERVER";
    this->ADMINPORT = "ADMINPORT";
    this->CUSTOMERJDBCDRIVER = "CUSTOMER_JDBCDRIVER";
    this->CUSTOMERNAME = "CUSTOMERNAME";
    this->CUSTOMERUSERNAME = "CUSTOMERUSERNAME";
    this->CUSTOMERPASSWORD = "CUSTOMERPASSWORD";
    this->CUSTOMERSCHEMA = "CUSTOMERSCHEMA";
    this->CUSTOMERSERVER = "CUSTOMERSERVER";
    this->CUSTOMERPORT = "CUSTOMERPORT";
    this->HISTORYJDBCDRIVER = "HISTORY_JDBCDRIVER";
    this->HISTORYNAME = "HISTORYNAME";
    this->HISTORYUSERNAME = "HISTORYUSERNAME";
    this->HISTORYPASSWORD = "HISTORYPASSWORD";
    this->HISTORYSCHEMA = "HISTORYSCHEMA";
    this->HISTORYSERVER = "HISTORYSERVER";
    this->HISTORYPORT = "HISTORYPORT";
    this->LOGJDBCDRIVER = "LOG_JDBCDRIVER";
    this->LOGNAME = "LOGNAME";
    this->LOGUSERNAME = "LOGUSERNAME";
    this->LOGPASSWORD = "LOGPASSWORD";
    this->LOGSCHEMA = "LOGSCHEMA";
    this->LOGSERVER = "LOGSERVER";
    this->LOGPORT = "LOGPORT";
    this->INVENTORYJDBCDRIVER = "INVENTORY_JDBCDRIVER";
    this->INVENTORYNAME = "INVENTORYNAME";
    this->INVENTORYUSERNAME = "INVENTORYUSERNAME";
    this->INVENTORYPASSWORD = "INVENTORYPASSWORD";
    this->INVENTORYSCHEMA = "INVENTORYSCHEMA";
    this->INVENTORYSERVER = "INVENTORYSERVER";
    this->INVENTORYPORT = "INVENTORYPORT";
    this->STATICPAGESJDBCDRIVER = "STATICPAGES_JDBCDRIVER";
    this->STATICPAGESNAME = "STATICPAGESNAME";
    this->STATICPAGESUSERNAME = "STATICPAGESUSERNAME";
    this->STATICPAGESPASSWORD = "STATICPAGESPASSWORD";
    this->STATICPAGESSCHEMA = "STATICPAGESSCHEMA";
    this->STATICPAGESSERVER = "STATICPAGESSERVER";
    this->STATICPAGESPORT = "STATICPAGESPORT";
}

void InitializerData_init(InitializerData* this) {
    InitializerData_initFields(this);
}

InitializerData* InitializerData_new(void) {
    InitializerData* this = calloc(1, sizeof(InitializerData));
    InitializerData_init(this);
    return this;
}


InitializerData* InitializerData_getInstance(void) {
        return InitializerData_instance;
}


const char* InitializerData_getJdbcDriverSolutionInfo(InitializerData* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "The following describes the possible problems and solutions regarding the Jdbc Driver error(s):<p/>");
        StringMaker_append(stringBuffer, "1. A JDBC driver you specified is not in your classpath.<br/>");
        StringMaker_append(stringBuffer, "Solution 1: Move the JDBC driver into any directory specified in the existing classpath. <br/>");
        StringMaker_append(stringBuffer, "Solution 2: Add the directory that contains the JDBC driver to the classpath.<br/>");
        StringMaker_append(stringBuffer, "Solution 3: Add the JDBC driver to the WEB-INF/lib directory where you installed this webapp.<br/>");
        StringMaker_append(stringBuffer, "2. The JDBC driver you specified does not exit.<br/>");
        StringMaker_append(stringBuffer, "Solution: Get a JDBC driver. <br/>");
        StringMaker_append(stringBuffer, "3. The JDBC driver you specified is not valid.<br/>");
        StringMaker_append(stringBuffer, "Solution: Use a valid JDBC driver.<p/>");
        return StringMaker_toString(stringBuffer);
}

