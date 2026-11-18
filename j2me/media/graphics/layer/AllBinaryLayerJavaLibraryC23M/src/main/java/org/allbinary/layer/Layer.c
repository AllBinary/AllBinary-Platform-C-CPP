// Generated Code Do Not Modify
#include "org/allbinary/layer/Layer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif


int32_t Layer_ID;

















void Layer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Layer_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 0);
}

void Layer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Layer", nullptr);
    java_register_method("Layer", "setPosition", (void*) Layer_setPosition);
    java_register_method("Layer", "moveDXY", (void*) Layer_moveDXY);
    java_register_method("Layer", "moveDXYZ", (void*) Layer_moveDXYZ);
    java_register_method("Layer", "getXP", (void*) Layer_getXP);
    java_register_method("Layer", "getYP", (void*) Layer_getYP);
    java_register_method("Layer", "getZP", (void*) Layer_getZP);
    java_register_method("Layer", "getWidth", (void*) Layer_getWidth);
    java_register_method("Layer", "getHeight", (void*) Layer_getHeight);
    java_register_method("Layer", "getDepth", (void*) Layer_getDepth);
    java_register_method("Layer", "setVisible", (void*) Layer_setVisible);
    java_register_method("Layer", "isVisible", (void*) Layer_isVisible);
    java_register_method("Layer", "paint", (void*) Layer_paint);
    java_register_method("Layer", "setLayerWidth", (void*) Layer_setLayerWidth);
    java_register_method("Layer", "setLayerHeight", (void*) Layer_setLayerHeight);
    java_register_method("Layer", "toStringAppend", (void*) Layer_toStringAppend);
}

static void Layer_initFields(Layer* this) {
    this->logUtil = LogUtil_getInstance();
    this->x = 0;
    this->y = 0;
    this->z = 3;
    this->width = 0;
    this->height = 0;
    this->visible = true;
}


void Layer_init(Layer* this, int32_t width, int32_t height) {
    Layer_register();
    Layer_initFields(this);
        Layer_setLayerWidth(this, width);
        Layer_setLayerHeight(this, height);
}

Layer* Layer_new(int32_t width, int32_t height) {
    Layer* this = java_object_alloc(sizeof(Layer), "Layer");
    Layer_init(this, width, height);
    return this;
}


void Layer_setPosition(Layer* this, int32_t x, int32_t y, int32_t z) {
        this->x = x;
        this->y = y;
        this->z = z;
}


void Layer_moveDXY(Layer* this, int32_t dx, int32_t dy) {
        this->x += dx;
        this->y += dy;
}


void Layer_moveDXYZ(Layer* this, int32_t dx, int32_t dy, int32_t dz) {
        this->x += dx;
        this->y += dy;
        this->z += dz;
}


int32_t Layer_getXP(Layer* this) {
        return this->x;
}


int32_t Layer_getYP(Layer* this) {
        return this->y;
}


int32_t Layer_getZP(Layer* this) {
        return this->z;
}


int32_t Layer_getWidth(Layer* this) {
        return this->width;
}


int32_t Layer_getHeight(Layer* this) {
        return this->height;
}


int64_t Layer_getDepth(Layer* this) {
        return 0LL;
}


void Layer_setVisible(Layer* this, bool visible) {
        this->visible = visible;
}


bool Layer_isVisible(Layer* this) {
        return this->visible;
}


void Layer_paint(Layer* this, Graphics* graphics) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        CanvasStrings* canvasStrings = CanvasStrings_getInstance();
        LogUtil_putF(this->logUtil, commonStrings->NOT_IMPLEMENTED, this, canvasStrings->PAINT);
}


void Layer_setLayerWidth(Layer* this, int32_t width) {
        if (width < 0) {
            java_throw(java_exception_new("IllegalArgumentException", ""));
        }
        this->width = width;
}


void Layer_setLayerHeight(Layer* this, int32_t height) {
        if (height < 0) {
            java_throw(java_exception_new("IllegalArgumentException", ""));
        }
        this->height = height;
}


void Layer_toStringAppend(Layer* this, StringMaker* stringBuffer) {
}

