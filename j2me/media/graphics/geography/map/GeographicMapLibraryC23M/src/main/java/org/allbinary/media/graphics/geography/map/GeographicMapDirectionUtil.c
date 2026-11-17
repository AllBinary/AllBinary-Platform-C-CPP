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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/graphics/CellPosition.h"

typedef struct GeographicMapDirectionUtil GeographicMapDirectionUtil;
struct GeographicMapDirectionUtil {
    const char* MESSAGE;
    const char* ERROR;
    const char* EQUAL;
};

static GeographicMapDirectionUtil* GeographicMapDirectionUtil_instance;

GeographicMapDirectionUtil* GeographicMapDirectionUtil_new(void);
GeographicMapDirectionUtil* GeographicMapDirectionUtil_getInstance(void);

void GeographicMapDirectionUtil_init(GeographicMapDirectionUtil* this);
Direction* GeographicMapDirectionUtil_getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);
Direction* GeographicMapDirectionUtil_getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);
Direction* GeographicMapDirectionUtil_getDirectionFromCellPositionToCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);
Direction* GeographicMapDirectionUtil_getEightDirectionFromCellPositionToCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void GeographicMapDirectionUtil_staticInit(void) {
    GeographicMapDirectionUtil_instance = GeographicMapDirectionUtil_new();
}

static void GeographicMapDirectionUtil_initFields(GeographicMapDirectionUtil* this) {
    this->MESSAGE = "Cell Position should have been cached!!!";
    this->ERROR = "Error: ";
    this->EQUAL = " == ";
}


GeographicMapDirectionUtil* GeographicMapDirectionUtil_getInstance(void) {
        return GeographicMapDirectionUtil_instance;
}


void GeographicMapDirectionUtil_init(GeographicMapDirectionUtil* this) {
    GeographicMapDirectionUtil_initFields(this);
}

GeographicMapDirectionUtil* GeographicMapDirectionUtil_new(void) {
    GeographicMapDirectionUtil* this = calloc(1, sizeof(GeographicMapDirectionUtil));
    GeographicMapDirectionUtil_init(this);
    return this;
}


// throws Exception
Direction* GeographicMapDirectionUtil_getDirectionFromCellPositionToAdjacentCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) {
        int32_t fromColumn = GeographicMapCellPosition_getColumn(fromGeographicMapCellPosition);
        int32_t fromRow = GeographicMapCellPosition_getRow(fromGeographicMapCellPosition);
        int32_t goColumn = GeographicMapCellPosition_getColumn(toGeographicMapCellPosition);
        int32_t goRow = GeographicMapCellPosition_getRow(toGeographicMapCellPosition);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (fromColumn - 1 == goColumn) {
            return directionFactory->LEFT;
        } else if (fromColumn + 1 == goColumn) {
            return directionFactory->RIGHT;
        } else if (fromRow - 1 == goRow) {
            return directionFactory->UP;
        } else if (fromRow + 1 == goRow) {
            return directionFactory->DOWN;
        } else if (fromGeographicMapCellPosition == toGeographicMapCellPosition) {
            return directionFactory->NO_DIRECTION;
        } else if (fromRow == goRow && fromColumn == goColumn) {
            java_throw(java_exception_new("Exception", this->MESSAGE));
        }
        return directionFactory->NOT_BORDERED_WITH;
}


