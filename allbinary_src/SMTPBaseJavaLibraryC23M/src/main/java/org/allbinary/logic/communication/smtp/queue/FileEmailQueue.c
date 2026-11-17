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
// package org.allbinary.logic.communication.smtp.queue

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/data/tree/dom/document/DomDocumentQueueInterface.h"

typedef struct FileEmailQueue FileEmailQueue;
struct FileEmailQueue {
    DomDocumentQueueInterface* domDocumentQueueInterface;
};


FileEmailQueue* FileEmailQueue_new(void);

void FileEmailQueue_init(FileEmailQueue* this);

static void FileEmailQueue_initFields(FileEmailQueue* this) {
    this->domDocumentQueueInterface = nullptr;
}


void FileEmailQueue_init(FileEmailQueue* this) {
    FileEmailQueue_initFields(this);
}

FileEmailQueue* FileEmailQueue_new(void) {
    FileEmailQueue* this = calloc(1, sizeof(FileEmailQueue));
    FileEmailQueue_init(this);
    return this;
}

