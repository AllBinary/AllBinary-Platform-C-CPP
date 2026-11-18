// Generated Code Do Not Modify
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#include "org/allbinary/ai/ArtificialIntelligence.h"
#include "org/allbinary/ai/ArtificialIntelligenceInterface.h"
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#include "org/allbinary/game/collision/CollidableBaseBehaviorFactory.h"
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h")
#include "org/allbinary/game/collision/CollidableNeverCollideBehaviorFactory.h"
#endif
#if __has_include("org/allbinary/game/collision/CollidableBaseBehavior.h")
#include "org/allbinary/game/collision/CollidableBaseBehavior.h"
#endif


static void* CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER;









void CollidableCompositeLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER = NullUtil_getInstance()->NULL_OBJECT;
}

void CollidableCompositeLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CollidableCompositeLayer", "AllBinaryGameLayer");
    java_register_method("CollidableCompositeLayer", "getArtificialIntelligenceInterface", (void*) CollidableCompositeLayer_getArtificialIntelligenceInterface);
    java_register_method("CollidableCompositeLayer", "getCollidableInferface", (void*) CollidableCompositeLayer_getCollidableInferface);
    java_register_method("CollidableCompositeLayer", "setCollidableInferface", (void*) CollidableCompositeLayer_setCollidableInferface);
    java_register_method("CollidableCompositeLayer", "implmentsCollidableInterface", (void*) CollidableCompositeLayer_implmentsCollidableInterface);
    java_register_method("CollidableCompositeLayer", "toStringAppend", (void*) CollidableCompositeLayer_toStringAppend);
    java_register_method("CollidableCompositeLayer", "toString", (void*) CollidableCompositeLayer_toString);
}

static void CollidableCompositeLayer_initFields(CollidableCompositeLayer* this) {
    this->collidableInferface = CollidableNeverCollideBehaviorFactory_createBehavior(CollidableNeverCollideBehaviorFactory_getInstance());
}


CollidableCompositeLayer* CollidableCompositeLayer_getNullInstance(void) {
        if ((CollidableCompositeLayer_staticInit(), CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER) == NullUtil_getInstance()->NULL_OBJECT) {
            CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER = CollidableCompositeLayer_new(StringUtil_getInstance()->EMPTY_STRING, (RectangleFactory_staticInit(), RectangleFactory_SINGLETON), (ViewPositionBase_staticInit(), ViewPositionBase_NULL_VIEW_POSITION), CollidableNeverCollideBehaviorFactory_getInstance());
        }
        return ((CollidableCompositeLayer*) (CollidableCompositeLayer_staticInit(), CollidableCompositeLayer_NULL_COLLIDABLE_COMPOSITE_LAYER));
}


void CollidableCompositeLayer_init(CollidableCompositeLayer* this, const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory) {
    CollidableCompositeLayer_register();
        AllBinaryGameLayer_init(&this->base, name, layerInfo, viewPosition);
        CollidableCompositeLayer_initFields(this);
        if (collidableBaseBehaviorFactory != CollidableNeverCollideBehaviorFactory_getInstance()) {
            CollidableCompositeLayer_setCollidableInferface(this, CollidableBaseBehaviorFactory_createBehavior(collidableBaseBehaviorFactory));
        }
}

CollidableCompositeLayer* CollidableCompositeLayer_new(const char* name, Rectangle* layerInfo, ViewPositionBase* viewPosition, CollidableBaseBehaviorFactory* collidableBaseBehaviorFactory) {
    CollidableCompositeLayer* this = java_object_alloc(sizeof(CollidableCompositeLayer), "CollidableCompositeLayer");
    CollidableCompositeLayer_init(this, name, layerInfo, viewPosition, collidableBaseBehaviorFactory);
    return this;
}


ArtificialIntelligenceInterface* CollidableCompositeLayer_getArtificialIntelligenceInterface(CollidableCompositeLayer* this) {
        ForcedLogUtil_log(this->base.commonStrings->NOT_IMPLEMENTED, this);
        return ArtificialIntelligence_getInstance();
}


CollidableBaseBehavior* CollidableCompositeLayer_getCollidableInferface(CollidableCompositeLayer* this) {
        return this->collidableInferface;
}


void CollidableCompositeLayer_setCollidableInferface(CollidableCompositeLayer* this, CollidableBaseBehavior* collidableInferface) {
        this->collidableInferface = collidableInferface;
}


bool CollidableCompositeLayer_implmentsCollidableInterface(CollidableCompositeLayer* this) {
        return true;
}


void CollidableCompositeLayer_toStringAppend(CollidableCompositeLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        AllBinaryLayer_toStringAppend((&this->base), stringBuffer);
        StringMaker_append(stringBuffer, commonSeps->NEW_LINE);
        StringMaker_append(stringBuffer, java_string_of(CollidableCompositeLayer_getCollidableInferface(this)));
}


const char* CollidableCompositeLayer_toString(CollidableCompositeLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        CollidableCompositeLayer_toStringAppend(this, stringBuffer);
        return java_string_of(stringBuffer);
}

