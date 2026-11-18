// Generated Code Do Not Modify
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/GameInfo.h"
#include "org/allbinary/game/input/NullPlayerGameInputComposite.h"
#include "org/allbinary/game/input/PlayerGameInputCompositeInterface.h"
#include "org/allbinary/graphics/ItemColorFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/layer/LayerProcessor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/graphics/ItemColorFactory.h")
#include "org/allbinary/graphics/ItemColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/ItemColorFactory.h")
#include "org/allbinary/graphics/ItemColorFactory.h"
#endif


static void* AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER;
int32_t AllBinaryGameLayerManager_ID;














void AllBinaryGameLayerManager_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER = NullUtil_getInstance()->NULL_OBJECT;
    AllBinaryGameLayerManager_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 22);
}

void AllBinaryGameLayerManager_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryGameLayerManager", "AllBinaryLayerManager");
    java_register_method("AllBinaryGameLayerManager", "getLayerManager", (void*) AllBinaryGameLayerManager_getLayerManager);
    java_register_method("AllBinaryGameLayerManager", "init", (void*) AllBinaryGameLayerManager_initMethod);
    java_register_method("AllBinaryGameLayerManager", "getBackgroundBasicColor", (void*) AllBinaryGameLayerManager_getBackgroundBasicColor);
    java_register_method("AllBinaryGameLayerManager", "setBackgroundBasicColor", (void*) AllBinaryGameLayerManager_setBackgroundBasicColor);
    java_register_method("AllBinaryGameLayerManager", "getForegroundBasicColor", (void*) AllBinaryGameLayerManager_getForegroundBasicColor);
    java_register_method("AllBinaryGameLayerManager", "setForegroundBasicColor", (void*) AllBinaryGameLayerManager_setForegroundBasicColor);
    java_register_method("AllBinaryGameLayerManager", "getGameInfo", (void*) AllBinaryGameLayerManager_getGameInfo);
    java_register_method("AllBinaryGameLayerManager", "setGameInfo", (void*) AllBinaryGameLayerManager_setGameInfo);
    java_register_method("AllBinaryGameLayerManager", "setLayerProcessorList", (void*) AllBinaryGameLayerManager_setLayerProcessorList);
    java_register_method("AllBinaryGameLayerManager", "setPlayerGameInputCompositeInterface", (void*) AllBinaryGameLayerManager_setPlayerGameInputCompositeInterface);
    java_register_method("AllBinaryGameLayerManager", "getPlayerGameInputCompositeInterface", (void*) AllBinaryGameLayerManager_getPlayerGameInputCompositeInterface);
}

static void AllBinaryGameLayerManager_initFields(AllBinaryGameLayerManager* this) {
    
    
    
    this->playerGameInputCompositeInterface = (NullPlayerGameInputComposite_staticInit(), NullPlayerGameInputComposite_NULL_PLAYER_GAME_INPUT_COMPOSITE);
}


AllBinaryGameLayerManager* AllBinaryGameLayerManager_getNullInstance(void) {
        if ((AllBinaryGameLayerManager_staticInit(), AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER) == NullUtil_getInstance()->NULL_OBJECT) {
            AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER = AllBinaryGameLayerManager_new(BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE, (GameInfo_staticInit(), GameInfo_NONE));
        }
        return ((AllBinaryGameLayerManager*) (AllBinaryGameLayerManager_staticInit(), AllBinaryGameLayerManager_NULL_ALLBINARY_LAYER_MANAGER));
}


void AllBinaryGameLayerManager_init(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo) {
    AllBinaryGameLayerManager_register();
    AllBinaryLayerManager_init(&this->base);
    AllBinaryGameLayerManager_initFields(this);
        this->backgroundBasicColor = backgroundBasicColor;
        this->foregroundBasicColor = foregroundBasicColor;
        ItemColorFactory* itemColorFactory = ItemColorFactory_getInstance();
        itemColorFactory->INVERT_PAINT = BasicColor_intValue(this->backgroundBasicColor);
        itemColorFactory->PAINT = BasicColor_intValue(this->foregroundBasicColor);
        this->gameInfo = gameInfo;
}

AllBinaryGameLayerManager* AllBinaryGameLayerManager_new(BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor, GameInfo* gameInfo) {
    AllBinaryGameLayerManager* this = java_object_alloc(sizeof(AllBinaryGameLayerManager), "AllBinaryGameLayerManager");
    AllBinaryGameLayerManager_init(this, backgroundBasicColor, foregroundBasicColor, gameInfo);
    return this;
}


AllBinaryLayerManager* AllBinaryGameLayerManager_getLayerManager(AllBinaryGameLayerManager* this) {
        return this;
}


void AllBinaryGameLayerManager_initMethod(AllBinaryGameLayerManager* this) {
}


BasicColor* AllBinaryGameLayerManager_getBackgroundBasicColor(AllBinaryGameLayerManager* this) {
        return this->backgroundBasicColor;
}


void AllBinaryGameLayerManager_setBackgroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* backgroundBasicColor) {
        this->backgroundBasicColor = backgroundBasicColor;
        ItemColorFactory_getInstance()->INVERT_PAINT = BasicColor_intValue(this->backgroundBasicColor);
}


BasicColor* AllBinaryGameLayerManager_getForegroundBasicColor(AllBinaryGameLayerManager* this) {
        return this->foregroundBasicColor;
}


void AllBinaryGameLayerManager_setForegroundBasicColor(AllBinaryGameLayerManager* this, BasicColor* foregroundBasicColor) {
        this->foregroundBasicColor = foregroundBasicColor;
        ItemColorFactory_getInstance()->PAINT = BasicColor_intValue(this->foregroundBasicColor);
}


GameInfo* AllBinaryGameLayerManager_getGameInfo(AllBinaryGameLayerManager* this) {
        return this->gameInfo;
}


void AllBinaryGameLayerManager_setGameInfo(AllBinaryGameLayerManager* this, GameInfo* gameInfo) {
        this->gameInfo = gameInfo;
}


void AllBinaryGameLayerManager_setLayerProcessorList(AllBinaryGameLayerManager* this, BasicArrayList* list) {
        LayerProcessor** layerProcessorInterfaceArray = ((LayerProcessor**) java_array_new(sizeof(LayerProcessor*), BasicArrayList_size(list)));
        int32_t size = java_array_length(layerProcessorInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            layerProcessorInterfaceArray[index] = ((LayerProcessor*) list->objectArray[index]);
        }
        AllBinaryLayerManager_setLayerProcessorArray(this, layerProcessorInterfaceArray);
}


void AllBinaryGameLayerManager_setPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this, PlayerGameInputCompositeInterface* playerGameInputCompositeInterface) {
        this->playerGameInputCompositeInterface = playerGameInputCompositeInterface;
}


PlayerGameInputCompositeInterface* AllBinaryGameLayerManager_getPlayerGameInputCompositeInterface(AllBinaryGameLayerManager* this) {
        return this->playerGameInputCompositeInterface;
}

