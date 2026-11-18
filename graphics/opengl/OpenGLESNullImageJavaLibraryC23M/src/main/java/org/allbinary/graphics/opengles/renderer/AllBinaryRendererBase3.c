// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/renderer/AllBinaryRendererBase3.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"





void AllBinaryRendererBase3_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AllBinaryRendererBase3_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryRendererBase3", nullptr);
    java_register_method("AllBinaryRendererBase3", "update", (void*) AllBinaryRendererBase3_update);
    java_register_method("AllBinaryRendererBase3", "add", (void*) AllBinaryRendererBase3_add);
}

static void AllBinaryRendererBase3_initFields(AllBinaryRendererBase3* this) {
    this->list = BasicArrayListD_new();
}

void AllBinaryRendererBase3_init(AllBinaryRendererBase3* this) {
    AllBinaryRendererBase3_register();
    AllBinaryRendererBase3_initFields(this);
}

AllBinaryRendererBase3* AllBinaryRendererBase3_new(void) {
    AllBinaryRendererBase3* this = java_object_alloc(sizeof(AllBinaryRendererBase3), "AllBinaryRendererBase3");
    AllBinaryRendererBase3_init(this);
    return this;
}


// throws Exception
void AllBinaryRendererBase3_update(AllBinaryRendererBase3* this, GL10* gl) {
        while (BasicArrayList_size(this->list) > 0) {
            OpenGLESImage* openGLESImage = ((OpenGLESImage*) BasicArrayList_removeAt(this->list, 0));
            if (openGLESImage != nullptr) {
                OpenGLESImage_set(openGLESImage, gl);
            }
        }
}


void AllBinaryRendererBase3_add(AllBinaryRendererBase3* this, Image* image) {
        BasicArrayList_add(this->list, image);
}

