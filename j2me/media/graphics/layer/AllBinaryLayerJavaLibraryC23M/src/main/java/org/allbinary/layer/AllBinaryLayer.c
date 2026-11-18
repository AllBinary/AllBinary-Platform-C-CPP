// Generated Code Do Not Modify
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/math/PositionStrings.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/view/event/ViewPositionEvent.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/LayerInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/game/identification/BasicGroupFactory.h")
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif


AllBinaryLayer* AllBinaryLayer_NULL_ALLBINARY_LAYER;
static const char* AllBinaryLayer_TYPE = "Type: ";



































void AllBinaryLayer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AllBinaryLayer_NULL_ALLBINARY_LAYER = AllBinaryLayer_new(StringUtil_getInstance()->EMPTY_STRING, (RectangleFactory_staticInit(), RectangleFactory_SINGLETON), (ViewPositionBase_staticInit(), ViewPositionBase_NULL_VIEW_POSITION));
}

void AllBinaryLayer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AllBinaryLayer", "Layer");
    java_register_method("AllBinaryLayer", "setPosition", (void*) AllBinaryLayer_setPosition);
    java_register_method("AllBinaryLayer", "moveDXYZ", (void*) AllBinaryLayer_moveDXYZ);
    java_register_method("AllBinaryLayer", "getXP", (void*) AllBinaryLayer_getXP);
    java_register_method("AllBinaryLayer", "getYP", (void*) AllBinaryLayer_getYP);
    java_register_method("AllBinaryLayer", "getZP", (void*) AllBinaryLayer_getZP);
    java_register_method("AllBinaryLayer", "getWidth", (void*) AllBinaryLayer_getWidth);
    java_register_method("AllBinaryLayer", "getHeight", (void*) AllBinaryLayer_getHeight);
    java_register_method("AllBinaryLayer", "setVisible", (void*) AllBinaryLayer_setVisible);
    java_register_method("AllBinaryLayer", "isVisible", (void*) AllBinaryLayer_isVisible);
    java_register_method("AllBinaryLayer", "paint", (void*) AllBinaryLayer_paint);
    java_register_method("AllBinaryLayer", "onChangeEvent", (void*) AllBinaryLayer_onChangeEvent);
    java_register_method("AllBinaryLayer", "paintThreed", (void*) AllBinaryLayer_paintThreed);
    java_register_method("AllBinaryLayer", "getX2", (void*) AllBinaryLayer_getX2);
    java_register_method("AllBinaryLayer", "getY2", (void*) AllBinaryLayer_getY2);
    java_register_method("AllBinaryLayer", "getZ2", (void*) AllBinaryLayer_getZ2);
    java_register_method("AllBinaryLayer", "getName", (void*) AllBinaryLayer_getName);
    java_register_method("AllBinaryLayer", "setHalfWidth", (void*) AllBinaryLayer_setHalfWidth);
    java_register_method("AllBinaryLayer", "getHalfWidth", (void*) AllBinaryLayer_getHalfWidth);
    java_register_method("AllBinaryLayer", "setHalfHeight", (void*) AllBinaryLayer_setHalfHeight);
    java_register_method("AllBinaryLayer", "getHalfHeight", (void*) AllBinaryLayer_getHalfHeight);
    java_register_method("AllBinaryLayer", "getHalfDepth", (void*) AllBinaryLayer_getHalfDepth);
    java_register_method("AllBinaryLayer", "getViewPosition", (void*) AllBinaryLayer_getViewPosition);
    java_register_method("AllBinaryLayer", "setViewPosition", (void*) AllBinaryLayer_setViewPosition);
    java_register_method("AllBinaryLayer", "getGroupInterface", (void*) AllBinaryLayer_getGroupInterface);
    java_register_method("AllBinaryLayer", "implmentsTickableInterface", (void*) AllBinaryLayer_implmentsTickableInterface);
    java_register_method("AllBinaryLayer", "implmentsGameInputInterface", (void*) AllBinaryLayer_implmentsGameInputInterface);
    java_register_method("AllBinaryLayer", "implmentsArtificialIntelligenceCompositeInterface", (void*) AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface);
    java_register_method("AllBinaryLayer", "implmentsCollidableInterface", (void*) AllBinaryLayer_implmentsCollidableInterface);
    java_register_method("AllBinaryLayer", "implementsThreedInterface", (void*) AllBinaryLayer_implementsThreedInterface);
    java_register_method("AllBinaryLayer", "getType", (void*) AllBinaryLayer_getType);
    java_register_method("AllBinaryLayer", "getMultiPlayerType", (void*) AllBinaryLayer_getMultiPlayerType);
    java_register_method("AllBinaryLayer", "toStringAppend", (void*) AllBinaryLayer_toStringAppend);
    java_register_method("AllBinaryLayer", "toString", (void*) AllBinaryLayer_toString);
}

