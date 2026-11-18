// Generated Code Do Not Modify
#include "org/allbinary/game/part/MakeCountedPartsSingletonArrayFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#include "org/allbinary/game/part/PartInterface.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryPool.h"
#endif


static MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_instance;



void MakeCountedPartsSingletonArrayFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MakeCountedPartsSingletonArrayFactory_instance = MakeCountedPartsSingletonArrayFactory_new();
}

void MakeCountedPartsSingletonArrayFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MakeCountedPartsSingletonArrayFactory", nullptr);
    java_register_method("MakeCountedPartsSingletonArrayFactory", "getUpdated", (void*) MakeCountedPartsSingletonArrayFactory_getUpdated);
}

static void MakeCountedPartsSingletonArrayFactory_initFields(MakeCountedPartsSingletonArrayFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->list = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}

void MakeCountedPartsSingletonArrayFactory_init(MakeCountedPartsSingletonArrayFactory* this) {
    MakeCountedPartsSingletonArrayFactory_register();
    MakeCountedPartsSingletonArrayFactory_initFields(this);
}

MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_new(void) {
    MakeCountedPartsSingletonArrayFactory* this = java_object_alloc(sizeof(MakeCountedPartsSingletonArrayFactory), "MakeCountedPartsSingletonArrayFactory");
    MakeCountedPartsSingletonArrayFactory_init(this);
    return this;
}


MakeCountedPartsSingletonArrayFactory* MakeCountedPartsSingletonArrayFactory_getInstance(void) {
        return (MakeCountedPartsSingletonArrayFactory_staticInit(), MakeCountedPartsSingletonArrayFactory_instance);
}


// throws Exception
PartInterface** MakeCountedPartsSingletonArrayFactory_getUpdated(MakeCountedPartsSingletonArrayFactory* this, PartInterface** partInterfaceArray) {
        this->list = BasicArrayListD_new();
        for (int32_t index = 0; index < java_array_length(partInterfaceArray); index++) {
            BasicArrayList_add(this->list, partInterfaceArray[index]);
        }
        BasicArrayList* countedBasicArrayList = CountedPickedUpLayerInterfaceFactoryPool_getList(CountedPickedUpLayerInterfaceFactoryPool_getInstance());
        CountedPickedUpLayerInterfaceFactory* layerInterfaceFactoryInterface = nullptr;
        int32_t size = BasicArrayList_size(countedBasicArrayList);
        for (int32_t index = 0; index < size; index++) {
            layerInterfaceFactoryInterface = ((CountedPickedUpLayerInterfaceFactory*) countedBasicArrayList->objectArray[index]);
            BasicArrayList_add(this->list, CountedLayerInterfaceFactoryPart_new(0, layerInterfaceFactoryInterface));
        }
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Total Parts: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        StringMaker_append(stringBuffer, " Counted: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(countedBasicArrayList));
        CommonStrings* commonStrings = CommonStrings_getInstance();
        LogUtil_putF(this->logUtil, java_string_of(stringBuffer), this, commonStrings->GET_INSTANCE);
        PartInterface** newPartInterfaceArray = ((PartInterface**) java_array_new(sizeof(PartInterface*), BasicArrayList_size(this->list)));
        int32_t newSize = java_array_length(newPartInterfaceArray);
        for (int32_t index = 0; index < newSize; index++) {
            newPartInterfaceArray[index] = ((PartInterface*) BasicArrayList_get(this->list, index));
        }
        return newPartInterfaceArray;
}

