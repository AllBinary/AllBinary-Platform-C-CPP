#ifndef JAVA_LANG_ANNOTATION_ANNOTATION_H
#define JAVA_LANG_ANNOTATION_ANNOTATION_H
// Generated Code Do Not Modify
// package java.lang.annotation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct Annotation Annotation;
struct Annotation {
    const char* (*annotationType)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Annotation_staticInit(void);

static inline const char* Annotation_annotationType(void* this) {
    return ((__typeof__(((Annotation*) nullptr)->annotationType)) java_method_of(this, "annotationType"))(this);
}


#endif // JAVA_LANG_ANNOTATION_ANNOTATION_H
