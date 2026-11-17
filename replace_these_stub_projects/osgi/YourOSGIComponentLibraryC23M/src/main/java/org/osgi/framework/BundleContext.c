// Generated Code Do Not Modify
// package org.osgi.framework

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/Dictionary.h"

typedef struct BundleContext BundleContext;
struct BundleContext {
    Bundle** (*getBundles)(void* this);
    Bundle* (*installBundle)(void* this, const char* location);
    ServiceRegistration* (*registerService)(void* this, const char* clazz, Any* service, Dictionary* properties);
    Any* (*getService)(void* this, ServiceReference* reference);
    ServiceReference** (*getServiceReferences)(void* this, const char* clazz, const char* filter);
    ServiceReference* (*getServiceReference)(void* this, const char* clazz);
};


