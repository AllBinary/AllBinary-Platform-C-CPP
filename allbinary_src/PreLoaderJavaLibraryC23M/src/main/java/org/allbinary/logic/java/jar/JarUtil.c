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
// package org.allbinary.logic.java.jar

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/IOException.h"
// #include "java/net/URL.h"
// #include "java/net/URLConnection.h"
// #include "java/util/jar/JarEntry.h"
// #include "java/util/jar/JarInputStream.h"

typedef struct JarUtil JarUtil;
struct JarUtil {
    URL* jarURL;
};


JarUtil* JarUtil_new(URL* jarURL);

void JarUtil_init(JarUtil* this, URL* jarURL);
void JarUtil_show(JarUtil* this);
void JarUtil_main(const char** args);

static void JarUtil_initFields(JarUtil* this) {
    
}


void JarUtil_init(JarUtil* this, URL* jarURL) {
    JarUtil_initFields(this);
        this->jarURL = jarURL;
}

JarUtil* JarUtil_new(URL* jarURL) {
    JarUtil* this = calloc(1, sizeof(JarUtil));
    JarUtil_init(this, jarURL);
    return this;
}


void JarUtil_show(JarUtil* this) {
        int8_t* cache = ((int8_t*) java_array_new(sizeof(int8_t), 1024));
        JAVA_TRY {
            URLConnection* conn = URL_openConnection(this->jarURL);
            JarInputStream* jis = JarInputStream_new(URLConnection_getInputStream(conn));
            while (true) {
                JarEntry* entry = JarInputStream_getNextJarEntry(jis);
                if (entry != nullptr) {
                    if (!JarEntry_isDirectory(entry)) {
                        int32_t offset = 0;
                        int32_t i = 0;
                        while (((i = JarInputStream_read(jis, cache, offset, java_array_length(cache) - offset))) != -1) {
                            offset += i;
                            if (offset >= java_array_length(cache)) {
                                int8_t* newcache = ((int8_t*) java_array_new(sizeof(int8_t), java_array_length(cache) + 1024));
                                java_array_copy(cache, 0, newcache, 0, java_array_length(cache));
                                cache = newcache;
                            }
                        }
                        int8_t* tmp = ((int8_t*) java_array_new(sizeof(int8_t), offset));
                        java_array_copy(cache, 0, tmp, 0, offset);
                        puts(java_string_of(JarEntry_getName(entry)));
                    }
                } else {
                    break;
                }
            }
        } JAVA_CATCH(IOException, ex) {
            fputs(java_string_of(ex), stderr);
            java_print_exception(ex);
        } JAVA_END_TRY;
}


// throws Exception
void JarUtil_main(const char** args) {
        JarUtil_show(JarUtil_new(URL_new("file:///G:/mnt/bc/mydev/working/j2me/MiniSpaceWars/MiniSpaceWars/dist/MiniSpaceWars.jar")));
}

