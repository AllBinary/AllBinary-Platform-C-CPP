// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/MyFormUtil.h"
#include "javax/microedition/lcdui/Font.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/graphics/RectangleFactory.h"
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#if __has_include("org/allbinary/graphics/opengles/OpenGLFeatureFactory.h")
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#endif
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif


static MyFormUtil* MyFormUtil_instance;




void MyFormUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MyFormUtil_instance = MyFormUtil_new();
}

void MyFormUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MyFormUtil", nullptr);
    java_register_method("MyFormUtil", "updateMeasurement", (void*) MyFormUtil_updateMeasurement);
    java_register_method("MyFormUtil", "getPopupMenuRectangle", (void*) MyFormUtil_getPopupMenuRectangle);
}

static void MyFormUtil_initFields(MyFormUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->popupMenuRectangle = (RectangleFactory_staticInit(), RectangleFactory_SINGLETON);
}

void MyFormUtil_init(MyFormUtil* this) {
    MyFormUtil_register();
    MyFormUtil_initFields(this);
}

MyFormUtil* MyFormUtil_new(void) {
    MyFormUtil* this = java_object_alloc(sizeof(MyFormUtil), "MyFormUtil");
    MyFormUtil_init(this);
    return this;
}


MyFormUtil* MyFormUtil_getInstance(void) {
        return (MyFormUtil_staticInit(), MyFormUtil_instance);
}


void MyFormUtil_updateMeasurement(MyFormUtil* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        DisplayInfoSingleton* displayInfo = DisplayInfoSingleton_getInstance();
        Features* features = Features_getInstance();
        bool isOpenGL = Features_isDefault(features, OpenGLFeatureFactory_getInstance()->OPENGL);
        int32_t TOTAL_CHAR_WIDTH = (SWTJOGLProcessor_isJOGL(SWTJOGLProcessor_getInstance()) && isOpenGL ? 2 : 3);
        int32_t width = MyFontProcessor_defaultStringWidth(font, TOTAL_CHAR_WIDTH);
        PointFactory* pointFactory = PointFactory_getInstance();
        if (DisplayInfoSingleton_getLastHeight(displayInfo) < 320) {
            this->popupMenuRectangle = Rectangle_new(PointFactory_createXY(pointFactory, 0, 25), width, (Font_getHeight(font) * 4) + 2);
        } else {
            this->popupMenuRectangle = Rectangle_new(PointFactory_createXY(pointFactory, 0, DisplayInfoSingleton_getLastHalfHeight(displayInfo) - 70), width, (Font_getHeight(font) * 5));
        }
}


Rectangle* MyFormUtil_getPopupMenuRectangle(MyFormUtil* this) {
        return this->popupMenuRectangle;
}

