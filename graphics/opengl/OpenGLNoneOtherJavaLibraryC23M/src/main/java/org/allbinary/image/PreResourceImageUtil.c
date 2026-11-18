// Generated Code Do Not Modify
#include "org/allbinary/image/PreResourceImageUtil.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"


static PreResourceImageUtil* PreResourceImageUtil_instance;





void PreResourceImageUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PreResourceImageUtil_instance = PreResourceImageUtil_new();
}

void PreResourceImageUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PreResourceImageUtil", nullptr);
    java_register_method("PreResourceImageUtil", "encapsulate", (void*) PreResourceImageUtil_encapsulate);
    java_register_method("PreResourceImageUtil", "updateGL", (void*) PreResourceImageUtil_updateGL);
    java_register_method("PreResourceImageUtil", "update", (void*) PreResourceImageUtil_update);
}

void PreResourceImageUtil_init(PreResourceImageUtil* this) {
    PreResourceImageUtil_register();
}

PreResourceImageUtil* PreResourceImageUtil_new(void) {
    PreResourceImageUtil* this = java_object_alloc(sizeof(PreResourceImageUtil), "PreResourceImageUtil");
    PreResourceImageUtil_init(this);
    return this;
}


PreResourceImageUtil* PreResourceImageUtil_getInstance(void) {
        return (PreResourceImageUtil_staticInit(), PreResourceImageUtil_instance);
}


Image* PreResourceImageUtil_encapsulate(PreResourceImageUtil* this, Image* image) {
        return image;
}


void PreResourceImageUtil_updateGL(PreResourceImageUtil* this, GL* gl, Image* image) {
}


void PreResourceImageUtil_update(PreResourceImageUtil* this, Graphics* graphics, Image* image) {
}

