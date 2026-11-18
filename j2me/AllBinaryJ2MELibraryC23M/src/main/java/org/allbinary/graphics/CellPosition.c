// Generated Code Do Not Modify
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"










void CellPosition_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CellPosition_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CellPosition", "V");
    java_register_method("CellPosition", "getColumn", (void*) CellPosition_getColumn);
    java_register_method("CellPosition", "getRow", (void*) CellPosition_getRow);
    java_register_method("CellPosition", "toString", (void*) CellPosition_toString);
    java_register_method("CellPosition", "getId", (void*) CellPosition_getId);
}

static void CellPosition_initFields(CellPosition* this) {
    
    
    
}


void CellPosition_init(CellPosition* this, int32_t column, int32_t row, int32_t columns, int32_t rows) {
    CellPosition_register();
    V_init(&this->base);
    CellPosition_initFields(this);
        this->column = column;
        this->row = row;
        this->id = (row * columns) + column;
}

CellPosition* CellPosition_new(int32_t column, int32_t row, int32_t columns, int32_t rows) {
    CellPosition* this = java_object_alloc(sizeof(CellPosition), "CellPosition");
    CellPosition_init(this, column, row, columns, rows);
    return this;
}


int32_t CellPosition_getColumn(CellPosition* this) {
        return this->column;
}


int32_t CellPosition_getRow(CellPosition* this) {
        return this->row;
}


const char* CellPosition_toString(CellPosition* this) {
        return CellPosition_toStringColRow(CellPosition_getColumn(this), CellPosition_getRow(this));
}


const char* CellPosition_toStringCellPosition(CellPosition* basicGeographicMapCellPosition) {
        return CellPosition_toStringColRow(CellPosition_getColumn(basicGeographicMapCellPosition), CellPosition_getRow(basicGeographicMapCellPosition));
}


const char* CellPosition_toStringColRow(int32_t i_column, int32_t i_row) {
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker_append(stringBuffer, commonSeps->PARENTHESIS_OPEN);
        StringMaker_appendint(stringBuffer, i_column);
        StringMaker_append(stringBuffer, commonSeps->COMMA);
        StringMaker_appendint(stringBuffer, i_row);
        StringMaker_append(stringBuffer, commonSeps->PARENTHESIS_CLOSE);
        return java_string_of(stringBuffer);
}


int32_t CellPosition_getId(CellPosition* this) {
        return this->id;
}

