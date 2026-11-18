// Generated Code Do Not Modify
#include "org/allbinary/game/graphics/hud/BasicHud.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/J2MEUtil.h"
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





























void BasicHud_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicHud_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicHud", nullptr);
    java_register_method("BasicHud", "updateMeasurement", (void*) BasicHud_updateMeasurement);
    java_register_method("BasicHud", "getLocation", (void*) BasicHud_getLocation);
    java_register_method("BasicHud", "getDirection", (void*) BasicHud_getDirection);
    java_register_method("BasicHud", "getHudGraphicsPositionWH", (void*) BasicHud_getHudGraphicsPositionWH);
    java_register_method("BasicHud", "onEvent", (void*) BasicHud_onEvent);
    java_register_method("BasicHud", "onDisplayChangeEvent", (void*) BasicHud_onDisplayChangeEvent);
    java_register_method("BasicHud", "getPoint", (void*) BasicHud_getPoint);
    java_register_method("BasicHud", "getBufferZone", (void*) BasicHud_getBufferZone);
    java_register_method("BasicHud", "setBufferZone", (void*) BasicHud_setBufferZone);
    java_register_method("BasicHud", "setLocation", (void*) BasicHud_setLocation);
    java_register_method("BasicHud", "setDirection", (void*) BasicHud_setDirection);
    java_register_method("BasicHud", "getHudGraphicsPosition", (void*) BasicHud_getHudGraphicsPosition);
    java_register_method("BasicHud", "getColor", (void*) BasicHud_getColor);
    java_register_method("BasicHud", "getX", (void*) BasicHud_getX);
    java_register_method("BasicHud", "setX", (void*) BasicHud_setX);
    java_register_method("BasicHud", "setBasicColorP", (void*) BasicHud_setBasicColorP);
    java_register_method("BasicHud", "getBasicColorP", (void*) BasicHud_getBasicColorP);
    java_register_method("BasicHud", "setY", (void*) BasicHud_setY);
    java_register_method("BasicHud", "getY", (void*) BasicHud_getY);
    java_register_method("BasicHud", "paintSSO", (void*) BasicHud_paintSSO);
    java_register_method("BasicHud", "paintSSOO", (void*) BasicHud_paintSSOO);
    java_register_method("BasicHud", "paintDXY", (void*) BasicHud_paintDXY);
    java_register_method("BasicHud", "paintDX", (void*) BasicHud_paintDX);
    java_register_method("BasicHud", "paintOffsetAndLength", (void*) BasicHud_paintOffsetAndLength);
    java_register_method("BasicHud", "paintString", (void*) BasicHud_paintString);
}

static void BasicHud_initFields(BasicHud* this) {
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
    this->bufferZoneY = 0;
    this->hudGraphicsPosition = (HudGraphicsPosition_staticInit(), HudGraphicsPosition_NULL_HUD_GRAPHICS_POSITION);
    this->x = 0;
    this->y = 0;
    this->basicColor = BasicColorFactory_getInstance()->BLACK;
    
    this->updateMaxWidth = 0;
    this->updateMaxHeight = 0;
    this->offsetY = 0;
}


void BasicHud_init(BasicHud* this, int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud_register();
    BasicHud_initFields(this);
        BasicHud_setLocation(this, location);
        BasicHud_setDirection(this, direction);
        BasicHud_setBufferZone(this, bufferZone);
        BasicHud_onDisplayChangeEvent(this, DisplayInfoSingleton_getInstance()->displayChangeEvent);
        BasicHud_setBasicColorP(this, basicColor);
        this->color = BasicColor_intValue(basicColor);
}

BasicHud* BasicHud_new(int32_t location, int32_t direction, int32_t bufferZone, BasicColor* basicColor) {
    BasicHud* this = java_object_alloc(sizeof(BasicHud), "BasicHud");
    BasicHud_init(this, location, direction, bufferZone, basicColor);
    return this;
}


void BasicHud_updateMeasurement(BasicHud* this, Graphics* graphics) {
        JAVA_TRY {
            this->hudGraphicsPosition = BasicHud_getHudGraphicsPositionWH(this, DisplayInfoSingleton_getLastWidth(this->displayInfo), DisplayInfoSingleton_getLastHeight(this->displayInfo), this->updateMaxWidth, this->updateMaxHeight);
            this->x = GPoint_getX(HudGraphicsPosition_getPoint(this->hudGraphicsPosition));
            BasicHud_setY(this, GPoint_getY(HudGraphicsPosition_getPoint(this->hudGraphicsPosition)));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, this->canvasStrings->ON_DISPLAY_CHANGE_EVENT, e);
        } JAVA_END_TRY;
        this->myFontProcessor = MyFontProcessor_getInstance();
}


int32_t BasicHud_getLocation(BasicHud* this) {
        return this->location;
}


int32_t BasicHud_getDirection(BasicHud* this) {
        return this->direction;
}


