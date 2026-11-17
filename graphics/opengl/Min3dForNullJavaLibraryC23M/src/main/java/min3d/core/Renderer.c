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
// package min3d.core

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/khronos/egl/EGLConfig.h"
// #include "javax/microedition/khronos/opengles/GL10.h"

typedef struct Renderer Renderer;
struct Renderer {
    void (*onSurfaceCreated)(void* this, GL10* gl, EGLConfig* config);
    void (*onSurfaceChanged)(void* this, GL10* gl, int32_t width, int32_t height);
    void (*onDrawFrame)(void* this, GL10* gl);
};


