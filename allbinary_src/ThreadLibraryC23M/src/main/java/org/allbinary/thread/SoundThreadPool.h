#ifndef ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H
#define ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H
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
// package org.allbinary.thread

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct ThreadPool ThreadPool;
#if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

typedef struct SoundThreadPool SoundThreadPool;
struct SoundThreadPool {
    char unused;
};


SoundThreadPool* SoundThreadPool_new(void);
void SoundThreadPool_init(SoundThreadPool* this);

ThreadPool* SoundThreadPool_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SoundThreadPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SoundThreadPool_register(void);


#endif // ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H