static void AllBinaryLayer_initFields(AllBinaryLayer* this) {
    this->viewPositionEvent = ViewPositionEvent_new(this);
    this->halfWidth = 0;
    this->halfHeight = 0;
    
    this->viewPosition = (ViewPositionBase_staticInit(), ViewPositionBase_NULL_VIEW_POSITION);
}


void AllBinaryLayer_init(AllBinaryLayer* this, const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    AllBinaryLayer_register();
        Layer_init(&this->base, Rectangle_getWidth(rectangle), Rectangle_getHeight(rectangle));
        AllBinaryLayer_initFields(this);
        const char* localName = nullptr;
        localName = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), name), CommonSeps_getInstance()->COLON), Integer_toHexString(TsUtil_hashCode(TsUtil_getInstance(), this))));
        this->name = localName;
        GPoint* point = Rectangle_getPoint(rectangle);
        AllBinaryLayer_setPosition(this, GPoint_getX(point), GPoint_getY(point), GPoint_getZ(point));
        AllBinaryLayer_setHalfWidth(this, (AllBinaryLayer_getWidth(this) >> 1));
        AllBinaryLayer_setHalfHeight(this, (AllBinaryLayer_getHeight(this) >> 1));
        this->viewPosition = viewPosition;
        ViewPositionBase_setAllbinaryLayer(this->viewPosition, this);
}

AllBinaryLayer* AllBinaryLayer_new(const char* name, Rectangle* rectangle, ViewPositionBase* viewPosition) {
    AllBinaryLayer* this = java_object_alloc(sizeof(AllBinaryLayer), "AllBinaryLayer");
    AllBinaryLayer_init(this, name, rectangle, viewPosition);
    return this;
}


void AllBinaryLayer_setPosition(AllBinaryLayer* this, int32_t x, int32_t y, int32_t z) {
        Layer_setPosition((&this->base), x, y, z);
}


void AllBinaryLayer_moveDXYZ(AllBinaryLayer* this, int32_t dx, int32_t dy, int32_t dz) {
        Layer_moveDXYZ((&this->base), dx, dy, dz);
}


int32_t AllBinaryLayer_getXP(AllBinaryLayer* this) {
        return Layer_getXP((&this->base));
}


int32_t AllBinaryLayer_getYP(AllBinaryLayer* this) {
        return Layer_getYP((&this->base));
}


int32_t AllBinaryLayer_getZP(AllBinaryLayer* this) {
        return Layer_getZP((&this->base));
}


int32_t AllBinaryLayer_getWidth(AllBinaryLayer* this) {
        return Layer_getWidth((&this->base));
}


int32_t AllBinaryLayer_getHeight(AllBinaryLayer* this) {
        return Layer_getHeight((&this->base));
}


void AllBinaryLayer_setVisible(AllBinaryLayer* this, bool visible) {
        Layer_setVisible((&this->base), visible);
}


bool AllBinaryLayer_isVisible(AllBinaryLayer* this) {
        return Layer_isVisible((&this->base));
}


