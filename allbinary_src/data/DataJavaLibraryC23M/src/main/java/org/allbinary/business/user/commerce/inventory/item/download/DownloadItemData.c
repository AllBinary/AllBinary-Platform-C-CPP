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
// package org.allbinary.business.user.commerce.inventory.item.download

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct DownloadItemData DownloadItemData;
struct DownloadItemData {
    char unused;
};

const char* DownloadItemData_NAME = "DOWNLOADITEM_NAME";
const char* DownloadItemData_ID = "DOWNLOADITEM_ID";
const char* DownloadItemData_SYSTEM = "DOWNLOADITEM_SYSTEM";
const char* DownloadItemData_PLATFORM = "DOWNLOADITEM_PLATFORM";
const char* DownloadItemData_SPECIAL_NAME = "DOWNLOADITEM_SPECIAL_NAME";
const char* DownloadItemData_VERSION = "DOWNLOADITEM_VERSION";
const char* DownloadItemData_CHANGES = "DOWNLOADITEM_CHANGES";
const char* DownloadItemData_LICENSE_FILE = "DOWNLOADITEM_LICENSE_FILE";
const char* DownloadItemData_FILE = "DOWNLOADITEM_FILE";
const char* DownloadItemData_EXTRA_FILES = "DOWNLOADITEM_EXTRA_FILES";
const char* DownloadItemData_SIZE = "DOWNLOADITEM_SIZE";
const char* DownloadItemData_VALID_TIME = "DOWNLOADITEM_VALID_TIME";
const char* DownloadItemData_VALID_TIME_YEARS = "DOWNLOADITEM_VALID_TIME_YEAR";
const char* DownloadItemData_VALID_TIME_MONTHS = "DOWNLOADITEM_VALID_TIME_MONTH";
const char* DownloadItemData_VALID_TIME_DAYS = "DOWNLOADITEM_VALID_TIME_DAY";
const char* DownloadItemData_VALID_TIME_HOURS = "DOWNLOADITEM_VALID_TIME_HOUR";
const char* DownloadItemData_VALID_TIME_MINUTES = "DOWNLOADITEM_VALID_TIME_MINUTES";
const char* DownloadItemData_VALID_TIME_SECONDS = "DOWNLOADITEM_VALID_TIME_SECONDS";
const char* DownloadItemData_RETRIES = "DOWNLOADITEM_RETRIES";

DownloadItemData* DownloadItemData_new(void);

void DownloadItemData_init(DownloadItemData* this) {
}

DownloadItemData* DownloadItemData_new(void) {
    DownloadItemData* this = calloc(1, sizeof(DownloadItemData));
    DownloadItemData_init(this);
    return this;
}

