// Generated Code Do Not Modify
// package org.allbinary.logic.control.crypt

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Encoder Encoder;
struct Encoder {
    char unused;
};


Encoder* Encoder_new(void);

void Encoder_init(Encoder* this);
const char* Encoder_encode(int8_t* value);
int8_t* Encoder_decode(const char* value);


void Encoder_init(Encoder* this) {
}

Encoder* Encoder_new(void) {
    Encoder* this = calloc(1, sizeof(Encoder));
    Encoder_init(this);
    return this;
}


const char* Encoder_encode(int8_t* value) {
        return nullptr;
}


int8_t* Encoder_decode(const char* value) {
        return nullptr;
}

