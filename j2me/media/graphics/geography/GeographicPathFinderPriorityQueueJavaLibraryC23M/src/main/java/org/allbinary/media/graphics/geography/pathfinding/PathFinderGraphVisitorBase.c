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
#include "org/allbinary/util/BasicArrayList.h"

//1.4.2
typedef struct PathFinderGraphVisitorBase PathFinderGraphVisitorBase;
struct PathFinderGraphVisitorBase {
    char unused;
};


PathFinderGraphVisitorBase* PathFinderGraphVisitorBase_new(void);
void PathFinderGraphVisitorBase_visit(PathFinderGraphVisitorBase* this, Any* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
void PathFinderGraphVisitorBase_fixPath(PathFinderGraphVisitorBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);
bool PathFinderGraphVisitorBase_isValid(PathFinderGraphVisitorBase* this, Any* graphPath);
const char* PathFinderGraphVisitorBase_getInvalidReason(PathFinderGraphVisitorBase* this, Any* graphPath);

void PathFinderGraphVisitorBase_init(PathFinderGraphVisitorBase* this) {
}

PathFinderGraphVisitorBase* PathFinderGraphVisitorBase_new(void) {
    PathFinderGraphVisitorBase* this = calloc(1, sizeof(PathFinderGraphVisitorBase));
    PathFinderGraphVisitorBase_init(this);
    return this;
}


// throws Exception
void PathFinderGraphVisitorBase_visit(PathFinderGraphVisitorBase* this, Any* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void PathFinderGraphVisitorBase_fixPath(PathFinderGraphVisitorBase* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool PathFinderGraphVisitorBase_isValid(PathFinderGraphVisitorBase* this, Any* graphPath) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* PathFinderGraphVisitorBase_getInvalidReason(PathFinderGraphVisitorBase* this, Any* graphPath) {
        java_throw(java_exception_new("RuntimeException", ""));
}

