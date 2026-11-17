// Generated Code Do Not Modify
// package org.bouncycastle.jce.provider

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/security/Provider.h"

typedef struct BouncyCastleProvider BouncyCastleProvider;
struct BouncyCastleProvider {
    Provider base;
};

static const char* BouncyCastleProvider_info = "BouncyCastle Security Provider v1.41";
const char* BouncyCastleProvider_PROVIDER_NAME = "BC";

BouncyCastleProvider* BouncyCastleProvider_new(void);

void BouncyCastleProvider_init(BouncyCastleProvider* this);
void BouncyCastleProvider_setParameter(BouncyCastleProvider* this, const char* parameterName, Any* parameter);


void BouncyCastleProvider_init(BouncyCastleProvider* this) {
        Provider_init(&this->base, BouncyCastleProvider_PROVIDER_NAME, 1.41, BouncyCastleProvider_info);
}

BouncyCastleProvider* BouncyCastleProvider_new(void) {
    BouncyCastleProvider* this = calloc(1, sizeof(BouncyCastleProvider));
    BouncyCastleProvider_init(this);
    return this;
}


void BouncyCastleProvider_setParameter(BouncyCastleProvider* this, const char* parameterName, Any* parameter) {
}

