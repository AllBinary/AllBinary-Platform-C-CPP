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
// #include "java/util/HashMap.h"
#include "org/allbinary/log/LOGGING.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/w3c/dom/Node.h"

typedef struct GraphicItemFactory GraphicItemFactory;
struct GraphicItemFactory {
    HashMap* graphicItems;
    GraphicsItemInterfaceFactoryInterface* DEFAULT;
};

static GraphicItemFactory* GraphicItemFactory_instance;

GraphicItemFactory* GraphicItemFactory_new(void);
GraphicItemFactory* GraphicItemFactory_getInstance(void);

void GraphicItemFactory_init(GraphicItemFactory* this);
GraphicsItemInterfaceFactoryInterface* GraphicItemFactory_getInstance(GraphicItemFactory* this, const char* itemName);
HashMap* GraphicItemFactory_getInstance(GraphicItemFactory* this, BasicArrayList* graphicItemNodeList);

// Static fields with runtime initializers: call this once at startup
void GraphicItemFactory_staticInit(void) {
    GraphicItemFactory_instance = GraphicItemFactory_new();
}

static void GraphicItemFactory_initFields(GraphicItemFactory* this) {
    
    this->DEFAULT = SelectionToolFactory_new();
}


GraphicItemFactory* GraphicItemFactory_getInstance(void) {
        return GraphicItemFactory_instance;
}


void GraphicItemFactory_init(GraphicItemFactory* this) {
    GraphicItemFactory_initFields(this);
        this->graphicItems = StdUtil_createHashMap(StdUtil_getInstance());
        HashMap_put(this->graphicItems, LinesGraphicItem_getStaticName(), LinesGraphicItemFactory_new());
}

GraphicItemFactory* GraphicItemFactory_new(void) {
    GraphicItemFactory* this = calloc(1, sizeof(GraphicItemFactory));
    GraphicItemFactory_init(this);
    return this;
}


// Java overloaded method: C needs a different name
GraphicsItemInterfaceFactoryInterface* GraphicItemFactory_getInstance(GraphicItemFactory* this, const char* itemName) {
        GraphicsItemInterfaceFactoryInterface* graphicsItemInterfaceFactoryInterface = ((GraphicsItemInterfaceFactoryInterface*) HashMap_get(this->graphicItems, itemName));
        if (graphicsItemInterfaceFactoryInterface == nullptr) {
            graphicsItemInterfaceFactoryInterface = this->DEFAULT;
        }
        return graphicsItemInterfaceFactoryInterface;
}


// throws Exception
// Java overloaded method: C needs a different name
HashMap* GraphicItemFactory_getInstance(GraphicItemFactory* this, BasicArrayList* graphicItemNodeList) {
        int32_t numberOfItems = BasicArrayList_size(graphicItemNodeList);
        HashMap* graphicItemHashMap = StdUtil_createHashMap(StdUtil_getInstance());
        if (JAVA_CALL(_LOGGING, contains, _LOGGING->MENUEVENT)) {
        }
        for (int32_t index = 0; index < numberOfItems; index++) {
            GraphicItemInterface* graphicItem = GraphicItemBuilder_getInstance(((Node*) BasicArrayList_get(graphicItemNodeList, index)));
            HashMap_put(graphicItemHashMap, GraphicItemInterface_getTreeNode(graphicItem), graphicItem);
        }
        return graphicItemHashMap;
}

