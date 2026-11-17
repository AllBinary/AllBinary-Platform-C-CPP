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
// package org.allbinary.business.context.modules.storefront

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct StoreFrontData StoreFrontData;
struct StoreFrontData {
    const char* CANCEL;
    const char* SELECT;
    const char* INSTALL;
    const char* INSTALL_COMPLETE;
    const char* NAME;
    const char* CURRENTHOSTNAME;
    const char* CURRENTHOSTNAMEPATH;
    const char* CURRENTHOMEHOSTNAME;
    const char* CURRENTHOMEHOSTNAMEPATH;
    const char* HOMEHOSTNAME;
    const char* HOMEHOSTNAMEPATH;
    const char* HOSTNAME;
    const char* HOSTNAMEPATH;
    const char* TESTHOMEHOSTNAME;
    const char* TESTHOMEHOSTNAMEPATH;
    const char* TESTHOSTNAME;
    const char* TESTHOSTNAMEPATH;
    const char* IMAGEPATH;
    const char* STATICPATH;
    const char* CATEGORYPATH;
    const char* INVENTORYCONTROL;
    const char* CONFIGURATION;
    const char* SUBSTORES;
    const char* TAGLOCATION;
    const char* PACKAGELOCATION;
    const char* FTP;
    const char* FTPPATH;
    const char* FTPUSERNAME;
    const char* FTPPASSWORD;
    const char* TESTFTP;
    const char* TESTFTPPATH;
    const char* TESTFTPUSERNAME;
    const char* TESTFTPPASSWORD;
    const char* SELECTSTORENAME;
};

static StoreFrontData* StoreFrontData_instance;

StoreFrontData* StoreFrontData_new(void);
StoreFrontData* StoreFrontData_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void StoreFrontData_staticInit(void) {
    StoreFrontData_instance = StoreFrontData_new();
}

static void StoreFrontData_initFields(StoreFrontData* this) {
    this->CANCEL = "Cancel Store Front";
    this->SELECT = "Select Store Front";
    this->INSTALL = "Install Store Front";
    this->INSTALL_COMPLETE = "Install Store Front Complete";
    this->NAME = "STOREFRONT_NAME";
    this->CURRENTHOSTNAME = "STOREFRONT_CURRENTHOSTNAME";
    this->CURRENTHOSTNAMEPATH = "STOREFRONT_CURRENTHOSTNAMEPATH";
    this->CURRENTHOMEHOSTNAME = "STOREFRONT_CURRENTHOMEHOSTNAME";
    this->CURRENTHOMEHOSTNAMEPATH = "STOREFRONT_CURRENTHOMEHOSTNAMEPATH";
    this->HOMEHOSTNAME = "STOREFRONT_HOMEHOSTNAME";
    this->HOMEHOSTNAMEPATH = "STOREFRONT_HOMEHOSTNAMEPATH";
    this->HOSTNAME = "STOREFRONT_HOSTNAME";
    this->HOSTNAMEPATH = "STOREFRONT_HOSTNAMEPATH";
    this->TESTHOMEHOSTNAME = "STOREFRONT_TESTHOMEHOSTNAME";
    this->TESTHOMEHOSTNAMEPATH = "STOREFRONT_TESTHOMEHOSTNAMEPATH";
    this->TESTHOSTNAME = "STOREFRONT_TESTHOSTNAME";
    this->TESTHOSTNAMEPATH = "STOREFRONT_TESTHOSTNAMEPATH";
    this->IMAGEPATH = "STOREFRONT_IMAGEPATH";
    this->STATICPATH = "STOREFRONT_STATICPATH";
    this->CATEGORYPATH = "STOREFRONT_CATEGORYPATH";
    this->INVENTORYCONTROL = "STOREFRONT_INVENTORYCONTROL";
    this->CONFIGURATION = "STOREFRONT_CONFIGURATION";
    this->SUBSTORES = "STOREFRONT_SUBSTORES";
    this->TAGLOCATION = "STOREFRONT_TAGLOCATION";
    this->PACKAGELOCATION = "STOREFRONT_PACKAGELOCATION";
    this->FTP = "STOREFRONT_FTP";
    this->FTPPATH = "STOREFRONT_FTPPATH";
    this->FTPUSERNAME = "STOREFRONT_FTPUSERNAME";
    this->FTPPASSWORD = "STOREFRONT_FTPPASSWORD";
    this->TESTFTP = "STOREFRONT_TESTFTP";
    this->TESTFTPPATH = "STOREFRONT_TESTFTPPATH";
    this->TESTFTPUSERNAME = "STOREFRONT_TESTFTPUSERNAME";
    this->TESTFTPPASSWORD = "STOREFRONT_TESTFTPPASSWORD";
    this->SELECTSTORENAME = "STOREFRONT_SELECTSTORENAME";
}

void StoreFrontData_init(StoreFrontData* this) {
    StoreFrontData_initFields(this);
}

StoreFrontData* StoreFrontData_new(void) {
    StoreFrontData* this = calloc(1, sizeof(StoreFrontData));
    StoreFrontData_init(this);
    return this;
}


StoreFrontData* StoreFrontData_getInstance(void) {
        return StoreFrontData_instance;
}

