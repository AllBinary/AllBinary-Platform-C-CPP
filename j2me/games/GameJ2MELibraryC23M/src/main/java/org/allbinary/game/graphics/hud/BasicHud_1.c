// Generated Code Do Not Modify
#include "org/allbinary/game/graphics/hud/BasicHud_1.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/displayable/event/DisplayChangeEvent.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/game/graphics/hud/HudGraphicsPosition.h"
#include "org/allbinary/game/graphics/hud/BasicHudFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/logic/util/event/EventStrings.h")
#include "org/allbinary/logic/util/event/EventStrings.h"
#endif
#if __has_include("org/allbinary/graphics/PointFactory.h")
#include "org/allbinary/graphics/PointFactory.h"
#endif





























void BasicHud_1_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicHud_1_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicHud_1", nullptr);
    java_register_method("BasicHud_1", "updateMeasurement", (void*) BasicHud_1_updateMeasurement);
    java_register_method("BasicHud_1", "getLocation", (void*) BasicHud_1_getLocation);
    java_register_method("BasicHud_1", "getDirection", (void*) BasicHud_1_getDirection);
    java_register_method("BasicHud_1", "getHudGraphicsPositionWH", (void*) BasicHud_1_getHudGraphicsPositionWH);
    java_register_method("BasicHud_1", "onEvent", (void*) BasicHud_1_onEvent);
    java_register_method("BasicHud_1", "onDisplayChangeEvent", (void*) BasicHud_1_onDisplayChangeEvent);
    java_register_method("BasicHud_1", "getPoint", (void*) BasicHud_1_getPoint);
    java_register_method("BasicHud_1", "getBufferZone", (void*) BasicHud_1_getBufferZone);
    java_register_method("BasicHud_1", "setBufferZone", (void*) BasicHud_1_setBufferZone);
    java_register_method("BasicHud_1", "setLocation", (void*) BasicHud_1_setLocation);
    java_register_method("BasicHud_1", "setDirection", (void*) BasicHud_1_setDirection);
    java_register_method("BasicHud_1", "getHudGraphicsPosition", (void*) BasicHud_1_getHudGraphicsPosition);
    java_register_method("BasicHud_1", "getColor", (void*) BasicHud_1_getColor);
    java_register_method("BasicHud_1", "getX", (void*) BasicHud_1_getX);
    java_register_method("BasicHud_1", "setX", (void*) BasicHud_1_setX);
    java_register_method("BasicHud_1", "setBasicColorP", (void*) BasicHud_1_setBasicColorP);
    java_register_method("BasicHud_1", "getBasicColorP", (void*) BasicHud_1_getBasicColorP);
    java_register_method("BasicHud_1", "setY", (void*) BasicHud_1_setY);
    java_register_method("BasicHud_1", "getY", (void*) BasicHud_1_getY);
    java_register_method("BasicHud_1", "paintSSO", (void*) BasicHud_1_paintSSO);
    java_register_method("BasicHud_1", "paintSSOO", (void*) BasicHud_1_paintSSOO);
    java_register_method("BasicHud_1", "paintDXY", (void*) BasicHud_1_paintDXY);
    java_register_method("BasicHud_1", "paintDX", (void*) BasicHud_1_paintDX);
    java_register_method("BasicHud_1", "paintOffsetAndLength", (void*) BasicHud_1_paintOffsetAndLength);
    java_register_method("BasicHud_1", "paintString", (void*) BasicHud_1_paintString);
}

static void BasicHud_1_initFields(BasicHud_1* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->canvasStrings = CanvasStrings_getInstance();
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->displayInfo = DisplayInfoSingleton_getInstance();
    this->updateMyFontProcessor = UpdateMyFontProcessor_new(this);
    this->myFontProcessor = this->updateMyFontProcessor;
    this->location = 0;
    this->direction = 0;
    this->bufferZone = 0;
    this->hudGraphicsPosition = (HudGraphicsPosition_staticInit(), HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION);
    this->x = 0;
    this->y = 0;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->updateMaxWidth = 0;
    this->updateMaxHeight = 0;
    this->offsetY = 0;
}


void BasicHud_1_init(BasicHud_1* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_1_register();
    BasicHud_1_initFields(this);
        BasicHud_1_setLocation(this, location);
        BasicHud_1_setDirection(this, direction);
        BasicHud_1_setBufferZone(this, bufferZone);
        BasicHud_1_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        BasicHud_1_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
}

