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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"

typedef struct ABStringComponent ABStringComponent;
struct ABStringComponent {
    char unused;
};

ABStringComponent* ABStringComponent_NULL_STRING_COMPONENT;

ABStringComponent* ABStringComponent_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
BasicColor* ABStringComponent_getBackgroundBasicColor(ABStringComponent* this);

void ABStringComponent_init(ABStringComponent* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor);
BasicColor* ABStringComponent_getForegroundBasicColor(ABStringComponent* this);
void ABStringComponent_setForegroundBasicColor(ABStringComponent* this, BasicColor* foregroundBasicColor);

// Static fields with runtime initializers: call this once at startup
void ABStringComponent_staticInit(void) {
    ABStringComponent_NULL_STRING_COMPONENT = ABStringComponent_new(BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
}


BasicColor* ABStringComponent_getBackgroundBasicColor(ABStringComponent* this) {
        return BasicColorFactory_getInstance()->WHITE;
}


void ABStringComponent_init(ABStringComponent* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
}

ABStringComponent* ABStringComponent_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    ABStringComponent* this = calloc(1, sizeof(ABStringComponent));
    ABStringComponent_init(this, backgroundBasicColor, foregroundBasicColor);
    return this;
}


BasicColor* ABStringComponent_getForegroundBasicColor(ABStringComponent* this) {
        return BasicColorFactory_getInstance()->WHITE;
}


void ABStringComponent_setForegroundBasicColor(ABStringComponent* this, BasicColor* foregroundBasicColor) {
}

