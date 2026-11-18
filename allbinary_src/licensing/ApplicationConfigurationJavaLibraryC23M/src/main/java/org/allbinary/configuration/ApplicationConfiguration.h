#ifndef ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
#define ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
// Generated Code Do Not Modify
// package org.allbinary.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Feature Feature;
typedef struct Features Features;
typedef struct MainFeatureFactory MainFeatureFactory;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct AbDataInputStream AbDataInputStream;
typedef struct AbDataOutputStream AbDataOutputStream;
typedef struct FileStreamFactory FileStreamFactory;
typedef struct NullCloseable NullCloseable;
typedef struct StreamUtil StreamUtil;
typedef struct FileFactory FileFactory;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonStrings CommonStrings;
#include "java/io/Closeable.h"
#include "java/io/InputStream.h"
#include "java/io/OutputStream.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct ApplicationConfiguration ApplicationConfiguration;
struct ApplicationConfiguration {
    LogUtil* logUtil;
    bool fullscreen;
    bool showTitleBar;
    bool progressBarView;
    const char* FILE;
};


ApplicationConfiguration* ApplicationConfiguration_new(void);

ApplicationConfiguration* ApplicationConfiguration_getInstance(void);

void ApplicationConfiguration_init(ApplicationConfiguration* this);


void ApplicationConfiguration_write(ApplicationConfiguration* this);

void ApplicationConfiguration_update(ApplicationConfiguration* this, Feature* gameFeature);

void ApplicationConfiguration_setFullscreen(ApplicationConfiguration* this, bool fullscreen);

bool ApplicationConfiguration_isFullscreen(ApplicationConfiguration* this);

void ApplicationConfiguration_setShowTitleBar(ApplicationConfiguration* this, bool showTitleBar);

bool ApplicationConfiguration_isShowTitleBar(ApplicationConfiguration* this);

void ApplicationConfiguration_setProgressBarView(ApplicationConfiguration* this, bool progressBarView);

bool ApplicationConfiguration_isProgressBarView(ApplicationConfiguration* this);

const char* ApplicationConfiguration_toString(ApplicationConfiguration* this);
#define ApplicationConfiguration_new0 ApplicationConfiguration_new
#define ApplicationConfiguration_init0 ApplicationConfiguration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ApplicationConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ApplicationConfiguration_register(void);


#endif // ORG_ALLBINARY_CONFIGURATION_APPLICATIONCONFIGURATION_H
