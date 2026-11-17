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
#include "org/allbinary/graphics/j2me/workarea/canvas/CanvasJPanel.h"
#include "org/allbinary/graphics/j2me/workarea/tools/GraphicsItemInterfaceFactoryInterface.h"

typedef struct SelectionToolFactory SelectionToolFactory;
struct SelectionToolFactory {
    GraphicsItemInterfaceFactoryInterface GraphicsItemInterfaceFactoryInterface_interface;
};


SelectionToolFactory* SelectionToolFactory_new(void);
GraphicItemInterface* SelectionToolFactory_getInstance(SelectionToolFactory* this, CanvasJPanel* canvasJPanel);

void SelectionToolFactory_init(SelectionToolFactory* this) {
}

SelectionToolFactory* SelectionToolFactory_new(void) {
    SelectionToolFactory* this = calloc(1, sizeof(SelectionToolFactory));
    SelectionToolFactory_init(this);
    return this;
}


GraphicItemInterface* SelectionToolFactory_getInstance(SelectionToolFactory* this, CanvasJPanel* canvasJPanel) {
        return SelectionTool_new(canvasJPanel);
}

