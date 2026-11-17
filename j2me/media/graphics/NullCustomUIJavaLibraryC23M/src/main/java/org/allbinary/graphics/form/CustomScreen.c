// Generated Code Do Not Modify
// package org.allbinary.graphics.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/form/CustomDisplayable.h"

typedef struct CustomScreen CustomScreen;
struct CustomScreen {
    CustomDisplayable base;
};


CustomScreen* CustomScreen_new(void);

void CustomScreen_init(CustomScreen* this) {
    CustomDisplayable_init(&this->base);
}

CustomScreen* CustomScreen_new(void) {
    CustomScreen* this = calloc(1, sizeof(CustomScreen));
    CustomScreen_init(this);
    return this;
}

