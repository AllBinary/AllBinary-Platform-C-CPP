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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct RaceTracksPathPrinter RaceTracksPathPrinter;
struct RaceTracksPathPrinter {
    char unused;
};


RaceTracksPathPrinter* RaceTracksPathPrinter_new(void);
static void RaceTracksPathPrinter_printPath(RaceTracksPathPrinter* this, BasicArrayList* list);
void RaceTracksPathPrinter_printPaths(RaceTracksPathPrinter* this, BasicArrayList* list);

void RaceTracksPathPrinter_init(RaceTracksPathPrinter* this) {
}

RaceTracksPathPrinter* RaceTracksPathPrinter_new(void) {
    RaceTracksPathPrinter* this = calloc(1, sizeof(RaceTracksPathPrinter));
    RaceTracksPathPrinter_init(this);
    return this;
}


static void RaceTracksPathPrinter_printPath(RaceTracksPathPrinter* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            Any* anyType = BasicArrayList_get(list, index);
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "pathList.add(cellPositionFactory.getInstance"), append, Any_toString(anyType)), append, ");"), toString), this, "printPath");
        }
}


void RaceTracksPathPrinter_printPaths(RaceTracksPathPrinter* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            puts(java_string_of(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), " Path "), appendint, index), append, CommonLabels_getInstance()->COLON_SEP), toString)));
            RaceTracksPathPrinter_printPath(this, ((BasicArrayList*) BasicArrayList_get(list, index)));
        }
}

