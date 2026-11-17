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

typedef struct CustomDisplayable CustomDisplayable;
struct CustomDisplayable {
    char unused;
};


CustomDisplayable* CustomDisplayable_new(void);
void CustomDisplayable_setTitle(CustomDisplayable* this, const char* title);

void CustomDisplayable_init(CustomDisplayable* this) {
}

CustomDisplayable* CustomDisplayable_new(void) {
    CustomDisplayable* this = calloc(1, sizeof(CustomDisplayable));
    CustomDisplayable_init(this);
    return this;
}


void CustomDisplayable_setTitle(CustomDisplayable* this, const char* title) {
}

