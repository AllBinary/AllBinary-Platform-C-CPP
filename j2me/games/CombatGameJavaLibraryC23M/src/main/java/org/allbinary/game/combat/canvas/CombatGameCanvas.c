// Generated Code Do Not Modify
#include "org/allbinary/game/combat/canvas/CombatGameCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "org/allbinary/game/combat/destroy/DestroyedLayerProcessor.h"
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/configuration/feature/GameFeatureFactory.h"
#include "org/allbinary/game/init/BasicBuildGameInitializerFactory.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/drop/DropLayerProcessor.h"
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#include "org/allbinary/game/score/HighScoresFactoryInterface.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/layer/BasicLayerProcessor.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h")
#include "org/allbinary/game/combat/destroy/event/DestroyEventCircularStaticPool.h"
#endif
#if __has_include("org/allbinary/game/combat/canvas/ProgressCanvas.h")
#include "org/allbinary/game/combat/canvas/ProgressCanvas.h"
#endif
#if __has_include("javax/microedition/lcdui/ProgressCanvas.h")
#include "javax/microedition/lcdui/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/event/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/event/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ProgressCanvas.h")
#include "org/allbinary/game/displayable/canvas/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/init/ProgressCanvas.h")
#include "org/allbinary/game/init/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/ProgressCanvas.h")
#include "org/allbinary/game/layer/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/drop/ProgressCanvas.h")
#include "org/allbinary/game/layer/drop/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/identification/ProgressCanvas.h")
#include "org/allbinary/game/layer/identification/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/score/ProgressCanvas.h")
#include "org/allbinary/game/score/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/layer/ProgressCanvas.h")
#include "org/allbinary/layer/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ProgressCanvas.h")
#include "org/allbinary/logic/system/security/licensing/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/canvas/ProgressCanvas.h")
#include "org/allbinary/game/combat/canvas/ProgressCanvas.h"
#endif
#if __has_include("javax/microedition/lcdui/ProgressCanvas.h")
#include "javax/microedition/lcdui/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/event/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/ProgressCanvas.h")
#include "org/allbinary/game/combat/destroy/event/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/configuration/feature/ProgressCanvas.h")
#include "org/allbinary/game/configuration/feature/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/displayable/canvas/ProgressCanvas.h")
#include "org/allbinary/game/displayable/canvas/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/init/ProgressCanvas.h")
#include "org/allbinary/game/init/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/ProgressCanvas.h")
#include "org/allbinary/game/layer/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/drop/ProgressCanvas.h")
#include "org/allbinary/game/layer/drop/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/identification/ProgressCanvas.h")
#include "org/allbinary/game/layer/identification/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/score/ProgressCanvas.h")
#include "org/allbinary/game/score/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h")
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/layer/ProgressCanvas.h")
#include "org/allbinary/layer/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/logic/system/security/licensing/ProgressCanvas.h")
#include "org/allbinary/logic/system/security/licensing/ProgressCanvas.h"
#endif
#if __has_include("org/allbinary/game/layer/identification/GroupLayerManagerListener.h")
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#endif
#if __has_include("org/allbinary/game/layer/identification/GroupLayerManagerListener.h")
#include "org/allbinary/game/layer/identification/GroupLayerManagerListener.h"
#endif
#if __has_include("org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h")
#include "org/allbinary/game/combat/destroy/event/DestroyedEventHandler.h"
#endif


BasicLayerProcessor** CombatGameCanvas_basicLayerProcessor;


static void CombatGameCanvas_CombatGameCanvas_init(CombatGameCanvas* this);






void CombatGameCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 0));
}

void CombatGameCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CombatGameCanvas", "AllBinaryGameCanvas");
    java_register_method("CombatGameCanvas", "CombatGameCanvas_init", (void*) CombatGameCanvas_CombatGameCanvas_init);
    java_register_method("CombatGameCanvas", "initApp", (void*) CombatGameCanvas_initApp);
    java_register_method("CombatGameCanvas", "initConfigurablePortion", (void*) CombatGameCanvas_initConfigurablePortion);
    java_register_method("CombatGameCanvas", "processPlayingGame", (void*) CombatGameCanvas_processPlayingGame);
    java_register_method("CombatGameCanvas", "cleanupGame", (void*) CombatGameCanvas_cleanupGame);
    java_register_method("CombatGameCanvas", "cleanupManager", (void*) CombatGameCanvas_cleanupManager);
}


