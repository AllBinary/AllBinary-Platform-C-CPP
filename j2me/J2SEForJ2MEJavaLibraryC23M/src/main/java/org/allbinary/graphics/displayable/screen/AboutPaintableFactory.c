// Generated Code Do Not Modify
#include "org/allbinary/graphics/displayable/screen/AboutPaintableFactory.h"
#include "org/allbinary/game/paint/AboutPaintable.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/logic/string/StringUtil.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/game/paint/AboutPaintable.h")
#include "org/allbinary/game/paint/AboutPaintable.h"
#endif


static AboutPaintableFactory* AboutPaintableFactory_instance;



void AboutPaintableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AboutPaintableFactory_instance = AboutPaintableFactory_new();
}

void AboutPaintableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AboutPaintableFactory", nullptr);
}

static void AboutPaintableFactory_initFields(AboutPaintableFactory* this) {
    this->paintableArray = ((Paintable**) java_array_from(sizeof(Paintable*), sizeof((Paintable*[]){ NullPaintable_getInstance() }) / sizeof(Paintable*), (Paintable*[]){ NullPaintable_getInstance() }));
}


AboutPaintableFactory* AboutPaintableFactory_getInstance(void) {
        return (AboutPaintableFactory_staticInit(), AboutPaintableFactory_instance);
}


void AboutPaintableFactory_init(AboutPaintableFactory* this) {
    AboutPaintableFactory_register();
    AboutPaintableFactory_initFields(this);
        const char** INFO = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Built with the", "AllBinary Platform", StringUtil_getInstance()->EMPTY_STRING, "Comments or Questions:", "support@allbinary.com" }) / sizeof(const char*), (const char*[]){ "Built with the", "AllBinary Platform", StringUtil_getInstance()->EMPTY_STRING, "Comments or Questions:", "support@allbinary.com" }));
        const char** DEVELOPERS = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ "Developed By:", "Travis Berthelot" }) / sizeof(const char*), (const char*[]){ "Developed By:", "Travis Berthelot" }));
        this->paintableArray = AboutPaintable_getPaintableArrayInstance(AboutPaintable_getInstance(INFO, DEVELOPERS));
}

AboutPaintableFactory* AboutPaintableFactory_new(void) {
    AboutPaintableFactory* this = java_object_alloc(sizeof(AboutPaintableFactory), "AboutPaintableFactory");
    AboutPaintableFactory_init(this);
    return this;
}

