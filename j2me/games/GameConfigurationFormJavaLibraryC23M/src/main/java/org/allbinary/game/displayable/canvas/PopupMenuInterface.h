#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINTERFACE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINTERFACE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct PopupMenuInterface PopupMenuInterface;
struct PopupMenuInterface {
    void (*popupMenu)(void* this);
    void (*closeMenu)(void* this);
    void (*toggleMenu)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PopupMenuInterface_staticInit(void);

static inline void PopupMenuInterface_popupMenu(void* this) {
    ((__typeof__(((PopupMenuInterface*) nullptr)->popupMenu)) java_method_of(this, "popupMenu"))(this);
}

static inline void PopupMenuInterface_closeMenu(void* this) {
    ((__typeof__(((PopupMenuInterface*) nullptr)->closeMenu)) java_method_of(this, "closeMenu"))(this);
}

static inline void PopupMenuInterface_toggleMenu(void* this) {
    ((__typeof__(((PopupMenuInterface*) nullptr)->toggleMenu)) java_method_of(this, "toggleMenu"))(this);
}


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_POPUPMENUINTERFACE_H
