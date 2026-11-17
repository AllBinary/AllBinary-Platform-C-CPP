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

typedef struct EmailData EmailData;
struct EmailData {
    char unused;
};

const char* EmailData_SERVER = "EMAIL_SERVER";
const char* EmailData_NAME = "EMAIL_NAME";
const char* EmailData_FROM = "EMAIL_FROM";
const char* EmailData_TO = "EMAIL_TO";
const char* EmailData_CC = "EMAIL_CC";
const char* EmailData_BCC = "EMAIL_BCC";
const char* EmailData_SUBJECT = "EMAIL_SUBJECT";
const char* EmailData_CONTENT = "EMAIL_CONTENT";

EmailData* EmailData_new(void);

void EmailData_init(EmailData* this);


void EmailData_init(EmailData* this) {
}

EmailData* EmailData_new(void) {
    EmailData* this = calloc(1, sizeof(EmailData));
    EmailData_init(this);
    return this;
}

