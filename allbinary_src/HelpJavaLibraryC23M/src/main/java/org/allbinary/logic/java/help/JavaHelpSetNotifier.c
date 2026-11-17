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
// package org.allbinary.logic.java.help

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/net/URL.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
// #include "javax/help/HelpSet.h"

typedef struct JavaHelpSetNotifier JavaHelpSetNotifier;
struct JavaHelpSetNotifier {
    char unused;
};

static BasicArrayList* JavaHelpSetNotifier_vector;

JavaHelpSetNotifier* JavaHelpSetNotifier_new(void);

void JavaHelpSetNotifier_init(JavaHelpSetNotifier* this);
static BasicArrayList* JavaHelpSetNotifier_get(void);
bool JavaHelpSetNotifier_isNotified(HelpSet* helpSet);

// Static fields with runtime initializers: call this once at startup
void JavaHelpSetNotifier_staticInit(void) {
    JavaHelpSetNotifier_vector = BasicArrayListD_new();
}


void JavaHelpSetNotifier_init(JavaHelpSetNotifier* this) {
}

JavaHelpSetNotifier* JavaHelpSetNotifier_new(void) {
    JavaHelpSetNotifier* this = calloc(1, sizeof(JavaHelpSetNotifier));
    JavaHelpSetNotifier_init(this);
    return this;
}


static BasicArrayList* JavaHelpSetNotifier_get(void) {
        return JavaHelpSetNotifier_vector;
}


bool JavaHelpSetNotifier_isNotified(HelpSet* helpSet) {
        bool isNotified = false;
        URL* url = HelpSet_getHelpSetURL(helpSet);
        int32_t size = JAVA_CALL(JavaHelpSetNotifier_vector, size);
        Any** urlArray = JAVA_CALL(JavaHelpSetNotifier_vector, toArray);
        for (int32_t i = 0; i < size; i++) {
            URL* nextURL = ((URL*) urlArray[i]);
            if (strcmp(URL_toString(url), URL_toString(nextURL)) == 0) {
                isNotified = true;
            }
        }
        JAVA_CALL(JavaHelpSetNotifier_vector, add, url);
        return isNotified;
}