// throws Exception
Direction* GeographicMapDirectionUtil_getEightDirectionFromCellPositionToAdjacentCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) {
        int32_t fromColumn = GeographicMapCellPosition_getColumn(fromGeographicMapCellPosition);
        int32_t fromRow = GeographicMapCellPosition_getRow(fromGeographicMapCellPosition);
        int32_t goColumn = GeographicMapCellPosition_getColumn(toGeographicMapCellPosition);
        int32_t goRow = GeographicMapCellPosition_getRow(toGeographicMapCellPosition);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (fromRow == goRow) {
            if (fromColumn - 1 == goColumn) {
                return directionFactory->LEFT;
            } else if (fromColumn + 1 == goColumn) {
                return directionFactory->RIGHT;
            }
        } else if (fromRow - 1 == goRow) {
            if (fromColumn == goColumn) {
                return directionFactory->UP;
            }
            if (fromColumn - 1 == goColumn) {
                return directionFactory->UP_LEFT;
            } else if (fromColumn + 1 == goColumn) {
                return directionFactory->UP_RIGHT;
            }
        } else if (fromRow + 1 == goRow) {
            if (fromColumn == goColumn) {
                return directionFactory->DOWN;
            }
            if (fromColumn - 1 == goColumn) {
                return directionFactory->DOWN_LEFT;
            } else if (fromColumn + 1 == goColumn) {
                return directionFactory->DOWN_RIGHT;
            }
        } else if (fromGeographicMapCellPosition == toGeographicMapCellPosition) {
            return directionFactory->NO_DIRECTION;
        } else if (fromRow == goRow && fromColumn == goColumn) {
            java_throw(java_exception_new("Exception", this->MESSAGE));
        }
        return directionFactory->NOT_BORDERED_WITH;
}


// throws Exception
Direction* GeographicMapDirectionUtil_getDirectionFromCellPositionToCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) {
        int32_t fromColumn = GeographicMapCellPosition_getColumn(fromGeographicMapCellPosition);
        int32_t fromRow = GeographicMapCellPosition_getRow(fromGeographicMapCellPosition);
        int32_t goColumn = GeographicMapCellPosition_getColumn(toGeographicMapCellPosition);
        int32_t goRow = GeographicMapCellPosition_getRow(toGeographicMapCellPosition);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (fromColumn > goColumn) {
            return directionFactory->LEFT;
        } else if (fromColumn < goColumn) {
            return directionFactory->RIGHT;
        } else if (fromRow > goRow) {
            return directionFactory->UP;
        } else if (fromRow < goRow) {
            return directionFactory->DOWN;
        }
        StringMaker* stringMaker = StringMaker_new();
        const char* string = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, CellPosition_toStringCellPosition(fromGeographicMapCellPosition)), append, " == "), append, CellPosition_toStringCellPosition(toGeographicMapCellPosition)), toString);
        StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
        java_throw(java_exception_new("Exception", JAVA_CALL(JAVA_CALL(StringMaker_append(stringMaker, "Error: "), append, string), toString)));
}


// throws Exception
Direction* GeographicMapDirectionUtil_getEightDirectionFromCellPositionToCellPosition(GeographicMapDirectionUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) {
        int32_t fromColumn = GeographicMapCellPosition_getColumn(fromGeographicMapCellPosition);
        int32_t fromRow = GeographicMapCellPosition_getRow(fromGeographicMapCellPosition);
        int32_t goColumn = GeographicMapCellPosition_getColumn(toGeographicMapCellPosition);
        int32_t goRow = GeographicMapCellPosition_getRow(toGeographicMapCellPosition);
        DirectionFactory* directionFactory = DirectionFactory_getInstance();
        if (fromGeographicMapCellPosition == toGeographicMapCellPosition) {
            return directionFactory->NO_DIRECTION;
        } else if (fromRow == goRow) {
            if (fromColumn > goColumn) {
                return directionFactory->LEFT;
            } else if (fromColumn < goColumn) {
                return directionFactory->RIGHT;
            }
        } else if (fromRow > goRow) {
            if (fromColumn > goColumn) {
                return directionFactory->UP_LEFT;
            } else if (fromColumn < goColumn) {
                return directionFactory->UP_RIGHT;
            } else if (fromColumn == goColumn) {
                return directionFactory->UP;
            }
        } else if (fromRow < goRow) {
            if (fromColumn > goColumn) {
                return directionFactory->DOWN_LEFT;
            } else if (fromColumn < goColumn) {
                return directionFactory->DOWN_RIGHT;
            } else if (fromColumn == goColumn) {
                return directionFactory->DOWN;
            }
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, this->ERROR);
        StringMaker_append(stringBuffer, CellPosition_toStringCellPosition(fromGeographicMapCellPosition));
        StringMaker_append(stringBuffer, this->EQUAL);
        StringMaker_append(stringBuffer, CellPosition_toStringCellPosition(toGeographicMapCellPosition));
        java_throw(java_exception_new("Exception", StringMaker_toString(stringBuffer)));
}

