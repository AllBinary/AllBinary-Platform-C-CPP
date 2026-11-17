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
// package org.allbinary.graphics.j2me.workarea.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/GPoint.h"

typedef struct Grid Grid;
struct Grid {
    GPoint* grid;
    bool isGridOn;
    bool isGridPossible;
    int32_t zoom;
    bool isChanged;
};


Grid* Grid_new(void);

void Grid_init(Grid* this);

Grid* Grid_new1(Grid* grid);
void Grid_init1(Grid* this, Grid* grid);
bool Grid_isGridOn(Grid* this);
bool Grid_isGridPossible(Grid* this);
GPoint* Grid_getGrid(Grid* this);
int32_t Grid_getZoom(Grid* this);
void Grid_showGrid(Grid* this, bool value);
void Grid_setZoom(Grid* this, int32_t zoom);

static void Grid_initFields(Grid* this) {
    
    this->isGridOn = true;
    this->isGridPossible = false;
    this->zoom = 3;
    this->isChanged = true;
}


void Grid_init(Grid* this) {
    Grid_initFields(this);
}

Grid* Grid_new(void) {
    Grid* this = calloc(1, sizeof(Grid));
    Grid_init(this);
    return this;
}


void Grid_init1(Grid* this, Grid* grid) {
    Grid_initFields(this);
        this->grid = grid->grid;
        Grid_showGrid(this, grid->isGridOn);
        this->isGridPossible = grid->isGridPossible;
        Grid_setZoom(this, GPoint_getZoom(grid));
}

Grid* Grid_new1(Grid* grid) {
    Grid* this = calloc(1, sizeof(Grid));
    Grid_init1(this, grid);
    return this;
}


bool Grid_isGridOn(Grid* this) {
        return this->isGridOn;
}


bool Grid_isGridPossible(Grid* this) {
        return this->isGridPossible;
}


GPoint* Grid_getGrid(Grid* this) {
        return this->grid;
}


int32_t Grid_getZoom(Grid* this) {
        return this->zoom;
}


void Grid_showGrid(Grid* this, bool value) {
        this->isGridOn = value;
}


void Grid_setZoom(Grid* this, int32_t zoom) {
        this->zoom = zoom;
        if (this->zoom < 1) {
            zoom = 1;
        }
        this->isChanged = true;
}