void AllBinaryLayer_paint(AllBinaryLayer* this, Graphics* graphics) {
        Layer_paint((&this->base), graphics);
}


// throws Exception
void AllBinaryLayer_onChangeEvent(AllBinaryLayer* this, ViewPositionEvent* layerManagerEvent) {
}


void AllBinaryLayer_paintThreed(AllBinaryLayer* this, Graphics* graphics) {
}


int32_t AllBinaryLayer_getX2(AllBinaryLayer* this) {
        return AllBinaryLayer_getXP(this) + AllBinaryLayer_getWidth(this);
}


int32_t AllBinaryLayer_getY2(AllBinaryLayer* this) {
        return AllBinaryLayer_getYP(this) + AllBinaryLayer_getHeight(this);
}


int32_t AllBinaryLayer_getZ2(AllBinaryLayer* this) {
        return ((int32_t) (((int64_t) AllBinaryLayer_getZP(this)) + Layer_getDepth(this)));
}


const char* AllBinaryLayer_getName(AllBinaryLayer* this) {
        return this->name;
}


void AllBinaryLayer_setHalfWidth(AllBinaryLayer* this, int32_t halfWidth) {
        this->halfWidth = halfWidth;
}


int32_t AllBinaryLayer_getHalfWidth(AllBinaryLayer* this) {
        return this->halfWidth;
}


void AllBinaryLayer_setHalfHeight(AllBinaryLayer* this, int32_t halfHeight) {
        this->halfHeight = halfHeight;
}


int32_t AllBinaryLayer_getHalfHeight(AllBinaryLayer* this) {
        return this->halfHeight;
}


int32_t AllBinaryLayer_getHalfDepth(AllBinaryLayer* this) {
        return ((int32_t) Layer_getDepth(this)) / 2;
}


ViewPositionBase* AllBinaryLayer_getViewPosition(AllBinaryLayer* this) {
        return this->viewPosition;
}


void AllBinaryLayer_setViewPosition(AllBinaryLayer* this, ViewPositionBase* viewPosition) {
        this->viewPosition = viewPosition;
}


Group** AllBinaryLayer_getGroupInterface(AllBinaryLayer* this) {
        return BasicGroupFactory_getInstance()->NONE_ARRAY;
}


bool AllBinaryLayer_implmentsTickableInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsGameInputInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsArtificialIntelligenceCompositeInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implmentsCollidableInterface(AllBinaryLayer* this) {
        return false;
}


bool AllBinaryLayer_implementsThreedInterface(AllBinaryLayer* this) {
        return OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance());
}


int32_t AllBinaryLayer_getType(AllBinaryLayer* this) {
        return -1;
}


int32_t AllBinaryLayer_getMultiPlayerType(AllBinaryLayer* this) {
        return -1;
}


void AllBinaryLayer_toStringAppend(AllBinaryLayer* this, StringMaker* stringBuffer) {
        CommonSeps* commonSeps = CommonSeps_getInstance();
        PositionStrings* positionStrings = PositionStrings_getInstance();
        CommonLabels* commonLabels = CommonLabels_getInstance();
        StringMaker_append(stringBuffer, AllBinaryLayer_getName(this));
        StringMaker_append(stringBuffer, commonSeps->COLON);
        StringMaker_append(stringBuffer, AllBinaryLayer_TYPE);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getType(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->X_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getXP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Y_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getYP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, positionStrings->Z_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getZP(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->WIDTH_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getWidth(this));
        StringMaker_append(stringBuffer, commonSeps->SPACE);
        StringMaker_append(stringBuffer, commonLabels->HEIGHT_LABEL);
        StringMaker_appendint(stringBuffer, AllBinaryLayer_getHeight(this));
}


const char* AllBinaryLayer_toString(AllBinaryLayer* this) {
        StringMaker* stringBuffer = StringMaker_new();
        AllBinaryLayer_toStringAppend(this, stringBuffer);
        return java_string_of(stringBuffer);
}