BasicHud_1* BasicHud_1_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_1* this = java_object_alloc(sizeof(BasicHud_1), "BasicHud_1");
    BasicHud_1_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void BasicHud_1_updateMeasurement(BasicHud_1* this, Graphics* graphics) {
        JAVA_TRY {
            this->hudGraphicsPosition = BasicHud_1_getHudGraphicsPositionWH(this, DisplayInfoSingleton_getLastWidth(this->displayInfo), DisplayInfoSingleton_getLastHeight(this->displayInfo), this->updateMaxWidth, this->updateMaxHeight);
            this->x = GPoint_getX(HudGraphicsPosition_getPoint(this->hudGraphicsPosition));
            BasicHud_1_setY(this, GPoint_getY(HudGraphicsPosition_getPoint(this->hudGraphicsPosition)));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


int32_t BasicHud_1_getLocation(BasicHud_1* this) {
        return this->location;
}


int32_t BasicHud_1_getDirection(BasicHud_1* this) {
        return this->direction;
}


// throws Exception
HudGraphicsPosition* BasicHud_1_getHudGraphicsPositionWH(BasicHud_1* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight) {
        int32_t x = 0;
        int32_t y = 0;
        int32_t anchor = 0;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (basicHudFactory->BOTTOMLEFT == BasicHud_1_getLocation(this)) {
            x = this->bufferZone + 2;
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_LEFT);
        } else if (basicHudFactory->BOTTOMRIGHT == BasicHud_1_getLocation(this)) {
            x = width - maxWidth;
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_RIGHT);
        } else if (basicHudFactory->TOPLEFT == BasicHud_1_getLocation(this)) {
            x = this->bufferZone + 2;
            y = this->bufferZone + 5;
            anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
        } else if (basicHudFactory->TOPRIGHT == BasicHud_1_getLocation(this)) {
            x = width - maxWidth;
            y = this->bufferZone + 5;
            anchor = (Graphics_staticInit(), Graphics_TOP) & (Graphics_staticInit(), Graphics_RIGHT);
        } else if (basicHudFactory->TOPCENTER == BasicHud_1_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = this->bufferZone + 5;
            anchor = (Graphics_staticInit(), Graphics_TOP) & (Graphics_staticInit(), Graphics_HCENTER);
        } else if (basicHudFactory->BOTTOMCENTER == BasicHud_1_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_HCENTER);
        } else if (basicHudFactory->ABSOLUTE == BasicHud_1_getLocation(this)) {
            x = maxHeight;
            y = maxWidth;
            anchor = 0;
        }
        return HudGraphicsPosition_new(BasicHud_1_getPoint(this, x, y), anchor);
}


void BasicHud_1_onEvent(BasicHud_1* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void BasicHud_1_onDisplayChangeEvent(BasicHud_1* this, DisplayChangeEvent* displayChangeEvent) {
        this->myFontProcessor = this->updateMyFontProcessor;
}


GPoint* BasicHud_1_getPoint(BasicHud_1* this, int32_t x, int32_t y) {
        return PointFactory_createXY(PointFactory_getInstance(), x, y);
}


int32_t BasicHud_1_getBufferZone(BasicHud_1* this) {
        return this->bufferZone;
}


void BasicHud_1_setBufferZone(BasicHud_1* this, int32_t bufferZone) {
        this->bufferZone = bufferZone;
}


void BasicHud_1_setLocation(BasicHud_1* this, int32_t location) {
        this->location = location;
}


void BasicHud_1_setDirection(BasicHud_1* this, int32_t direction) {
        this->direction = direction;
}


HudGraphicsPosition* BasicHud_1_getHudGraphicsPosition(BasicHud_1* this) {
        return this->hudGraphicsPosition;
}


int32_t BasicHud_1_getColor(BasicHud_1* this) {
        return this->color;
}


int32_t BasicHud_1_getX(BasicHud_1* this) {
        return this->x;
}


void BasicHud_1_setX(BasicHud_1* this, int32_t x) {
        this->x = x;
}


void BasicHud_1_setBasicColorP(BasicHud_1* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* BasicHud_1_getBasicColorP(BasicHud_1* this) {
        return this->basicColor;
}


void BasicHud_1_setY(BasicHud_1* this, int32_t y) {
        this->y = y;
}


int32_t BasicHud_1_getY(BasicHud_1* this) {
        return this->y;
}


void BasicHud_1_paintSSO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        Graphics_drawString(graphics, string, this->x, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintSSOO(BasicHud_1* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicHud_1_getColor(this));
        Graphics_drawString(graphics, string, this->x + offset, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset2, BasicHud_1_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintDXY(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset2, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintDX(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintOffsetAndLength(BasicHud_1* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_1_paintString(BasicHud_1* this, Graphics* graphics, const char* string) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_1_getBasicColorP(this));
        int32_t y = BasicHud_1_getY(this) + this->offsetY;
        Graphics_drawString(graphics, string, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}

