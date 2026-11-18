// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonLocationHelper.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/input/motion/button/CommonButtons.h"











void TouchButtonLocationHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonLocationHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonLocationHelper", nullptr);
    java_register_method("TouchButtonLocationHelper", "getTotalColumns", (void*) TouchButtonLocationHelper_getTotalColumns);
    java_register_method("TouchButtonLocationHelper", "getTotalRows", (void*) TouchButtonLocationHelper_getTotalRows);
    java_register_method("TouchButtonLocationHelper", "getColumnsRemainder", (void*) TouchButtonLocationHelper_getColumnsRemainder);
    java_register_method("TouchButtonLocationHelper", "getRowsRemainder", (void*) TouchButtonLocationHelper_getRowsRemainder);
    java_register_method("TouchButtonLocationHelper", "getColumnsRemainderHalf", (void*) TouchButtonLocationHelper_getColumnsRemainderHalf);
    java_register_method("TouchButtonLocationHelper", "getRowsRemainderHalf", (void*) TouchButtonLocationHelper_getRowsRemainderHalf);
    java_register_method("TouchButtonLocationHelper", "toString", (void*) TouchButtonLocationHelper_toString);
}

static void TouchButtonLocationHelper_initFields(TouchButtonLocationHelper* this) {
    
    
    
    
    
    
}


void TouchButtonLocationHelper_init(TouchButtonLocationHelper* this) {
    TouchButtonLocationHelper_register();
    TouchButtonLocationHelper_initFields(this);
        int32_t buttonSize = CommonButtons_getInstance()->STANDARD_BUTTON_SIZE;
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        this->totalColumns = ((int64_t) llround(((float) DisplayInfoSingleton_getLastWidth(displayInfo)) / ((float) buttonSize)));
        this->totalRows = ((int64_t) llround(((float) DisplayInfoSingleton_getLastHeight(displayInfo)) / ((float) buttonSize)));
        this->columnsRemainder = DisplayInfoSingleton_getLastWidth(displayInfo) % buttonSize;
        this->columnsRemainderHalf = (this->columnsRemainder >> 1);
        this->rowsRemainder = DisplayInfoSingleton_getLastHeight(displayInfo) % buttonSize;
        this->rowsRemainderHalf = (this->rowsRemainder >> 1);
}

TouchButtonLocationHelper* TouchButtonLocationHelper_new(void) {
    TouchButtonLocationHelper* this = java_object_alloc(sizeof(TouchButtonLocationHelper), "TouchButtonLocationHelper");
    TouchButtonLocationHelper_init(this);
    return this;
}


int32_t TouchButtonLocationHelper_getTotalColumns(TouchButtonLocationHelper* this) {
        return this->totalColumns;
}


int32_t TouchButtonLocationHelper_getTotalRows(TouchButtonLocationHelper* this) {
        return this->totalRows;
}


int32_t TouchButtonLocationHelper_getColumnsRemainder(TouchButtonLocationHelper* this) {
        return this->columnsRemainder;
}


int32_t TouchButtonLocationHelper_getRowsRemainder(TouchButtonLocationHelper* this) {
        return this->rowsRemainder;
}


int32_t TouchButtonLocationHelper_getColumnsRemainderHalf(TouchButtonLocationHelper* this) {
        return this->columnsRemainderHalf;
}


int32_t TouchButtonLocationHelper_getRowsRemainderHalf(TouchButtonLocationHelper* this) {
        return this->rowsRemainderHalf;
}


const char* TouchButtonLocationHelper_toString(TouchButtonLocationHelper* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "totalColumns: ");
        StringMaker_appendint(stringBuffer, this->totalColumns);
        StringMaker_append(stringBuffer, " totalRows: ");
        StringMaker_appendint(stringBuffer, this->totalRows);
        StringMaker_append(stringBuffer, " columnsRemainder: ");
        StringMaker_appendint(stringBuffer, this->columnsRemainder);
        StringMaker_append(stringBuffer, " rowsRemainder: ");
        StringMaker_appendint(stringBuffer, this->rowsRemainder);
        StringMaker_append(stringBuffer, " columnsRemainderHalf: ");
        StringMaker_appendint(stringBuffer, this->columnsRemainderHalf);
        StringMaker_append(stringBuffer, " rowsRemainderHalf: ");
        StringMaker_appendint(stringBuffer, this->rowsRemainderHalf);
        return java_string_of(stringBuffer);
}

