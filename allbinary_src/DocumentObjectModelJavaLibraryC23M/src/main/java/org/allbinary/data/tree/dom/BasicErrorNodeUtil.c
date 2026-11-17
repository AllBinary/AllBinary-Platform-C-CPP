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
// package org.allbinary.data.tree.dom

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/error/ErrorData.h"
#include "org/w3c/dom/Document.h"
#include "org/w3c/dom/Node.h"

typedef struct BasicErrorNodeUtil BasicErrorNodeUtil;
struct BasicErrorNodeUtil {
    char unused;
};


BasicErrorNodeUtil* BasicErrorNodeUtil_new(void);

void BasicErrorNodeUtil_init(BasicErrorNodeUtil* this);
Node* BasicErrorNodeUtil_get(Document* document, const char* errorText);


void BasicErrorNodeUtil_init(BasicErrorNodeUtil* this) {
}

BasicErrorNodeUtil* BasicErrorNodeUtil_new(void) {
    BasicErrorNodeUtil* this = calloc(1, sizeof(BasicErrorNodeUtil));
    BasicErrorNodeUtil_init(this);
    return this;
}


// throws Exception
Node* BasicErrorNodeUtil_get(Document* document, const char* errorText) {
        JAVA_TRY {
            Node* node = Document_createElement(document, ErrorData_getInstance()->NAME);
            Node_appendChild(node, ModDomHelper_createNameValueNodes(document, ErrorData_getInstance()->TEXT, errorText));
            return node;
        } JAVA_CATCH(Exception, e) {
            java_throw(java_exception_new("Exception", "Error Node Creation Failure"));
        } JAVA_END_TRY;
}

