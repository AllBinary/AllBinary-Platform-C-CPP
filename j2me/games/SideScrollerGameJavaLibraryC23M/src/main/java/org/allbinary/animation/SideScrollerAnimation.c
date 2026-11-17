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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct SideScrollerAnimation SideScrollerAnimation;
struct SideScrollerAnimation {
    char unused;
};


SideScrollerAnimation* SideScrollerAnimation_new(void);

void SideScrollerAnimation_init(SideScrollerAnimation* this);
void SideScrollerAnimation_jump(SideScrollerAnimation* this);
void SideScrollerAnimation_walk(SideScrollerAnimation* this);
void SideScrollerAnimation_run(SideScrollerAnimation* this);
void SideScrollerAnimation_crouch(SideScrollerAnimation* this);


void SideScrollerAnimation_init(SideScrollerAnimation* this) {
}

SideScrollerAnimation* SideScrollerAnimation_new(void) {
    SideScrollerAnimation* this = calloc(1, sizeof(SideScrollerAnimation));
    SideScrollerAnimation_init(this);
    return this;
}


void SideScrollerAnimation_jump(SideScrollerAnimation* this) {
}


void SideScrollerAnimation_walk(SideScrollerAnimation* this) {
}


void SideScrollerAnimation_run(SideScrollerAnimation* this) {
}


void SideScrollerAnimation_crouch(SideScrollerAnimation* this) {
}

