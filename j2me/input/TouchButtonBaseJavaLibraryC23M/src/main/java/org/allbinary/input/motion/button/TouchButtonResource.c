/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
 */
// Generated Code Do Not Modify
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct TouchButtonResource TouchButtonResource;
struct TouchButtonResource {
    const char* RESOURCE;
    const char* HINT;
};


TouchButtonResource* TouchButtonResource_new(const char* resource, const char* hint);

void TouchButtonResource_init(TouchButtonResource* this, const char* resource, const char* hint);

static void TouchButtonResource_initFields(TouchButtonResource* this) {
    
    
}


void TouchButtonResource_init(TouchButtonResource* this, const char* resource, const char* hint) {
    TouchButtonResource_initFields(this);
        this->RESOURCE = resource;
        this->HINT = hint;
}

TouchButtonResource* TouchButtonResource_new(const char* resource, const char* hint) {
    TouchButtonResource* this = calloc(1, sizeof(TouchButtonResource));
    TouchButtonResource_init(this, resource, hint);
    return this;
}

