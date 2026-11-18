// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BasicPopupMenuPaintable.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/AndroidUtil.h"
#include "org/allbinary/J2MEUtil.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/vector/RectangleFilledAnimation.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/layer/SWTUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#include "org/allbinary/graphics/draw/DrawVerticalStringUtil.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/font/UpdateMyFontProcessor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"
#endif
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif


static const char* BasicPopupMenuPaintable_NAME = "MENU";





void BasicPopupMenuPaintable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicPopupMenuPaintable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicPopupMenuPaintable", "Paintable");
    java_register_method("BasicPopupMenuPaintable", "updateMeasurement", (void*) BasicPopupMenuPaintable_updateMeasurement);
    java_register_method("BasicPopupMenuPaintable", "init", (void*) BasicPopupMenuPaintable_initMethod);
    java_register_method("BasicPopupMenuPaintable", "paint", (void*) BasicPopupMenuPaintable_paint);
}

static void BasicPopupMenuPaintable_initFields(BasicPopupMenuPaintable* this) {
    this->basicSetColorUtil = BasicColorSetUtil_getInstance();
    this->drawStringUtil = DrawVerticalStringUtil_getInstance();
    
    
    this->myFontProcessor = UpdateMyFontProcessor_new(this);
    
    this->BORDER = 0;
    this->heightOffset = 0;
    this->offset = 0;
    this->animationInterface = nullptr;
}


void BasicPopupMenuPaintable_init(BasicPopupMenuPaintable* this, Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    BasicPopupMenuPaintable_register();
    Paintable_init(&this->base);
    BasicPopupMenuPaintable_initFields(this);
        this->foregroundBasicColor = foregroundBasicColor;
        this->label = BasicPopupMenuPaintable_NAME;
        this->rectangle = rectangle;
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
            this->animationInterface = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
        } else {
            this->animationInterface = RectangleFilledAnimation_new(Rectangle_getWidth(this->rectangle), Rectangle_getHeight(this->rectangle), BasicColorFactory_getInstance()->TRANSPARENT_GREY);
        }
        BasicPopupMenuPaintable_initMethod(this, rectangle);
}

BasicPopupMenuPaintable* BasicPopupMenuPaintable_new(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) {
    BasicPopupMenuPaintable* this = java_object_alloc(sizeof(BasicPopupMenuPaintable), "BasicPopupMenuPaintable");
    BasicPopupMenuPaintable_init(this, rectangle, backgroundBasicColor, foregroundBasicColor);
    return this;
}


void BasicPopupMenuPaintable_updateMeasurement(BasicPopupMenuPaintable* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        Features* features = Features_getInstance();
        bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
        DrawVerticalStringUtil_updateMeasurement(this->drawStringUtil, graphics, this->label);
        int32_t BORDER = 0;
        if (J2MEUtil_isHTML() || isOpenGL) {
            BORDER = MyFontProcessor_defaultCharWidth(font) / 2;
        } else if (AndroidUtil_isAndroid() || J2MEUtil_isJ2SE() || (SWTUtil_staticInit(), SWTUtil_isSWT)) {
            BORDER = MyFontProcessor_defaultCharWidth(font);
        } else {
            BORDER = MyFontProcessor_defaultCharWidth(font) * 2;
        }
        this->BORDER = BORDER;
        this->heightOffset = Rectangle_getHeight(this->rectangle) - (Font_getHeight(font) * ((int32_t) strlen(BasicPopupMenuPaintable_NAME)));
        if (OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil_getInstance())) {
            this->heightOffset -= Font_getHeight(font) + 2;
            if (AndroidUtil_isAndroid()) {
                this->heightOffset = Font_getHeight(font);
            } else {
                this->heightOffset -= Font_getHeight(font) + 2;
            }
        }
        this->offset = (this->heightOffset >> 1) + ((SWTJOGLProcessor_isJOGL(SWTJOGLProcessor_getInstance()) ? 4 : 0));
        this->myFontProcessor = MyFontProcessor_getInstance();
}


// throws Exception
void BasicPopupMenuPaintable_initMethod(BasicPopupMenuPaintable* this, Rectangle* rectangle) {
        this->rectangle = rectangle;
        int32_t width = Rectangle_getWidth(this->rectangle);
        int32_t height = Rectangle_getHeight(this->rectangle);
        if (J2MEUtil_isJ2ME() || J2MEUtil_isHTML()) {
        } else {
            RectangleFilledAnimation* rectangleFilledAnimation = ((RectangleFilledAnimation*) this->animationInterface);
            RectangleFilledAnimation_setWidth(rectangleFilledAnimation, width);
            RectangleFilledAnimation_setHeight(rectangleFilledAnimation, height);
        }
}


void BasicPopupMenuPaintable_paint(BasicPopupMenuPaintable* this, Graphics* graphics) {
        MyFontProcessor_process(this->myFontProcessor, graphics);
        GPoint* point = Rectangle_getPoint(this->rectangle);
        int32_t x = GPoint_getX(point);
        int32_t y = GPoint_getY(point);
        int32_t width = Rectangle_getWidth(this->rectangle);
        int32_t height = Rectangle_getHeight(this->rectangle);
        Animation_paintXY(this->animationInterface, graphics, x, y);
        BasicColorSetUtil_setBasicColorP(this->basicSetColorUtil, graphics, this->foregroundBasicColor);
        DrawVerticalStringUtil_paintVerticle(this->drawStringUtil, graphics, this->label, x + this->BORDER, y + this->offset, 0);
        Graphics_drawRect(graphics, x, y, width, height);
}