void CombatGameCanvas_init(CombatGameCanvas* this, CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    CombatGameCanvas_register();
        AllBinaryGameCanvas_init(&this->base, cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
}

CombatGameCanvas* CombatGameCanvas_new(CommandListener* cmdListener, AllBinaryGameLayerManager* gameLayerManager, HighScoresFactoryInterface* highScoresFactoryInterface, BasicBuildGameInitializerFactory* gameInitializationInterfaceFactoryInterface, bool buffered) {
    CombatGameCanvas* this = java_object_alloc(sizeof(CombatGameCanvas), "CombatGameCanvas");
    CombatGameCanvas_init(this, cmdListener, gameLayerManager, highScoresFactoryInterface, gameInitializationInterfaceFactoryInterface, buffered);
    return this;
}


static void CombatGameCanvas_CombatGameCanvas_init(CombatGameCanvas* this) {
        DestroyEventCircularStaticPool_initMethod(DestroyEventCircularStaticPool_getInstance(), this);
        ProgressCanvas_addNormalPortion(ProgressCanvasFactory_getInstance(), 50, "Destroy Events");
}


// throws Exception
void CombatGameCanvas_initApp(CombatGameCanvas* this, AbeClientInformationInterface* abeClientInformation) {
        CombatGameCanvas_CombatGameCanvas_init(this);
        AllBinaryGameCanvas_initApp((&this->base), abeClientInformation);
}


void CombatGameCanvas_initConfigurablePortion(CombatGameCanvas* this, int32_t portion) {
        DestroyedLayerProcessor_initMethod();
        ProgressCanvas_addNormalPortion(ProgressCanvasFactory_getInstance(), portion, "Basic Processors");
        Features* features = Features_getInstance();
        GameFeatureFactory* gameFeatureFactory = GameFeatureFactory_getInstance();
        if (Features_isFeature(features, gameFeatureFactory->DROPPED_ITEMS) && Features_isFeature(features, gameFeatureFactory->DROPPED_ITEMS_FROM_DEATH)) {
            CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 2));
            (CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)[0] = DestroyedLayerProcessor_getInstance();
            (CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)[1] = DropLayerProcessor_getInstance();
        } else {
            CombatGameCanvas_basicLayerProcessor = ((BasicLayerProcessor**) java_array_new(sizeof(BasicLayerProcessor*), 1));
            (CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)[0] = DestroyedLayerProcessor_getInstance();
        }
}


// throws Exception
void CombatGameCanvas_processPlayingGame(CombatGameCanvas* this) {
        AllBinaryGameCanvas_processPlayingGame((&this->base));
        for (int32_t index = java_array_length((CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)); --index >= 0; ) {
            JAVA_CALL((CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)[index], process, this->base.gameLayerManager);
        }
}


// throws Exception
void CombatGameCanvas_cleanupGame(CombatGameCanvas* this) {
        AllBinaryGameCanvas_cleanupGame((&this->base));
        for (int32_t index = java_array_length((CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)); --index >= 0; ) {
            JAVA_CALL(JAVA_CALL((CombatGameCanvas_staticInit(), CombatGameCanvas_basicLayerProcessor)[index], getList), clear);
        }
        GroupLayerManagerListener_clear(GroupLayerManagerListener_getInstance());
        GroupLayerManagerListener_log(GroupLayerManagerListener_getInstance());
        DestroyedEventHandler_removeAllListeners(DestroyedEventHandler_getInstance());
        CombatGameCanvas_cleanupManager(this);
}


// throws Exception
void CombatGameCanvas_cleanupManager(CombatGameCanvas* this) {
        AllBinaryLayerManager_cleanup(this->base.gameLayerManager);
}

