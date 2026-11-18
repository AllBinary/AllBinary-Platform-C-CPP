#ifndef ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
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
// package org.allbinary.logic.io.file

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/io/FilenameFilter.h"
#include "java/io/IOException.h"
#include "java/net/URI.h"

typedef struct AbFileInterface AbFileInterface;
struct AbFileInterface {
    bool (*canRead)(void* this);
    bool (*canWrite)(void* this);
    bool (*createNewFile)(void* this);
    bool (*delete)(void* this);
    void (*deleteOnExit)(void* this);
    bool (*exists)(void* this);
    const char* (*getAbsolutePath)(void* this);
    const char* (*getCanonicalPath)(void* this);
    const char* (*getParent)(void* this);
    const char* (*getPath)(void* this);
    bool (*isAbsolute)(void* this);
    bool (*isDirectory)(void* this);
    bool (*isFile)(void* this);
    bool (*isHidden)(void* this);
    int64_t (*lastModified)(void* this);
    int64_t (*length)(void* this);
    const char** (*list)(void* this);
    const char** (*listWithFilter)(void* this, FilenameFilter* filter);
    bool (*mkdir)(void* this);
    bool (*mkdirs)(void* this);
    bool (*setLastModified)(void* this, int64_t time);
    bool (*setReadOnly)(void* this);
    const char* (*toString)(void* this);
    URI* (*toURI)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbFileInterface_staticInit(void);

static inline bool AbFileInterface_canRead(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->canRead)) java_method_of(this, "canRead"))(this);
}

static inline bool AbFileInterface_canWrite(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->canWrite)) java_method_of(this, "canWrite"))(this);
}

static inline bool AbFileInterface_createNewFile(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->createNewFile)) java_method_of(this, "createNewFile"))(this);
}

static inline bool AbFileInterface_delete(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->delete)) java_method_of(this, "delete"))(this);
}

static inline void AbFileInterface_deleteOnExit(void* this) {
    ((__typeof__(((AbFileInterface*) nullptr)->deleteOnExit)) java_method_of(this, "deleteOnExit"))(this);
}

static inline bool AbFileInterface_exists(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->exists)) java_method_of(this, "exists"))(this);
}

static inline const char* AbFileInterface_getAbsolutePath(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->getAbsolutePath)) java_method_of(this, "getAbsolutePath"))(this);
}

static inline const char* AbFileInterface_getCanonicalPath(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->getCanonicalPath)) java_method_of(this, "getCanonicalPath"))(this);
}

static inline const char* AbFileInterface_getParent(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->getParent)) java_method_of(this, "getParent"))(this);
}

static inline const char* AbFileInterface_getPath(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->getPath)) java_method_of(this, "getPath"))(this);
}

static inline bool AbFileInterface_isAbsolute(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->isAbsolute)) java_method_of(this, "isAbsolute"))(this);
}

static inline bool AbFileInterface_isDirectory(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->isDirectory)) java_method_of(this, "isDirectory"))(this);
}

static inline bool AbFileInterface_isFile(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->isFile)) java_method_of(this, "isFile"))(this);
}

static inline bool AbFileInterface_isHidden(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->isHidden)) java_method_of(this, "isHidden"))(this);
}

static inline int64_t AbFileInterface_lastModified(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->lastModified)) java_method_of(this, "lastModified"))(this);
}

static inline int64_t AbFileInterface_length(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->length)) java_method_of(this, "length"))(this);
}

static inline const char** AbFileInterface_list(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->list)) java_method_of(this, "list"))(this);
}

static inline const char** AbFileInterface_listWithFilter(void* this, FilenameFilter* filter) {
    return ((__typeof__(((AbFileInterface*) nullptr)->listWithFilter)) java_method_of(this, "listWithFilter"))(this, filter);
}

static inline bool AbFileInterface_mkdir(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->mkdir)) java_method_of(this, "mkdir"))(this);
}

static inline bool AbFileInterface_mkdirs(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->mkdirs)) java_method_of(this, "mkdirs"))(this);
}

static inline bool AbFileInterface_setLastModified(void* this, int64_t time) {
    return ((__typeof__(((AbFileInterface*) nullptr)->setLastModified)) java_method_of(this, "setLastModified"))(this, time);
}

static inline bool AbFileInterface_setReadOnly(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->setReadOnly)) java_method_of(this, "setReadOnly"))(this);
}

static inline const char* AbFileInterface_toString(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->toString)) java_method_of(this, "toString"))(this);
}

static inline URI* AbFileInterface_toURI(void* this) {
    return ((__typeof__(((AbFileInterface*) nullptr)->toURI)) java_method_of(this, "toURI"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_IO_FILE_ABFILEINTERFACE_H
