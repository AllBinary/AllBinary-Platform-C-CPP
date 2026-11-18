// Generated Code Do Not Modify
#include "org/allbinary/emulator/device/TrueTypeFontUtilBase.h"






void TrueTypeFontUtilBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TrueTypeFontUtilBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TrueTypeFontUtilBase", nullptr);
    java_register_method("TrueTypeFontUtilBase", "getAsTextureSize", (void*) TrueTypeFontUtilBase_getAsTextureSize);
    java_register_method("TrueTypeFontUtilBase", "getCellSize", (void*) TrueTypeFontUtilBase_getCellSize);
}


void TrueTypeFontUtilBase_init(TrueTypeFontUtilBase* this, int32_t scale) {
    TrueTypeFontUtilBase_register();
}

TrueTypeFontUtilBase* TrueTypeFontUtilBase_new(int32_t scale) {
    TrueTypeFontUtilBase* this = java_object_alloc(sizeof(TrueTypeFontUtilBase), "TrueTypeFontUtilBase");
    TrueTypeFontUtilBase_init(this, scale);
    return this;
}


int32_t TrueTypeFontUtilBase_getAsTextureSize(TrueTypeFontUtilBase* this, int32_t textureSize) {
        return -1;
}


int32_t TrueTypeFontUtilBase_getCellSize(TrueTypeFontUtilBase* this, int32_t cellSize) {
        return -1;
}

