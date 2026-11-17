// Generated Code Do Not Modify
#include "org/allbinary/globals/PATH_GLOBALS.h"
#include "org/allbinary/logic/io/path/AbPathData.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"


static PATH_GLOBALS* PATH_GLOBALS_instance;



void PATH_GLOBALS_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PATH_GLOBALS_instance = PATH_GLOBALS_new();
}

void PATH_GLOBALS_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PATH_GLOBALS", nullptr);
}

static void PATH_GLOBALS_initFields(PATH_GLOBALS* this) {
    
    
    
    
    
}


PATH_GLOBALS* PATH_GLOBALS_getInstance(void) {
        return (PATH_GLOBALS_staticInit(), PATH_GLOBALS_instance);
}


void PATH_GLOBALS_init(PATH_GLOBALS* this) {
    PATH_GLOBALS_register();
    PATH_GLOBALS_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        AbPathData* abPathData = AbPathData_getInstance();
        StringMaker_append(stringBuffer, "data");
        StringMaker_append(stringBuffer, abPathData->SEPARATOR);
        this->DATA_PATH = java_string_of(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->DATA_PATH);
        StringMaker_append(stringBuffer, CommonStrings_getInstance()->INIT);
        StringMaker_append(stringBuffer, abPathData->SEPARATOR);
        this->INIT_PATH = java_string_of(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->DATA_PATH);
        StringMaker_append(stringBuffer, "log");
        StringMaker_append(stringBuffer, abPathData->SEPARATOR);
        this->LOG_PATH = java_string_of(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->DATA_PATH);
        StringMaker_append(stringBuffer, "backup");
        StringMaker_append(stringBuffer, abPathData->SEPARATOR);
        this->BACKUP_PATH = java_string_of(stringBuffer);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        StringMaker_append(stringBuffer, this->INIT_PATH);
        StringMaker_append(stringBuffer, "views");
        StringMaker_append(stringBuffer, abPathData->SEPARATOR);
        this->VIEWS_PATH = java_string_of(stringBuffer);
}

PATH_GLOBALS* PATH_GLOBALS_new(void) {
    PATH_GLOBALS* this = java_object_alloc(sizeof(PATH_GLOBALS), "PATH_GLOBALS");
    PATH_GLOBALS_init(this);
    return this;
}

