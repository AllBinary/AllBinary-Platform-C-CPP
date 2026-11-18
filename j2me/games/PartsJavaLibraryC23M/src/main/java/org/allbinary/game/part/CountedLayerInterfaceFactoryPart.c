// Generated Code Do Not Modify
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/game/part/PartInterface.h"
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif


CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY;



static void CountedLayerInterfaceFactoryPart_initMethod(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);









static void CountedLayerInterfaceFactoryPart_setXOffset(CountedLayerInterfaceFactoryPart* this, int32_t totalStringWidth);




void CountedLayerInterfaceFactoryPart_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY = CountedLayerInterfaceFactoryPart_new(0, (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY));
}

void CountedLayerInterfaceFactoryPart_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CountedLayerInterfaceFactoryPart", nullptr);
    java_register_method("CountedLayerInterfaceFactoryPart", "updateMeasurement", (void*) CountedLayerInterfaceFactoryPart_updateMeasurement);
    java_register_method("CountedLayerInterfaceFactoryPart", "init", (void*) CountedLayerInterfaceFactoryPart_initMethod);
    java_register_method("CountedLayerInterfaceFactoryPart", "getInstance", (void*) CountedLayerInterfaceFactoryPart_getInstance);
    java_register_method("CountedLayerInterfaceFactoryPart", "getTotal", (void*) CountedLayerInterfaceFactoryPart_getTotal);
    java_register_method("CountedLayerInterfaceFactoryPart", "setTotal", (void*) CountedLayerInterfaceFactoryPart_setTotal);
    java_register_method("CountedLayerInterfaceFactoryPart", "paint", (void*) CountedLayerInterfaceFactoryPart_paint);
    java_register_method("CountedLayerInterfaceFactoryPart", "paintThreed", (void*) CountedLayerInterfaceFactoryPart_paintThreed);
    java_register_method("CountedLayerInterfaceFactoryPart", "getAnimationInterface", (void*) CountedLayerInterfaceFactoryPart_getAnimationInterface);
    java_register_method("CountedLayerInterfaceFactoryPart", "setAnimationInterface", (void*) CountedLayerInterfaceFactoryPart_setAnimationInterface);
    java_register_method("CountedLayerInterfaceFactoryPart", "getXOffset", (void*) CountedLayerInterfaceFactoryPart_getXOffset);
    java_register_method("CountedLayerInterfaceFactoryPart", "setXOffset", (void*) CountedLayerInterfaceFactoryPart_setXOffset);
    java_register_method("CountedLayerInterfaceFactoryPart", "getTotalString", (void*) CountedLayerInterfaceFactoryPart_getTotalString);
    java_register_method("CountedLayerInterfaceFactoryPart", "getCountedPickedUpLayerInterfaceFactory", (void*) CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory);
    java_register_method("CountedLayerInterfaceFactoryPart", "setCountedPickedUpLayerInterfaceFactory", (void*) CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory);
}

static void CountedLayerInterfaceFactoryPart_initFields(CountedLayerInterfaceFactoryPart* this) {
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
    this->total = 0;
    this->totalString = NullUtil_getInstance()->NULL_CHAR_ARRAY;
    this->xOffset = 0;
    this->countedPickedUpLayerInterfaceFactory = (CountedPickedUpLayerInterfaceFactory_staticInit(), CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY);
    
}


void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
    CountedLayerInterfaceFactoryPart_register();
    CountedLayerInterfaceFactoryPart_initFields(this);
        this->primitiveLongUtil = PrimitiveLongUtil_createPowerOfTen(1000);
        CountedLayerInterfaceFactoryPart_initMethod(this, total, countedPickedUpLayerInterfaceFactory);
}

CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_new(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
    CountedLayerInterfaceFactoryPart* this = java_object_alloc(sizeof(CountedLayerInterfaceFactoryPart), "CountedLayerInterfaceFactoryPart");
    CountedLayerInterfaceFactoryPart_init(this, total, countedPickedUpLayerInterfaceFactory);
    return this;
}


void CountedLayerInterfaceFactoryPart_updateMeasurement(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        CountedLayerInterfaceFactoryPart_setXOffset(this, Font_charsWidth(font, this->totalString, 0, PrimitiveLongUtil_getCurrentTotalDigits(this->primitiveLongUtil)) + (Font_getSize(font) >> 1));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


static void CountedLayerInterfaceFactoryPart_initMethod(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
        CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(this, countedPickedUpLayerInterfaceFactory);
        this->total = total;
}


// throws Exception
AllBinaryLayer* CountedLayerInterfaceFactoryPart_getInstance(CountedLayerInterfaceFactoryPart* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z) {
        if (this->total > 0) {
            CountedLayerInterfaceFactoryPart_setTotal(this, this->total - 1);
            return CountedPickedUpLayerInterfaceFactory_getNextInstance(CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(this), hashtable, x, y, z);
        } else {
            java_throw(java_exception_new("Exception", "No more left. Could use a listener to automatically remove"));
        }
}


int32_t CountedLayerInterfaceFactoryPart_getTotal(CountedLayerInterfaceFactoryPart* this) {
        return this->total;
}


void CountedLayerInterfaceFactoryPart_setTotal(CountedLayerInterfaceFactoryPart* this, int32_t total) {
        this->total = total;
        this->totalString = PrimitiveLongUtil_getCharArray(this->primitiveLongUtil, total);
        this->myFontProcessor = this->updateMyFontProcessor;
}


void CountedLayerInterfaceFactoryPart_paint(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
}


void CountedLayerInterfaceFactoryPart_paintThreed(CountedLayerInterfaceFactoryPart* this, Graphics* graphics) {
}


Animation* CountedLayerInterfaceFactoryPart_getAnimationInterface(CountedLayerInterfaceFactoryPart* this) {
        return this->animationInterface;
}


void CountedLayerInterfaceFactoryPart_setAnimationInterface(CountedLayerInterfaceFactoryPart* this, Animation* animationInterface) {
        this->animationInterface = animationInterface;
}


int32_t CountedLayerInterfaceFactoryPart_getXOffset(CountedLayerInterfaceFactoryPart* this) {
        return this->xOffset;
}


static void CountedLayerInterfaceFactoryPart_setXOffset(CountedLayerInterfaceFactoryPart* this, int32_t totalStringWidth) {
        this->xOffset = totalStringWidth;
}


uint16_t* CountedLayerInterfaceFactoryPart_getTotalString(CountedLayerInterfaceFactoryPart* this) {
        return this->totalString;
}


CountedPickedUpLayerInterfaceFactory* CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this) {
        return this->countedPickedUpLayerInterfaceFactory;
}


void CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory) {
        this->countedPickedUpLayerInterfaceFactory = countedPickedUpLayerInterfaceFactory;
}