// throws Exception
HudGraphicsPosition* BasicHud_getHudGraphicsPositionWH(BasicHud* this, int32_t width, int32_t height, int32_t maxWidth, int32_t maxHeight) {
        int32_t x = 0;
        int32_t y = 0;
        int32_t anchor = 0;
        BasicHudFactory* basicHudFactory = BasicHudFactory_getInstance();
        if (basicHudFactory->BOTTOMLEFT == BasicHud_getLocation(this)) {
            x = this->bufferZone + 2;
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_LEFT);
        } else if (basicHudFactory->BOTTOMRIGHT == BasicHud_getLocation(this)) {
            x = width - maxWidth;
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_RIGHT);
        } else if (basicHudFactory->TOPLEFT == BasicHud_getLocation(this)) {
            x = this->bufferZone + 2;
            y = this->bufferZoneY;
            anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
        } else if (basicHudFactory->TOPRIGHT == BasicHud_getLocation(this)) {
            x = width - maxWidth;
            y = this->bufferZoneY;
            anchor = (Graphics_staticInit(), Graphics_TOP) & (Graphics_staticInit(), Graphics_RIGHT);
        } else if (basicHudFactory->TOPCENTER == BasicHud_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = this->bufferZoneY;
            anchor = (Graphics_staticInit(), Graphics_TOP) & (Graphics_staticInit(), Graphics_HCENTER);
        } else if (basicHudFactory->BOTTOMCENTER == BasicHud_getLocation(this)) {
            x = ((width - maxWidth) / 2);
            y = height - maxHeight - this->bufferZone;
            anchor = (Graphics_staticInit(), Graphics_BOTTOM) & (Graphics_staticInit(), Graphics_HCENTER);
        } else if (basicHudFactory->ABSOLUTE == BasicHud_getLocation(this)) {
            x = maxHeight;
            y = maxWidth;
            anchor = 0;
        }
        return HudGraphicsPosition_new(BasicHud_getPoint(this, x, y), anchor);
}


void BasicHud_onEvent(BasicHud* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


void BasicHud_onDisplayChangeEvent(BasicHud* this, DisplayChangeEvent* displayChangeEvent) {
        this->myFontProcessor = this->updateMyFontProcessor;
}


GPoint* BasicHud_getPoint(BasicHud* this, int32_t x, int32_t y) {
        return PointFactory_createXY(PointFactory_getInstance(), x, y);
}


int32_t BasicHud_getBufferZone(BasicHud* this) {
        return this->bufferZone;
}


void BasicHud_setBufferZone(BasicHud* this, int32_t bufferZone) {
        this->bufferZone = bufferZone;
        if (J2MEUtil_isHTML()) {
            this->bufferZoneY = this->bufferZone;
        } else {
            this->bufferZoneY = this->bufferZone + 5;
        }
}


void BasicHud_setLocation(BasicHud* this, int32_t location) {
        this->location = location;
}


void BasicHud_setDirection(BasicHud* this, int32_t direction) {
        this->direction = direction;
}


HudGraphicsPosition* BasicHud_getHudGraphicsPosition(BasicHud* this) {
        return this->hudGraphicsPosition;
}


int32_t BasicHud_getColor(BasicHud* this) {
        return this->color;
}


int32_t BasicHud_getX(BasicHud* this) {
        return this->x;
}


void BasicHud_setX(BasicHud* this, int32_t x) {
        this->x = x;
}


void BasicHud_setBasicColorP(BasicHud* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* BasicHud_getBasicColorP(BasicHud* this) {
        return this->basicColor;
}


void BasicHud_setY(BasicHud* this, int32_t y) {
        this->y = y;
}


int32_t BasicHud_getY(BasicHud* this) {
        return this->y;
}


void BasicHud_paintSSO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        Graphics_drawString(graphics, string, this->x, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintSSOO(BasicHud* this, Graphics* graphics, const char* string, const char* string2, int32_t offset, int32_t offset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        Graphics_setColor(graphics, BasicHud_getColor(this));
        Graphics_drawString(graphics, string, this->x + offset, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawString(graphics, string2, this->x + offset2, BasicHud_getY(this), HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintDXY(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset, int32_t xOffset2) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset2, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintDX(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len, uint16_t* charArray2, int32_t offset2, int32_t len2, int32_t xOffset) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
        Graphics_drawChars(graphics, charArray2, offset2, len2, this->x + xOffset, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintOffsetAndLength(BasicHud* this, Graphics* graphics, uint16_t* charArray, int32_t offset, int32_t len) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this);
        Graphics_drawChars(graphics, charArray, offset, len, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}


void BasicHud_paintString(BasicHud* this, Graphics* graphics, const char* string) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, BasicHud_getBasicColorP(this));
        int32_t y = BasicHud_getY(this) + this->offsetY;
        Graphics_drawString(graphics, string, this->x, y, HudGraphicsPosition_getAnchor(this->hudGraphicsPosition));
}

