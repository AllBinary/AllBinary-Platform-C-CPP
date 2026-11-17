/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.graphics.threed

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GLHolder GLHolder;
struct GLHolder {
    bool isCreated;
};


GLHolder* GLHolder_new(void);

void GLHolder_init(GLHolder* this);
void GLHolder_runOnSurfaceCreated(GLHolder* this, Any* renderer);
void GLHolder_runOnSurfaceChanged(GLHolder* this, Any* renderer, int32_t width, int32_t height);
void GLHolder_run(GLHolder* this, Any* renderer);

static void GLHolder_initFields(GLHolder* this) {
    this->isCreated = true;
}


void GLHolder_init(GLHolder* this) {
    GLHolder_initFields(this);
}

GLHolder* GLHolder_new(void) {
    GLHolder* this = calloc(1, sizeof(GLHolder));
    GLHolder_init(this);
    return this;
}


void GLHolder_runOnSurfaceCreated(GLHolder* this, Any* renderer) {
}


void GLHolder_runOnSurfaceChanged(GLHolder* this, Any* renderer, int32_t width, int32_t height) {
}


void GLHolder_run(GLHolder* this, Any* renderer) {
}

