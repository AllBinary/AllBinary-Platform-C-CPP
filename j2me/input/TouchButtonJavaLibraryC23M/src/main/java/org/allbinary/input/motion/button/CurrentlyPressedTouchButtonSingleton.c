// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/CurrentlyPressedTouchButtonSingleton.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"


static CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_instance;









void CurrentlyPressedTouchButtonSingleton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CurrentlyPressedTouchButtonSingleton_instance = CurrentlyPressedTouchButtonSingleton_new();
}

void CurrentlyPressedTouchButtonSingleton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CurrentlyPressedTouchButtonSingleton", nullptr);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "size", (void*) CurrentlyPressedTouchButtonSingleton_size);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "removeAt", (void*) CurrentlyPressedTouchButtonSingleton_removeAt);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "remove", (void*) CurrentlyPressedTouchButtonSingleton_remove);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "get", (void*) CurrentlyPressedTouchButtonSingleton_get);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "contains", (void*) CurrentlyPressedTouchButtonSingleton_contains);
    java_register_method("CurrentlyPressedTouchButtonSingleton", "add", (void*) CurrentlyPressedTouchButtonSingleton_add);
}

static void CurrentlyPressedTouchButtonSingleton_initFields(CurrentlyPressedTouchButtonSingleton* this) {
    this->list = BasicArrayListD_new();
}


CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_getInstance(void) {
        return (CurrentlyPressedTouchButtonSingleton_staticInit(), CurrentlyPressedTouchButtonSingleton_instance);
}


void CurrentlyPressedTouchButtonSingleton_init(CurrentlyPressedTouchButtonSingleton* this) {
    CurrentlyPressedTouchButtonSingleton_register();
    CurrentlyPressedTouchButtonSingleton_initFields(this);
}

CurrentlyPressedTouchButtonSingleton* CurrentlyPressedTouchButtonSingleton_new(void) {
    CurrentlyPressedTouchButtonSingleton* this = java_object_alloc(sizeof(CurrentlyPressedTouchButtonSingleton), "CurrentlyPressedTouchButtonSingleton");
    CurrentlyPressedTouchButtonSingleton_init(this);
    return this;
}


int32_t CurrentlyPressedTouchButtonSingleton_size(CurrentlyPressedTouchButtonSingleton* this) {
        return BasicArrayList_size(this->list);
}


TouchButtonInput* CurrentlyPressedTouchButtonSingleton_removeAt(CurrentlyPressedTouchButtonSingleton* this, int32_t index) {
        return ((TouchButtonInput*) BasicArrayList_removeAt(this->list, index));
}


bool CurrentlyPressedTouchButtonSingleton_remove(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        return BasicArrayList_remove(this->list, touchButtonInput);
}


TouchButtonInput* CurrentlyPressedTouchButtonSingleton_get(CurrentlyPressedTouchButtonSingleton* this, int32_t index) {
        return ((TouchButtonInput*) this->list->objectArray[index]);
}


bool CurrentlyPressedTouchButtonSingleton_contains(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        return BasicArrayList_contains(this->list, touchButtonInput);
}


void CurrentlyPressedTouchButtonSingleton_add(CurrentlyPressedTouchButtonSingleton* this, TouchButtonInput* touchButtonInput) {
        BasicArrayList_add(this->list, touchButtonInput);
}

