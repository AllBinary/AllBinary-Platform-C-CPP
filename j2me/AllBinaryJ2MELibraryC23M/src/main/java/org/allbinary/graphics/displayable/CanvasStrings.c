// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static CanvasStrings* CanvasStrings_instance;


void CanvasStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CanvasStrings_instance = CanvasStrings_new();
}

void CanvasStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CanvasStrings", nullptr);
}

static void CanvasStrings_initFields(CanvasStrings* this) {
    this->CONSTRUCTOR = "MyCanvas::MyCanvas";
    this->PAUSE = "MyCanvas::pause";
    this->UN_PAUSE = "MyCanvas::unPause";
    this->SET_FULL_SCREEN_MODE = "setFullScreenMode";
    this->SIZE_CHANGED = "sizeChanged";
    this->SCALED_IMAGES = "scaledImages";
    this->PAINT = "paint";
    this->ON_DISPLAY_CHANGE_EVENT = "onDisplayChangeEvent";
    this->UPDATE_MEASUREMENT = "updateMeasurement";
    this->FD_WIDTH = " font/display width: ";
    this->FD_HEIGHT = " font/display height: ";
    this->EMPTY_CHILD_NAME_LIST = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->ABOUT = "About";
    this->OPTIONS = "Options";
    this->FONT_ATLAS = "/font.png";
    this->OBJ_MODEL = "_obj";
    this->MD2_MODEL = "_md2";
    this->_PNG_ = ".png";
}

void CanvasStrings_init(CanvasStrings* this) {
    CanvasStrings_register();
    CanvasStrings_initFields(this);
}

CanvasStrings* CanvasStrings_new(void) {
    CanvasStrings* this = java_object_alloc(sizeof(CanvasStrings), "CanvasStrings");
    CanvasStrings_init(this);
    return this;
}


CanvasStrings* CanvasStrings_getInstance(void) {
        return (CanvasStrings_staticInit(), CanvasStrings_instance);
}

