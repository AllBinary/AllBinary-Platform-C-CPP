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
// package org.allbinary.data.tree.dom.document

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/regex/replace/Replace.h"

typedef struct DocumentToNode DocumentToNode;
struct DocumentToNode {
    char unused;
};

static const char* DocumentToNode_XMLROOT = "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
static const char* DocumentToNode_XMLROOTSTART = "<?xml";
static const char* DocumentToNode_XMLROOTEND = "?>";
static const char* DocumentToNode_XMLJSPROOTSTART = "<jsp:root";
static const char* DocumentToNode_XMLEND = ">";
static const char* DocumentToNode_XMLJSPROOTENDSTART = "</jsp:root";

DocumentToNode* DocumentToNode_new(void);

void DocumentToNode_init(DocumentToNode* this);
const char* DocumentToNode_convertDocumentToNodeString(const char* documentString);
const char* DocumentToNode_removeXmlDefinitionFromDocumentString(const char* documentString);
const char* DocumentToNode_remove(const char* documentString, const char* start, const char* end);


void DocumentToNode_init(DocumentToNode* this) {
}

DocumentToNode* DocumentToNode_new(void) {
    DocumentToNode* this = calloc(1, sizeof(DocumentToNode));
    DocumentToNode_init(this);
    return this;
}


// throws Exception
const char* DocumentToNode_convertDocumentToNodeString(const char* documentString) {
        documentString = DocumentToNode_remove(documentString, DocumentToNode_XMLJSPROOTSTART, DocumentToNode_XMLEND);
        documentString = DocumentToNode_remove(documentString, DocumentToNode_XMLJSPROOTENDSTART, DocumentToNode_XMLEND);
        Replace* replaceXmlRoot = Replace_new(DocumentToNode_XMLROOT, StringUtil_getInstance()->EMPTY_STRING);
        return Replace_all(replaceXmlRoot, documentString);
}


const char* DocumentToNode_removeXmlDefinitionFromDocumentString(const char* documentString) {
        return DocumentToNode_remove(documentString, DocumentToNode_XMLROOTSTART, DocumentToNode_XMLROOTEND);
}


const char* DocumentToNode_remove(const char* documentString, const char* start, const char* end) {
        int32_t startIndex = 0;
        while (((startIndex = java_string_indexOf(documentString, start))) != -1) {
            if (startIndex >= 0) {
                int32_t endIndex = java_string_indexOf(documentString, end, startIndex);
                if (endIndex >= 0) {
                    const char* startString = java_substring(documentString, 0, startIndex);
                    const char* resultString = java_substring(documentString, endIndex + 1, (int32_t) strlen(documentString));
                    return java_concat(startString, resultString);
                }
            }
        }
        return documentString;
}

