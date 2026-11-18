// Generated Code Do Not Modify
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#include "org/allbinary/game/combat/destroy/event/DestroyedEvent.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickupBehavior.h"
#include "org/allbinary/game/part/PartInterface.h"
#include "org/allbinary/game/part/PartInterfaceUtil.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/layer/special/SpecialGameInputInterface.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/identification/BasicGroupFactory.h")
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/identification/Group.h")
#include "org/allbinary/game/identification/Group.h"
#endif


static void* CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER;
static const char* CollidableDestroyableDamageableLayer_READYFOREXPLOSION = "ReadyForExplosion: ";












































void CollidableDestroyableDamageableLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = NullUtil_getInstance()->NULL_OBJECT;
}

void CollidableDestroyableDamageableLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableDestroyableDamageableLayer", "CollidableCompositeLayer");
    java_register_method("CollidableDestroyableDamageableLayer", "initPosition", (void*) CollidableDestroyableDamageableLayer_initPosition);
    java_register_method("CollidableDestroyableDamageableLayer", "initPositionXYZ", (void*) CollidableDestroyableDamageableLayer_initPositionXYZ);
    java_register_method("CollidableDestroyableDamageableLayer", "paint", (void*) CollidableDestroyableDamageableLayer_paint);
    java_register_method("CollidableDestroyableDamageableLayer", "damage", (void*) CollidableDestroyableDamageableLayer_damage);
    java_register_method("CollidableDestroyableDamageableLayer", "getDamage", (void*) CollidableDestroyableDamageableLayer_getDamage);
    java_register_method("CollidableDestroyableDamageableLayer", "isDestroyed", (void*) CollidableDestroyableDamageableLayer_isDestroyed);
    java_register_method("CollidableDestroyableDamageableLayer", "getGroupInterface", (void*) CollidableDestroyableDamageableLayer_getGroupInterface);
    java_register_method("CollidableDestroyableDamageableLayer", "setGroupInterface", (void*) CollidableDestroyableDamageableLayer_setGroupInterface);
    java_register_method("CollidableDestroyableDamageableLayer", "setAllBinaryGameLayerManager", (void*) CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager);
    java_register_method("CollidableDestroyableDamageableLayer", "isReadyForExplosion", (void*) CollidableDestroyableDamageableLayer_isReadyForExplosion);
    java_register_method("CollidableDestroyableDamageableLayer", "setReadyForExplosion", (void*) CollidableDestroyableDamageableLayer_setReadyForExplosion);
    java_register_method("CollidableDestroyableDamageableLayer", "getInitWidth", (void*) CollidableDestroyableDamageableLayer_getInitWidth);
    java_register_method("CollidableDestroyableDamageableLayer", "getInitHeight", (void*) CollidableDestroyableDamageableLayer_getInitHeight);
    java_register_method("CollidableDestroyableDamageableLayer", "getInitX", (void*) CollidableDestroyableDamageableLayer_getInitX);
    java_register_method("CollidableDestroyableDamageableLayer", "getInitY", (void*) CollidableDestroyableDamageableLayer_getInitY);
    java_register_method("CollidableDestroyableDamageableLayer", "up", (void*) CollidableDestroyableDamageableLayer_up);
    java_register_method("CollidableDestroyableDamageableLayer", "down", (void*) CollidableDestroyableDamageableLayer_down);
    java_register_method("CollidableDestroyableDamageableLayer", "right", (void*) CollidableDestroyableDamageableLayer_right);
    java_register_method("CollidableDestroyableDamageableLayer", "left", (void*) CollidableDestroyableDamageableLayer_left);
    java_register_method("CollidableDestroyableDamageableLayer", "strafeLeft", (void*) CollidableDestroyableDamageableLayer_strafeLeft);
    java_register_method("CollidableDestroyableDamageableLayer", "strafeRight", (void*) CollidableDestroyableDamageableLayer_strafeRight);
    java_register_method("CollidableDestroyableDamageableLayer", "fire", (void*) CollidableDestroyableDamageableLayer_fire);
    java_register_method("CollidableDestroyableDamageableLayer", "special1", (void*) CollidableDestroyableDamageableLayer_special1);
    java_register_method("CollidableDestroyableDamageableLayer", "special2", (void*) CollidableDestroyableDamageableLayer_special2);
    java_register_method("CollidableDestroyableDamageableLayer", "special3", (void*) CollidableDestroyableDamageableLayer_special3);
    java_register_method("CollidableDestroyableDamageableLayer", "special4", (void*) CollidableDestroyableDamageableLayer_special4);
    java_register_method("CollidableDestroyableDamageableLayer", "special5", (void*) CollidableDestroyableDamageableLayer_special5);
    java_register_method("CollidableDestroyableDamageableLayer", "upAnalog", (void*) CollidableDestroyableDamageableLayer_upAnalog);
    java_register_method("CollidableDestroyableDamageableLayer", "downAnalog", (void*) CollidableDestroyableDamageableLayer_downAnalog);
    java_register_method("CollidableDestroyableDamageableLayer", "rightAnalog", (void*) CollidableDestroyableDamageableLayer_rightAnalog);
    java_register_method("CollidableDestroyableDamageableLayer", "leftAnalog", (void*) CollidableDestroyableDamageableLayer_leftAnalog);
    java_register_method("CollidableDestroyableDamageableLayer", "rightTrigger", (void*) CollidableDestroyableDamageableLayer_rightTrigger);
    java_register_method("CollidableDestroyableDamageableLayer", "leftTrigger", (void*) CollidableDestroyableDamageableLayer_leftTrigger);
    java_register_method("CollidableDestroyableDamageableLayer", "onDestroyed", (void*) CollidableDestroyableDamageableLayer_onDestroyed);
    java_register_method("CollidableDestroyableDamageableLayer", "getPickupBehavior", (void*) CollidableDestroyableDamageableLayer_getPickupBehavior);
    java_register_method("CollidableDestroyableDamageableLayer", "setPickupBehavior", (void*) CollidableDestroyableDamageableLayer_setPickupBehavior);
    java_register_method("CollidableDestroyableDamageableLayer", "addPart", (void*) CollidableDestroyableDamageableLayer_addPart);
    java_register_method("CollidableDestroyableDamageableLayer", "setPartInterfaceArray", (void*) CollidableDestroyableDamageableLayer_setPartInterfaceArray);
    java_register_method("CollidableDestroyableDamageableLayer", "getPartInterfaceArray", (void*) CollidableDestroyableDamageableLayer_getPartInterfaceArray);
    java_register_method("CollidableDestroyableDamageableLayer", "toStringAppend", (void*) CollidableDestroyableDamageableLayer_toStringAppend);
    java_register_method("CollidableDestroyableDamageableLayer", "toString", (void*) CollidableDestroyableDamageableLayer_toString);
}

