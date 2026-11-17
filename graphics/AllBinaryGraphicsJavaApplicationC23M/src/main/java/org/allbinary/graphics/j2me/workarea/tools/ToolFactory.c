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
#include "org/allbinary/graphics/j2me/StatusFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ToolFactory ToolFactory;
struct ToolFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    GraphicsItemInterfaceFactoryInterface* selectedTool;
    const char* tool;
    const char* SELECTED_LABEL;
};

static ToolFactory* ToolFactory_instance;

ToolFactory* ToolFactory_new(void);
ToolFactory* ToolFactory_getInstance(void);
void ToolFactory_setSelectedTool(ToolFactory* this, const char* tool);
GraphicsItemInterfaceFactoryInterface* ToolFactory_getSelectedToolFactory(ToolFactory* this);

// Static fields with runtime initializers: call this once at startup
void ToolFactory_staticInit(void) {
    ToolFactory_instance = ToolFactory_new();
}

static void ToolFactory_initFields(ToolFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->selectedTool = nullptr;
    this->tool = nullptr;
    this->SELECTED_LABEL = "Selected: ";
}

void ToolFactory_init(ToolFactory* this) {
    ToolFactory_initFields(this);
}

ToolFactory* ToolFactory_new(void) {
    ToolFactory* this = calloc(1, sizeof(ToolFactory));
    ToolFactory_init(this);
    return this;
}


ToolFactory* ToolFactory_getInstance(void) {
        return ToolFactory_instance;
}


void ToolFactory_setSelectedTool(ToolFactory* this, const char* tool) {
        JAVA_TRY {
            StatusFactory_setStatus(StatusFactory_getInstance(), java_concat(this->SELECTED_LABEL, tool));
            this->tool = tool;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, this->commonStrings->EXCEPTION, this, "setSelectionTool", e);
        } JAVA_END_TRY;
}


GraphicsItemInterfaceFactoryInterface* ToolFactory_getSelectedToolFactory(ToolFactory* this) {
        StatusFactory_setStatus(StatusFactory_getInstance(), java_concat("Tool In Use: ", this->tool));
        if (this->tool != nullptr) {
            this->selectedTool = GraphicItemFactory_getInstance(GraphicItemFactory_getInstance(), this->tool);
            LogUtil_putF(this->logUtil, java_concat("New Tool: ", java_string_of(this->selectedTool)), this, "getSelectedToolFactory");
            return this->selectedTool;
        } else {
            return nullptr;
        }
}

