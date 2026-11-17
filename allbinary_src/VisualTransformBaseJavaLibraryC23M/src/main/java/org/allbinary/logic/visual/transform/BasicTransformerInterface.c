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
// package org.allbinary.logic.visual.transform

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/io/InputStream.h"
// #include "javax/xml/transform/URIResolver.h"
// #include "javax/xml/transform/stream/StreamSource.h"
#include "org/allbinary/logic/visual/transform/info/CompositeTransformInfoInterface.h"

typedef struct BasicTransformerInterface BasicTransformerInterface;
struct BasicTransformerInterface {
    void (*setInputStream)(void* this, InputStream* inputStream);
    void (*setURIResolver)(void* this, URIResolver* uriResolver);
    StreamSource* (*getStreamSource)(void* this);
    InputStream* (*getInputStream)(void* this);
    URIResolver* (*getURIResolver)(void* this);
    const char* (*translate)(void* this, const char* xmlDocumentStr);
};


