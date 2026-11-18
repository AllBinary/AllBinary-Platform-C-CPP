// Generated Code Do Not Modify
#include "org/allbinary/layer/LayerInterfaceFactory.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif


static LayerInterfaceFactory* LayerInterfaceFactory_SINGLETON;





void LayerInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LayerInterfaceFactory_SINGLETON = LayerInterfaceFactory_new();
}

void LayerInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LayerInterfaceFactory", nullptr);
    java_register_method("LayerInterfaceFactory", "init", (void*) LayerInterfaceFactory_initMethod);
    java_register_method("LayerInterfaceFactory", "getNexInstance", (void*) LayerInterfaceFactory_getNexInstance);
    java_register_method("LayerInterfaceFactory", "add", (void*) LayerInterfaceFactory_add);
}

static void LayerInterfaceFactory_initFields(LayerInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->HASHTABLE_LABEL = "Hashtable: ";
}

void LayerInterfaceFactory_init(LayerInterfaceFactory* this) {
    LayerInterfaceFactory_register();
    LayerInterfaceFactory_initFields(this);
}

LayerInterfaceFactory* LayerInterfaceFactory_new(void) {
    LayerInterfaceFactory* this = java_object_alloc(sizeof(LayerInterfaceFactory), "LayerInterfaceFactory");
    LayerInterfaceFactory_init(this);
    return this;
}


LayerInterfaceFactory* LayerInterfaceFactory_getInstance(void) {
        return (LayerInterfaceFactory_staticInit(), LayerInterfaceFactory_SINGLETON);
}


void LayerInterfaceFactory_initMethod(LayerInterfaceFactory* this) {
        this->list = BasicArrayListD_new();
}


// throws Exception
AllBinaryLayer* LayerInterfaceFactory_getNexInstance(LayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_string_of(StringMaker_append(StringMaker_append(StringMaker_new(), this->HASHTABLE_LABEL), StringUtil_toString(StringUtil_getInstance(), hashtable))), this, commonStrings->GET_INSTANCE);
        int32_t typeInteger = ((int32_t) Hashtable_get(hashtable, ((void*) (Layer_staticInit(), Layer_ID))));
        LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface = ((LayerInterfaceFactoryInterface*) this->list->objectArray[Integer_intValue(typeInteger) - 1]);
        return LayerInterfaceFactoryInterface_getNextInstance(layerInterfaceFactoryInterface, hashtable, x, y, z);
}


void LayerInterfaceFactory_add(LayerInterfaceFactory* this, LayerInterfaceFactoryInterface* layerInterfaceFactoryInterface) {
        BasicArrayList_add(this->list, layerInterfaceFactoryInterface);
}

