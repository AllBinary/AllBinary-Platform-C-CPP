// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/FormUtil.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"


static FormUtil* FormUtil_instance;



void FormUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    FormUtil_instance = FormUtil_new();
}

void FormUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FormUtil", nullptr);
    java_register_method("FormUtil", "createFormRectangle", (void*) FormUtil_createFormRectangle);
}

void FormUtil_init(FormUtil* this) {
    FormUtil_register();
}

FormUtil* FormUtil_new(void) {
    FormUtil* this = java_object_alloc(sizeof(FormUtil), "FormUtil");
    FormUtil_init(this);
    return this;
}


FormUtil* FormUtil_getInstance(void) {
        return (FormUtil_staticInit(), FormUtil_instance);
}


Rectangle* FormUtil_createFormRectangle(FormUtil* this) {
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        PointFactory* pointFactory = PointFactory_getInstance();
        Rectangle* rectangle = Rectangle_new(PointFactory_createXY(pointFactory, 30, 10), DisplayInfoSingleton_getLastWidth(displayInfo) - 30, DisplayInfoSingleton_getLastHeight(displayInfo) - 35);
        return rectangle;
}

