// Generated Code Do Not Modify
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/string/StringMaker.h"


static Direction** Direction_directionArray;








void Direction_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Direction_directionArray = ((Direction**) java_array_new(sizeof(Direction*), 13));
}

void Direction_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Direction", nullptr);
    java_register_method("Direction", "getValue", (void*) Direction_getValue);
    java_register_method("Direction", "getFrameFactor", (void*) Direction_getFrameFactor);
    java_register_method("Direction", "getOtherName", (void*) Direction_getOtherName);
    java_register_method("Direction", "getName", (void*) Direction_getName);
    java_register_method("Direction", "toString", (void*) Direction_toString);
}

static void Direction_initFields(Direction* this) {
    
    
    
    
}


void Direction_init(Direction* this, const char* name, const char* otherName, int32_t value, int32_t frameFactor) {
    Direction_register();
    Direction_initFields(this);
        this->name = name;
        this->otherName = otherName;
        this->value = value;
        this->frameFactor = frameFactor;
        (Direction_staticInit(), Direction_directionArray)[value] = this;
}

Direction* Direction_new(const char* name, const char* otherName, int32_t value, int32_t frameFactor) {
    Direction* this = java_object_alloc(sizeof(Direction), "Direction");
    Direction_init(this, name, otherName, value, frameFactor);
    return this;
}


Direction* Direction_getInstance(int32_t direction) {
        return (Direction_staticInit(), Direction_directionArray)[direction];
}


int32_t Direction_getValue(Direction* this) {
        return this->value;
}


int32_t Direction_getFrameFactor(Direction* this) {
        return this->frameFactor;
}


const char* Direction_getOtherName(Direction* this) {
        return this->otherName;
}


const char* Direction_getName(Direction* this) {
        return this->name;
}


const char* Direction_toString(Direction* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Direction: ");
        StringMaker_append(stringBuffer, Direction_getName(this));
        StringMaker_append(stringBuffer, " Or: ");
        StringMaker_append(stringBuffer, Direction_getOtherName(this));
        StringMaker_append(stringBuffer, " Value: ");
        StringMaker_appendint(stringBuffer, this->value);
        return java_string_of(stringBuffer);
}

