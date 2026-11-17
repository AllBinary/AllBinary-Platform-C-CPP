// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorArrayIndexer.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/graphics/color/BasicColor.h"







void BasicColorArrayIndexer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicColorArrayIndexer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorArrayIndexer", nullptr);
    java_register_method("BasicColorArrayIndexer", "next", (void*) BasicColorArrayIndexer_next);
    java_register_method("BasicColorArrayIndexer", "get", (void*) BasicColorArrayIndexer_get);
    java_register_method("BasicColorArrayIndexer", "getBasicColorArray", (void*) BasicColorArrayIndexer_getBasicColorArray);
}

static void BasicColorArrayIndexer_initFields(BasicColorArrayIndexer* this) {
    
    
}


void BasicColorArrayIndexer_init(BasicColorArrayIndexer* this, BasicColor** basicColorArray) {
    BasicColorArrayIndexer_register();
    BasicColorArrayIndexer_initFields(this);
        this->basicColorArray = basicColorArray;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->basicColorArray));
}

BasicColorArrayIndexer* BasicColorArrayIndexer_new(BasicColor** basicColorArray) {
    BasicColorArrayIndexer* this = java_object_alloc(sizeof(BasicColorArrayIndexer), "BasicColorArrayIndexer");
    BasicColorArrayIndexer_init(this, basicColorArray);
    return this;
}


void BasicColorArrayIndexer_next(BasicColorArrayIndexer* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


BasicColor* BasicColorArrayIndexer_get(BasicColorArrayIndexer* this) {
        return this->basicColorArray[CircularIndexUtil_getIndex(this->circularIndexUtil)];
}


BasicColor** BasicColorArrayIndexer_getBasicColorArray(BasicColorArrayIndexer* this) {
        return this->basicColorArray;
}

