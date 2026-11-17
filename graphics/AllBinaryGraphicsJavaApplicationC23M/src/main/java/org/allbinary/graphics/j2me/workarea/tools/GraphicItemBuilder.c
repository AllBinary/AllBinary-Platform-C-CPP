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
// package org.allbinary.graphics.j2me.workarea.tools

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/w3c/dom/Node.h"

typedef struct GraphicItemBuilder GraphicItemBuilder;
struct GraphicItemBuilder {
    char unused;
};


GraphicItemBuilder* GraphicItemBuilder_new(void);

void GraphicItemBuilder_init(GraphicItemBuilder* this);
GraphicItemInterface* GraphicItemBuilder_getInstance(Node* node);


void GraphicItemBuilder_init(GraphicItemBuilder* this) {
}

GraphicItemBuilder* GraphicItemBuilder_new(void) {
    GraphicItemBuilder* this = calloc(1, sizeof(GraphicItemBuilder));
    GraphicItemBuilder_init(this);
    return this;
}


// throws Exception
GraphicItemInterface* GraphicItemBuilder_getInstance(Node* node) {
        const char* graphicItemName = Node_getNodeName(node);
        if (strcmp(graphicItemName, PointsDomUtil_getInstance()->LINES) == 0) {
            return LinesGraphicItem_new(node);
        } else {
            java_throw(java_exception_new("Exception", java_concat("Graphic Item Does Not Exist: ", graphicItemName)));
        }
}

