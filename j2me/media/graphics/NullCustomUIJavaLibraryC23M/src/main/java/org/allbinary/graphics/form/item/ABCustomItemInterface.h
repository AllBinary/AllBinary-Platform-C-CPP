#ifndef ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
#define ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
// Generated Code Do Not Modify
// package org.allbinary.graphics.form.item

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Graphics Graphics;

typedef struct ABCustomItemInterface ABCustomItemInterface;
struct ABCustomItemInterface {
    int32_t (*getMinimumWidth)(void* this);
    int32_t (*getMinimumHeight)(void* this);
    const char* (*getLabel)(void* this);
    void (*paintXY)(void* this, Graphics* graphics, int32_t x, int32_t y);
    void (*paintUnselected)(void* this, Graphics* graphics, int32_t x, int32_t y);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ABCustomItemInterface_staticInit(void);

static inline int32_t ABCustomItemInterface_getMinimumWidth(void* this) {
    return ((__typeof__(((ABCustomItemInterface*) nullptr)->getMinimumWidth)) java_method_of(this, "getMinimumWidth"))(this);
}

static inline int32_t ABCustomItemInterface_getMinimumHeight(void* this) {
    return ((__typeof__(((ABCustomItemInterface*) nullptr)->getMinimumHeight)) java_method_of(this, "getMinimumHeight"))(this);
}

static inline const char* ABCustomItemInterface_getLabel(void* this) {
    return ((__typeof__(((ABCustomItemInterface*) nullptr)->getLabel)) java_method_of(this, "getLabel"))(this);
}

static inline void ABCustomItemInterface_paintXY(void* this, Graphics* graphics, int32_t x, int32_t y) {
    ((__typeof__(((ABCustomItemInterface*) nullptr)->paintXY)) java_method_of(this, "paintXY"))(this, graphics, x, y);
}

static inline void ABCustomItemInterface_paintUnselected(void* this, Graphics* graphics, int32_t x, int32_t y) {
    ((__typeof__(((ABCustomItemInterface*) nullptr)->paintUnselected)) java_method_of(this, "paintUnselected"))(this, graphics, x, y);
}


#endif // ORG_ALLBINARY_GRAPHICS_FORM_ITEM_ABCUSTOMITEMINTERFACE_H
