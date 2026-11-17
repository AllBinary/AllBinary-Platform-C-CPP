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
// package org.allbinary.logic.io

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/BufferedReader.h"
// #include "java/io/BufferedWriter.h"
// #include "java/io/FileReader.h"
// #include "java/io/FileWriter.h"
#include "org/allbinary/logic/io/file/AbFile.h"
#include "org/allbinary/logic/io/file/AbFileNativeUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct BufferedIOUtil BufferedIOUtil;
struct BufferedIOUtil {
    char unused;
};


BufferedIOUtil* BufferedIOUtil_new(void);
void BufferedIOUtil_copy(AbFile* backupFile, AbFile* backupFileBak);

void BufferedIOUtil_init(BufferedIOUtil* this) {
}

BufferedIOUtil* BufferedIOUtil_new(void) {
    BufferedIOUtil* this = calloc(1, sizeof(BufferedIOUtil));
    BufferedIOUtil_init(this);
    return this;
}


// throws Exception
void BufferedIOUtil_copy(AbFile* backupFile, AbFile* backupFileBak) {
        const char* line = StringUtil_getInstance()->EMPTY_STRING;
        BufferedWriter* tmpOut = BufferedWriter_new(FileWriter_new(AbFileNativeUtil_get(backupFileBak)));
        BufferedReader* tmpIn = BufferedReader_new(FileReader_new(AbFileNativeUtil_get(backupFile)));
        while (BufferedReader_ready(tmpIn)) {
            line = BufferedReader_readLine(tmpIn);
            BufferedWriter_write(tmpOut, line, 0, ((int32_t) strlen(line)));
            BufferedWriter_newLine(tmpOut);
        }
        BufferedWriter_flush(tmpOut);
}

