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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct PathFindingNode PathFindingNode;
struct PathFindingNode {
    Any* parent;
    GeographicMapCellPosition* geographicMapCellPosition;
};


PathFindingNode* PathFindingNode_new(Any* parent, GeographicMapCellPosition* geographicMapCellPosition);

void PathFindingNode_init(PathFindingNode* this, Any* parent, GeographicMapCellPosition* geographicMapCellPosition);
PathFindingNode* PathFindingNode_getParentP(PathFindingNode* this);
void PathFindingNode_setGeographicMapCellPositionP(PathFindingNode* this, GeographicMapCellPosition* geographicMapCellPosition);
const char* PathFindingNode_toString(PathFindingNode* this);

static void PathFindingNode_initFields(PathFindingNode* this) {
    this->parent = NullUtil_getInstance()->NULL_OBJECT;
    this->geographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
}


void PathFindingNode_init(PathFindingNode* this, Any* parent, GeographicMapCellPosition* geographicMapCellPosition) {
    PathFindingNode_initFields(this);
        this->parent = parent;
        PathFindingNode_setGeographicMapCellPositionP(this, geographicMapCellPosition);
        if (this->geographicMapCellPosition == SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            java_throw(java_exception_new("Exception", "No GeographicMapCellPosition"));
        }
}

PathFindingNode* PathFindingNode_new(Any* parent, GeographicMapCellPosition* geographicMapCellPosition) {
    PathFindingNode* this = calloc(1, sizeof(PathFindingNode));
    PathFindingNode_init(this, parent, geographicMapCellPosition);
    return this;
}


PathFindingNode* PathFindingNode_getParentP(PathFindingNode* this) {
        return ((PathFindingNode*) this->parent);
}


void PathFindingNode_setGeographicMapCellPositionP(PathFindingNode* this, GeographicMapCellPosition* geographicMapCellPosition) {
        this->geographicMapCellPosition = geographicMapCellPosition;
}


const char* PathFindingNode_toString(PathFindingNode* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, CommonLabels_getInstance()->COLON_SEP);
        StringMaker_append(stringBuffer, " Path: ");
        StringMaker_append(stringBuffer, GeographicMapCellPosition_toString(this->geographicMapCellPosition));
        PathFindingNode* pathFindingNode = PathFindingNode_getParentP(this);
        while (pathFindingNode != nullptr) {
            StringMaker_append(stringBuffer, JAVA_CALL(pathFindingNode->geographicMapCellPosition, toString));
            StringMaker_append(stringBuffer, CommonSeps_getInstance()->SPACE);
            pathFindingNode = PathFindingNode_getParentP(pathFindingNode);
        }
        return StringMaker_toString(stringBuffer);
}

