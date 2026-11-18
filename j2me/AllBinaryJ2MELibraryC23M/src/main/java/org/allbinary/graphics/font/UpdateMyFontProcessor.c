// Generated Code Do Not Modify
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"





void UpdateMyFontProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UpdateMyFontProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UpdateMyFontProcessor", "MyFontProcessor");
    java_register_method("UpdateMyFontProcessor", "process", (void*) UpdateMyFontProcessor_process);
}

static void UpdateMyFontProcessor_initFields(UpdateMyFontProcessor* this) {
    
}


void UpdateMyFontProcessor_init(UpdateMyFontProcessor* this, UpdateMyFontInterface* keyValueDrawCharArray) {
    UpdateMyFontProcessor_register();
    MyFontProcessor_init(&this->base);
    UpdateMyFontProcessor_initFields(this);
        this->updateMeasurementProcessor = keyValueDrawCharArray;
}

UpdateMyFontProcessor* UpdateMyFontProcessor_new(UpdateMyFontInterface* keyValueDrawCharArray) {
    UpdateMyFontProcessor* this = java_object_alloc(sizeof(UpdateMyFontProcessor), "UpdateMyFontProcessor");
    UpdateMyFontProcessor_init(this, keyValueDrawCharArray);
    return this;
}


void UpdateMyFontProcessor_process(UpdateMyFontProcessor* this, Graphics* graphics) {
        UpdateMyFontInterface_updateMeasurement(this->updateMeasurementProcessor, graphics);
}

