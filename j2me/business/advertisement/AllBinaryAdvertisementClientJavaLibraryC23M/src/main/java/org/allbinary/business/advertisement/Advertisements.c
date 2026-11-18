// Generated Code Do Not Modify
#include "org/allbinary/business/advertisement/Advertisements.h"
#include "org/allbinary/game/rand/MyRandomFactory.h"
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/advertisement/AdvertisementProcessorInterface.h"
#if __has_include("org/allbinary/logic/system/security/licensing/LockedUtil.h")
#include "org/allbinary/logic/system/security/licensing/LockedUtil.h"
#endif












void Advertisements_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void Advertisements_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Advertisements", nullptr);
    java_register_method("Advertisements", "addPage", (void*) Advertisements_addPage);
    java_register_method("Advertisements", "startRandomPage", (void*) Advertisements_startRandomPage);
    java_register_method("Advertisements", "processRandomPage", (void*) Advertisements_processRandomPage);
    java_register_method("Advertisements", "stopAllPage", (void*) Advertisements_stopAllPage);
    java_register_method("Advertisements", "addBanner", (void*) Advertisements_addBanner);
    java_register_method("Advertisements", "startAll", (void*) Advertisements_startAll);
    java_register_method("Advertisements", "stopAllBanner", (void*) Advertisements_stopAllBanner);
    java_register_method("Advertisements", "getBanner", (void*) Advertisements_getBanner);
    java_register_method("Advertisements", "stopAll", (void*) Advertisements_stopAll);
}

static void Advertisements_initFields(Advertisements* this) {
    this->bannerList = BasicArrayListD_new();
    this->pageList = BasicArrayListD_new();
    this->myRandomFactory = MyRandomFactory_getInstance();
}

void Advertisements_init(Advertisements* this) {
    Advertisements_register();
    Advertisements_initFields(this);
}

Advertisements* Advertisements_new(void) {
    Advertisements* this = java_object_alloc(sizeof(Advertisements), "Advertisements");
    Advertisements_init(this);
    return this;
}


void Advertisements_addPage(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface) {
        if (!BasicArrayList_contains(this->pageList, advertisementProcessorInterface)) {
            BasicArrayList_add(this->pageList, advertisementProcessorInterface);
        }
}


void Advertisements_startRandomPage(Advertisements* this) {
        int32_t size = BasicArrayList_size(this->pageList);
        if (size > 0) {
            int32_t random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, size);
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[random]);
            AdvertisementProcessorInterface_start(advertisementProcessorInterface);
        }
}


void Advertisements_processRandomPage(Advertisements* this) {
        if (LockedUtil_isLocked(LockedUtil_getInstance())) {
            int32_t size = BasicArrayList_size(this->pageList);
            if (size > 0) {
                int32_t random = MyRandomFactory_getAbsoluteNextInt(this->myRandomFactory, size);
                AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[random]);
                AdvertisementProcessorInterface_process(advertisementProcessorInterface);
            }
        }
}


void Advertisements_stopAllPage(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->pageList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->pageList->objectArray[index]);
            AdvertisementProcessorInterface_stop(advertisementProcessorInterface);
        }
}


void Advertisements_addBanner(Advertisements* this, AdvertisementProcessorInterface* advertisementProcessorInterface) {
        if (!BasicArrayList_contains(this->bannerList, advertisementProcessorInterface)) {
            BasicArrayList_add(this->bannerList, advertisementProcessorInterface);
        }
}


void Advertisements_startAll(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->bannerList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
            AdvertisementProcessorInterface_start(advertisementProcessorInterface);
        }
}


void Advertisements_stopAllBanner(Advertisements* this) {
        for (int32_t index = BasicArrayList_size(this->bannerList); --index >= 0; ) {
            AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
            AdvertisementProcessorInterface_stop(advertisementProcessorInterface);
        }
}


AdvertisementProcessorInterface* Advertisements_getBanner(Advertisements* this, int32_t index) {
        AdvertisementProcessorInterface* advertisementProcessorInterface = ((AdvertisementProcessorInterface*) this->bannerList->objectArray[index]);
        return advertisementProcessorInterface;
}


void Advertisements_stopAll(Advertisements* this) {
        Advertisements_stopAllBanner(this);
        Advertisements_stopAllPage(this);
}

