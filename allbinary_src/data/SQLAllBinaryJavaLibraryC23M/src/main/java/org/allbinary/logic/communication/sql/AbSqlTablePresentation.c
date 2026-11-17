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
// package org.allbinary.logic.communication.sql

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/db/DbConnectionInfo.h"
#include "org/allbinary/logic/communication/sql/AbSqlBasic.h"

typedef struct AbSqlTablePresentation AbSqlTablePresentation;
struct AbSqlTablePresentation {
    AbSqlBasic base;
};


AbSqlTablePresentation* AbSqlTablePresentation_new(DbConnectionInfo* databaseConnectionInfoInterface);

void AbSqlTablePresentation_init(AbSqlTablePresentation* this, DbConnectionInfo* databaseConnectionInfoInterface);


void AbSqlTablePresentation_init(AbSqlTablePresentation* this, DbConnectionInfo* databaseConnectionInfoInterface) {
        AbSqlBasic_init(&this->base, databaseConnectionInfoInterface);
}

AbSqlTablePresentation* AbSqlTablePresentation_new(DbConnectionInfo* databaseConnectionInfoInterface) {
    AbSqlTablePresentation* this = calloc(1, sizeof(AbSqlTablePresentation));
    AbSqlTablePresentation_init(this, databaseConnectionInfoInterface);
    return this;
}

