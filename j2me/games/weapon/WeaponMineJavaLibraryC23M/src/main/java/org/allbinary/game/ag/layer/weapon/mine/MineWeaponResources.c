// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/weapon/mine/MineWeaponResources.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static void* MineWeaponResources_instance;



void MineWeaponResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MineWeaponResources_instance = NullUtil_getInstance()->NULL_OBJECT;
}

void MineWeaponResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MineWeaponResources", "BasicGameResources");
}

static void MineWeaponResources_initFields(MineWeaponResources* this) {
    this->DROP_TEXT_RESOURCE = "/mine_drop_text_20_by_20.png";
    this->DROP_RESOURCE = "/mine_drop_20_by_20.png";
    this->DROP_ICON_RESOURCE = "/mine_drop_icon_20_by_20.png";
}


MineWeaponResources* MineWeaponResources_getInstance(void) {
        if ((MineWeaponResources_staticInit(), MineWeaponResources_instance) == NullUtil_getInstance()->NULL_OBJECT) {
            MineWeaponResources_instance = MineWeaponResources_new();
        }
        return ((MineWeaponResources*) (MineWeaponResources_staticInit(), MineWeaponResources_instance));
}


void MineWeaponResources_init(MineWeaponResources* this) {
    MineWeaponResources_register();
    BasicGameResources_init(&this->base);
    MineWeaponResources_initFields(this);
        const char* ROOT = "/mine";
        const char* SMALL = "_20_by_20.png";
        const char* MEDIUM = SMALL;
        const char* SIZE_FOUR = SMALL;
        const char* SIZE_FIVE = SMALL;
        const char* SIZE_SIX = SMALL;
        const char** SIZE = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }) / sizeof(const char*), (const char*[]){ SMALL, MEDIUM, SIZE_FOUR, SIZE_FIVE, SIZE_SIX }));
        BasicGameResources_initMethod((&this->base), ROOT, SIZE);
}

MineWeaponResources* MineWeaponResources_new(void) {
    MineWeaponResources* this = java_object_alloc(sizeof(MineWeaponResources), "MineWeaponResources");
    MineWeaponResources_init(this);
    return this;
}

