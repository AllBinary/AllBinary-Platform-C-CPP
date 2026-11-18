// Generated Code Do Not Modify
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayer.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/multiplayer/layer/MultiPlayerGameLayerInterface.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/multiplayer/layer/MultiplayerBehavior.h"








void MultiPlayerGameLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MultiPlayerGameLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MultiPlayerGameLayer", "CollidableDestroyableDamageableLayer");
    java_register_method("MultiPlayerGameLayer", "getMultiplayerBehavior", (void*) MultiPlayerGameLayer_getMultiplayerBehavior);
    java_register_method("MultiPlayerGameLayer", "setPingInfo", (void*) MultiPlayerGameLayer_setPingInfo);
    java_register_method("MultiPlayerGameLayer", "setFiring", (void*) MultiPlayerGameLayer_setFiring);
    java_register_method("MultiPlayerGameLayer", "getFiring", (void*) MultiPlayerGameLayer_getFiring);
}


void MultiPlayerGameLayer_init(MultiPlayerGameLayer* this, RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    MultiPlayerGameLayer_register();
        CollidableDestroyableDamageableLayer_init(&this->base, groupInterface, name, layerInfo, viewPosition);
}

MultiPlayerGameLayer* MultiPlayerGameLayer_new(RemoteInfo* remoteInfo, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    MultiPlayerGameLayer* this = java_object_alloc(sizeof(MultiPlayerGameLayer), "MultiPlayerGameLayer");
    MultiPlayerGameLayer_init(this, remoteInfo, groupInterface, name, layerInfo, viewPosition);
    return this;
}


MultiplayerBehavior* MultiPlayerGameLayer_getMultiplayerBehavior(MultiPlayerGameLayer* this) {
        return (MultiplayerBehavior_staticInit(), MultiplayerBehavior_NULL_MULTIPLAYER_BEHAVIOR);
}


void MultiPlayerGameLayer_setPingInfo(MultiPlayerGameLayer* this, bool show) {
}


void MultiPlayerGameLayer_setFiring(MultiPlayerGameLayer* this, int16_t firing) {
}


int16_t MultiPlayerGameLayer_getFiring(MultiPlayerGameLayer* this) {
        return 0;
}

