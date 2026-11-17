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
// package org.allbinary.game.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/jgrapht/GraphPath.h"
#include "org/jgrapht/graph/SimpleWeightedGraph.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct BasePathFinderGraphVisitor BasePathFinderGraphVisitor;
struct BasePathFinderGraphVisitor {
    PathFinderGraphVisitorBase base;
    BasicGeographicMap* geographicMapInterface;
    int32_t edgeMinimum;
    int32_t minPathWeight;
    int32_t maxPathWeight;
};


BasePathFinderGraphVisitor* BasePathFinderGraphVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);

void BasePathFinderGraphVisitor_init(BasePathFinderGraphVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight);
void BasePathFinderGraphVisitor_visit(BasePathFinderGraphVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList);
void BasePathFinderGraphVisitor_fixPath(BasePathFinderGraphVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList);
bool BasePathFinderGraphVisitor_isValid(BasePathFinderGraphVisitor* this, GraphPath* graphPath);
const char* BasePathFinderGraphVisitor_getInvalidReason(BasePathFinderGraphVisitor* this, GraphPath* graphPath);

static void BasePathFinderGraphVisitor_initFields(BasePathFinderGraphVisitor* this) {
    
    
    
    
}


void BasePathFinderGraphVisitor_init(BasePathFinderGraphVisitor* this, BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    PathFinderGraphVisitorBase_init(&this->base);
    BasePathFinderGraphVisitor_initFields(this);
        this->geographicMapInterface = geographicMapInterface;
        this->edgeMinimum = edgeMinimum;
        this->minPathWeight = minPathWeight;
        this->maxPathWeight = maxPathWeight;
}

BasePathFinderGraphVisitor* BasePathFinderGraphVisitor_new(BasicGeographicMap* geographicMapInterface, int32_t edgeMinimum, int32_t minPathWeight, int32_t maxPathWeight) {
    BasePathFinderGraphVisitor* this = calloc(1, sizeof(BasePathFinderGraphVisitor));
    BasePathFinderGraphVisitor_init(this, geographicMapInterface, edgeMinimum, minPathWeight, maxPathWeight);
    return this;
}


// throws Exception
void BasePathFinderGraphVisitor_visit(BasePathFinderGraphVisitor* this, SimpleWeightedGraph* graph, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList) {
}


// throws Exception
void BasePathFinderGraphVisitor_fixPath(BasePathFinderGraphVisitor* this, BasicArrayList* startPathFindingNodeList, BasicArrayList* endPathFindingNodeList, BasicArrayList* pathList) {
        for (int32_t index = BasicArrayList_size(startPathFindingNodeList) - 1; index >= 0; index--) {
            PathFindingNode* startPathFindingNode = ((PathFindingNode*) BasicArrayList_get(startPathFindingNodeList, index));
            BasicArrayList_remove(pathList, startPathFindingNode->geographicMapCellPosition);
            BasicArrayList_addAt(pathList, 0, startPathFindingNode->geographicMapCellPosition);
        }
}


bool BasePathFinderGraphVisitor_isValid(BasePathFinderGraphVisitor* this, GraphPath* graphPath) {
        if (JAVA_CALL(GraphPath_getEdgeList(graphPath), size) > this->edgeMinimum && GraphPath_getWeight(graphPath) < this->maxPathWeight && GraphPath_getWeight(graphPath) > this->minPathWeight) {
            return true;
        } else {
            return false;
        }
}


const char* BasePathFinderGraphVisitor_getInvalidReason(BasePathFinderGraphVisitor* this, GraphPath* graphPath) {
        StringMaker* stringBuffer = StringMaker_new();
        if (JAVA_CALL(GraphPath_getEdgeList(graphPath), size) < this->edgeMinimum) {
            StringMaker_append(stringBuffer, java_concat("Ignoring Small: ", java_string_of(JAVA_CALL(GraphPath_getEdgeList(graphPath), size))));
        }
        if (GraphPath_getWeight(graphPath) <= this->minPathWeight) {
            StringMaker_append(stringBuffer, java_concat(" Low Weighted Path: ", java_string_of(GraphPath_getWeight(graphPath))));
        }
        if (GraphPath_getWeight(graphPath) >= this->maxPathWeight) {
            StringMaker_append(stringBuffer, java_concat(" To High Weighted Path: ", java_string_of(GraphPath_getWeight(graphPath))));
        }
        return StringMaker_toString(stringBuffer);
}

