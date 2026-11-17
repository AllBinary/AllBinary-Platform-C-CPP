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
// package org.allbinary.logic.communication.ftp.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct FtpConfigurationData FtpConfigurationData;
struct FtpConfigurationData {
    char unused;
};

const char* FtpConfigurationData_NAME = "FTP_NAME";
const char* FtpConfigurationData_SERVER = "FTP_SERVER";
const char* FtpConfigurationData_PATH = "FTP_PATH";
const char* FtpConfigurationData_USERNAME = "FTP_USERNAME";
const char* FtpConfigurationData_PASSWORD = "FTP_PASSWORD";

FtpConfigurationData* FtpConfigurationData_new(void);

void FtpConfigurationData_init(FtpConfigurationData* this);


void FtpConfigurationData_init(FtpConfigurationData* this) {
}

FtpConfigurationData* FtpConfigurationData_new(void) {
    FtpConfigurationData* this = calloc(1, sizeof(FtpConfigurationData));
    FtpConfigurationData_init(this);
    return this;
}

