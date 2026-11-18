// Generated Code Do Not Modify
#include "org/allbinary/direction/DirectionFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/direction/Direction.h"
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/string/CommonPhoneStrings.h")
#include "org/allbinary/string/CommonPhoneStrings.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif


static DirectionFactory* DirectionFactory_instance;



void DirectionFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    DirectionFactory_instance = DirectionFactory_new();
}

void DirectionFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DirectionFactory", nullptr);
}

static void DirectionFactory_initFields(DirectionFactory* this) {
    this->NAME = "DIRECTION";
    this->LEFT = Direction_new(CommonPhoneStrings_getInstance()->LEFT, "WEST", 0, 1);
    this->RIGHT = Direction_new(CommonPhoneStrings_getInstance()->RIGHT, "EAST", 1, 0);
    this->DOWN = Direction_new(CommonPhoneStrings_getInstance()->DOWN, "SOUTH", 2, 0);
    this->UP = Direction_new(CommonPhoneStrings_getInstance()->UP, "NORTH", 3, 0);
    
    
    
    
    this->NOT_BORDERED_WITH = Direction_new("NOT_BORDERED_WITH", "NOT_BORDERED_WITH", 8, 0);
    this->NO_DIRECTION = Direction_new("NO_DIRECTION", "NO_DIRECTION", 9, 0);
    this->TOP = Direction_new("TOP", "TOP", 10, 0);
    this->BOTTOM = Direction_new("BOTTOM", "BOTTOM", 11, 0);
    this->ALL_DIRECTION = Direction_new("ALL_DIRECTION", "ALL_DIRECTION", 12, 0);
}


DirectionFactory* DirectionFactory_getInstance(void) {
        return (DirectionFactory_staticInit(), DirectionFactory_instance);
}


void DirectionFactory_init(DirectionFactory* this) {
    DirectionFactory_register();
    DirectionFactory_initFields(this);
        StringMaker* stringBuffer = StringMaker_new();
        CommonSeps* commonSeps = CommonSeps_getInstance();
        this->UP_LEFT = Direction_new("UP LEFT", java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuffer, Direction_getOtherName(this->UP)), commonSeps->SPACE), Direction_getOtherName(this->LEFT))), 4, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->UP_RIGHT = Direction_new("UP RIGHT", java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuffer, Direction_getOtherName(this->UP)), commonSeps->SPACE), Direction_getOtherName(this->RIGHT))), 5, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->DOWN_LEFT = Direction_new("DOWN LEFT", java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuffer, Direction_getOtherName(this->DOWN)), commonSeps->SPACE), Direction_getOtherName(this->LEFT))), 6, 0);
        StringMaker_delete(stringBuffer, 0, StringMaker_length(stringBuffer));
        this->DOWN_RIGHT = Direction_new("DOWN RIGHT", java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(stringBuffer, Direction_getOtherName(this->DOWN)), commonSeps->SPACE), Direction_getOtherName(this->RIGHT))), 7, 0);
}

DirectionFactory* DirectionFactory_new(void) {
    DirectionFactory* this = java_object_alloc(sizeof(DirectionFactory), "DirectionFactory");
    DirectionFactory_init(this);
    return this;
}

