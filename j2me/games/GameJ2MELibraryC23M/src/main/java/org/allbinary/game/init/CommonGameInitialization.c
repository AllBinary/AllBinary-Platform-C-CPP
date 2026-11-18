// Generated Code Do Not Modify
#include "org/allbinary/game/init/CommonGameInitialization.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/resource/ResourceInitialization.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/init/BaseGameInitialization.h"
#if __has_include("org/allbinary/logic/math/SmallIntegerSingletonFactory.h")
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif






void CommonGameInitialization_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CommonGameInitialization_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonGameInitialization", "BaseGameInitialization");
    java_register_method("CommonGameInitialization", "init", (void*) CommonGameInitialization_initMethod);
    java_register_method("CommonGameInitialization", "initGame", (void*) CommonGameInitialization_initGame);
}

static void CommonGameInitialization_initFields(CommonGameInitialization* this) {
    this->commonStrings = CommonStrings_getInstance();
}


void CommonGameInitialization_init(CommonGameInitialization* this, ResourceInitialization** resourceInitializationArray, int32_t portion) {
    CommonGameInitialization_register();
        BaseGameInitialization_init(&this->base, resourceInitializationArray, portion);
        CommonGameInitialization_initFields(this);
}

CommonGameInitialization* CommonGameInitialization_new(ResourceInitialization** resourceInitializationArray, int32_t portion) {
    CommonGameInitialization* this = java_object_alloc(sizeof(CommonGameInitialization), "CommonGameInitialization");
    CommonGameInitialization_init(this, resourceInitializationArray, portion);
    return this;
}


// throws Exception
void CommonGameInitialization_initMethod(CommonGameInitialization* this, AbeClientInformationInterface* abeClientInformation, CommandListener* commandListener, int32_t level) {
        BaseGameInitialization_initMethod((&this->base), abeClientInformation, commandListener, level);
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (!BaseGameInitialization_isGameInitialized(this) && level == ResourceLoadingLevel_getLevel(resourceLoadingLevelFactory->LOAD_ALL)) {
            BaseGameInitialization_setGameInitialized(this, true);
            ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
            SmallIntegerSingletonFactory_initMethod(SmallIntegerSingletonFactory_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Integers");
            PointFactory_initMethod(PointFactory_getInstance());
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Points");
            AngleFactory_getInstance();
            ProgressCanvas_addNormalPortion(progressCanvas, 50, "Angles");
            CommonGameInitialization_initGame(this);
            JAVA_CALL(this->base.resourceInitializationArray[this->base.GAME_RESOURCES], init);
        }
        BaseGameInitialization_resourceInitialization((&this->base), level);
}


// throws Exception
void CommonGameInitialization_initGame(CommonGameInitialization* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}

