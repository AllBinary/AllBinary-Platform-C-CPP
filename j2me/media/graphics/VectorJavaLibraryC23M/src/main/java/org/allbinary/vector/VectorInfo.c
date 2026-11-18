// Generated Code Do Not Modify
#include "org/allbinary/vector/VectorInfo.h"





static void VectorInfo_setWidth(VectorInfo* this, int32_t width);


static void VectorInfo_setHeight(VectorInfo* this, int32_t height);


static void VectorInfo_setPoints(VectorInfo* this, int32_t** points);


static void VectorInfo_setTotalFrames(VectorInfo* this, int32_t totalFrames);

void VectorInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorInfo", nullptr);
    java_register_method("VectorInfo", "getWidth", (void*) VectorInfo_getWidth);
    java_register_method("VectorInfo", "setWidth", (void*) VectorInfo_setWidth);
    java_register_method("VectorInfo", "getHeight", (void*) VectorInfo_getHeight);
    java_register_method("VectorInfo", "setHeight", (void*) VectorInfo_setHeight);
    java_register_method("VectorInfo", "getPoints", (void*) VectorInfo_getPoints);
    java_register_method("VectorInfo", "setPoints", (void*) VectorInfo_setPoints);
    java_register_method("VectorInfo", "getTotalFrames", (void*) VectorInfo_getTotalFrames);
    java_register_method("VectorInfo", "setTotalFrames", (void*) VectorInfo_setTotalFrames);
}

static void VectorInfo_initFields(VectorInfo* this) {
    
    
    
    
}


void VectorInfo_init(VectorInfo* this, int32_t width, int32_t height, int32_t** points, int32_t totalFrames) {
    VectorInfo_register();
    VectorInfo_initFields(this);
        this->width = width;
        this->height = height;
        this->points = points;
        this->totalFrames = totalFrames;
}

VectorInfo* VectorInfo_new(int32_t width, int32_t height, int32_t** points, int32_t totalFrames) {
    VectorInfo* this = java_object_alloc(sizeof(VectorInfo), "VectorInfo");
    VectorInfo_init(this, width, height, points, totalFrames);
    return this;
}


int32_t VectorInfo_getWidth(VectorInfo* this) {
        return this->width;
}


static void VectorInfo_setWidth(VectorInfo* this, int32_t width) {
        this->width = width;
}


int32_t VectorInfo_getHeight(VectorInfo* this) {
        return this->height;
}


static void VectorInfo_setHeight(VectorInfo* this, int32_t height) {
        this->height = height;
}


int32_t** VectorInfo_getPoints(VectorInfo* this) {
        return this->points;
}


static void VectorInfo_setPoints(VectorInfo* this, int32_t** points) {
        this->points = points;
}


int32_t VectorInfo_getTotalFrames(VectorInfo* this) {
        return this->totalFrames;
}


static void VectorInfo_setTotalFrames(VectorInfo* this, int32_t totalFrames) {
        this->totalFrames = totalFrames;
}