static void CollidableDestroyableDamageableLayer_initFields(CollidableDestroyableDamageableLayer* this) {
    
    this->readyForExplosion = false;
    
    
    this->initX = 0;
    this->initY = 0;
    this->initZ = 0;
    this->partInterfaceArrayP = PartInterfaceUtil_getZeroArray();
    
    this->allBinaryGameLayerManagerP = AllBinaryGameLayerManager_getNullInstance();
    this->isDraggable = false;
    this->isDragged = false;
    this->isDropped = false;
}


CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_getNullInstance(void) {
        if ((CollidableDestroyableDamageableLayer_staticInit(), CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER) == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER = CollidableDestroyableDamageableLayer_new(BasicGroupFactory_getInstance()->NONE_ARRAY, StringUtil_getInstance()->EMPTY_STRING, (RectangleFactory_staticInit(), RectangleFactory_SINGLETON), (ViewPositionBase_staticInit(), ViewPositionBase_NULL_VIEW_POSITION));
        }
        return ((CollidableDestroyableDamageableLayer*) (CollidableDestroyableDamageableLayer_staticInit(), CollidableDestroyableDamageableLayer_NULL_COLLIDABLE_DESTROYABLE_DAMAGE_LAYER));
}


void CollidableDestroyableDamageableLayer_init(CollidableDestroyableDamageableLayer* this, Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    CollidableDestroyableDamageableLayer_register();
        CollidableCompositeLayer_init(&this->base, name, layerInfo, viewPosition, CollidableNeverCollideBehaviorFactory_getInstance());
        CollidableDestroyableDamageableLayer_initFields(this);
        this->initWidth = Rectangle_getWidth(layerInfo);
        this->initHeight = Rectangle_getHeight(layerInfo);
        this->groupInterface = groupInterface;
        this->pickupBehavior = PickupBehavior_getNullInstance();
}

CollidableDestroyableDamageableLayer* CollidableDestroyableDamageableLayer_new(Group** groupInterface, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition) {
    CollidableDestroyableDamageableLayer* this = java_object_alloc(sizeof(CollidableDestroyableDamageableLayer), "CollidableDestroyableDamageableLayer");
    CollidableDestroyableDamageableLayer_init(this, groupInterface, name, layerInfo, viewPosition);
    return this;
}


// throws Exception
void CollidableDestroyableDamageableLayer_initPosition(CollidableDestroyableDamageableLayer* this) {
        AllBinaryLayer_setPosition(this, this->initX, this->initY, this->initZ);
}


// throws Exception
void CollidableDestroyableDamageableLayer_initPositionXYZ(CollidableDestroyableDamageableLayer* this, int32_t x, int32_t y, int32_t z) {
        this->initX = x;
        this->initY = y;
        this->initZ = z;
}


void CollidableDestroyableDamageableLayer_paint(CollidableDestroyableDamageableLayer* this, Graphics* graphics) {
        AllBinaryLayer_paint((&this->base), graphics);
}


// throws Exception
void CollidableDestroyableDamageableLayer_damage(CollidableDestroyableDamageableLayer* this, int32_t damage, int32_t damageType) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
int32_t CollidableDestroyableDamageableLayer_getDamage(CollidableDestroyableDamageableLayer* this, int32_t damageType) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
bool CollidableDestroyableDamageableLayer_isDestroyed(CollidableDestroyableDamageableLayer* this) {
        java_throw(java_exception_new("Exception", this->base.base.commonStrings->NOT_IMPLEMENTED));
}


