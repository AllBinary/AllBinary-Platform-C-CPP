#ifndef ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H
#define ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H
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
#include "java/security/Provider.h"

typedef struct BouncyCastleProvider BouncyCastleProvider;
struct BouncyCastleProvider {
    Provider base;
};

extern const char* BouncyCastleProvider_PROVIDER_NAME;

BouncyCastleProvider* BouncyCastleProvider_new(void);

void BouncyCastleProvider_init(BouncyCastleProvider* this);

void BouncyCastleProvider_setParameter(BouncyCastleProvider* this, const char* parameterName, void* parameter);
#define BouncyCastleProvider_new0 BouncyCastleProvider_new
#define BouncyCastleProvider_init0 BouncyCastleProvider_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BouncyCastleProvider_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BouncyCastleProvider_register(void);


#endif // ORG_BOUNCYCASTLE_JCE_PROVIDER_BOUNCYCASTLEPROVIDER_H