Group** CollidableDestroyableDamageableLayer_getGroupInterface(CollidableDestroyableDamageableLayer* this) {
        return this->groupInterface;
}


void CollidableDestroyableDamageableLayer_setGroupInterface(CollidableDestroyableDamageableLayer* this, Group** teamInterface) {
        this->groupInterface = teamInterface;
}


// throws Exception
void CollidableDestroyableDamageableLayer_setAllBinaryGameLayerManager(CollidableDestroyableDamageableLayer* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        this->allBinaryGameLayerManagerP = allBinaryGameLayerManager;
        if (this->allBinaryGameLayerManagerP == nullptr) {
            java_throw(java_exception_new("RuntimeException", ""));
        }
}


bool CollidableDestroyableDamageableLayer_isReadyForExplosion(CollidableDestroyableDamageableLayer* this) {
        return this->readyForExplosion;
}


void CollidableDestroyableDamageableLayer_setReadyForExplosion(CollidableDestroyableDamageableLayer* this, bool isReadyForExplosion) {
        this->readyForExplosion = isReadyForExplosion;
}


int32_t CollidableDestroyableDamageableLayer_getInitWidth(CollidableDestroyableDamageableLayer* this) {
        return this->initWidth;
}


int32_t CollidableDestroyableDamageableLayer_getInitHeight(CollidableDestroyableDamageableLayer* this) {
        return this->initHeight;
}


int32_t CollidableDestroyableDamageableLayer_getInitX(CollidableDestroyableDamageableLayer* this) {
        return this->initX;
}


int32_t CollidableDestroyableDamageableLayer_getInitY(CollidableDestroyableDamageableLayer* this) {
        return this->initY;
}


// throws Exception
void CollidableDestroyableDamageableLayer_up(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_down(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_right(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_left(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_strafeLeft(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_strafeRight(CollidableDestroyableDamageableLayer* this) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_fire(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special1(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special2(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special3(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special4(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_special5(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_upAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_downAnalog(CollidableDestroyableDamageableLayer* this, int32_t yAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_rightAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_leftAnalog(CollidableDestroyableDamageableLayer* this, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_rightTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
}


// throws Exception
void CollidableDestroyableDamageableLayer_leftTrigger(CollidableDestroyableDamageableLayer* this, AllBinaryLayerManager* layerManager, GameKeyEvent* gameKeyEvent, int32_t xAnalogValue) {
}


void CollidableDestroyableDamageableLayer_onDestroyed(CollidableDestroyableDamageableLayer* this, DestroyedEvent* destroyedEvent) {
}


PickupBehavior* CollidableDestroyableDamageableLayer_getPickupBehavior(CollidableDestroyableDamageableLayer* this) {
        return this->pickupBehavior;
}


void CollidableDestroyableDamageableLayer_setPickupBehavior(CollidableDestroyableDamageableLayer* this, PickupBehavior* pickupBehavior) {
        this->pickupBehavior = pickupBehavior;
}


// throws Exception
void CollidableDestroyableDamageableLayer_addPart(CollidableDestroyableDamageableLayer* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface) {
}


void CollidableDestroyableDamageableLayer_setPartInterfaceArray(CollidableDestroyableDamageableLayer* this, PartInterface** partInterfaceArray) {
        this->partInterfaceArrayP = partInterfaceArray;
}


PartInterface** CollidableDestroyableDamageableLayer_getPartInterfaceArray(CollidableDestroyableDamageableLayer* this) {
        return this->partInterfaceArrayP;
}


void CollidableDestroyableDamageableLayer_toStringAppend(CollidableDestroyableDamageableLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        CollidableCompositeLayer_toStringAppend((&this->base), stringBuffer);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        Group** groupInterfaceArray = CollidableDestroyableDamageableLayer_getGroupInterface(this);
        int32_t size = java_array_length(groupInterfaceArray);
        for (int32_t index = 0; index < size; index++) {
            StringMaker_append(stringBuffer, java_string_of(groupInterfaceArray[index]));
            StringMaker_append(stringBuffer, commonSeps->COMMA);
        }
        PickupBehavior* pickupBehavior = CollidableDestroyableDamageableLayer_getPickupBehavior(this);
        if (pickupBehavior != nullptr) {
            StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
            StringMaker_append(stringBuffer, java_string_of(pickupBehavior));
        }
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, CollidableDestroyableDamageableLayer_READYFOREXPLOSION);
        StringMaker_appendboolean(stringBuffer, this->readyForExplosion);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, this->base.base.commonStrings->INIT);
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, this->initX);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, this->initX);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, this->initZ);
}


const char* CollidableDestroyableDamageableLayer_toString(CollidableDestroyableDamageableLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CollidableDestroyableDamageableLayer_toStringAppend(this, stringBuffer);
        return java_string_of(stringBuffer);
}

