// Generated Code Do Not Modify
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/graphics/paint/NullPaintable.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif


static void* ProgressCanvasFactory_PROGRESS_FORM_SCREEN;



void ProgressCanvasFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ProgressCanvasFactory_PROGRESS_FORM_SCREEN = NullUtil_getInstance()->NULL_OBJECT;
}

void ProgressCanvasFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ProgressCanvasFactory", nullptr);
}

void ProgressCanvasFactory_init(ProgressCanvasFactory* this) {
    ProgressCanvasFactory_register();
}

ProgressCanvasFactory* ProgressCanvasFactory_new(void) {
    ProgressCanvasFactory* this = java_object_alloc(sizeof(ProgressCanvasFactory), "ProgressCanvasFactory");
    ProgressCanvasFactory_init(this);
    return this;
}


ProgressCanvas* ProgressCanvasFactory_getInstance(void) {
        if ((ProgressCanvasFactory_staticInit(), ProgressCanvasFactory_PROGRESS_FORM_SCREEN) == NullUtil_getInstance()->NULL_OBJECT) {
            ProgressCanvasFactory_PROGRESS_FORM_SCREEN = ProgressCanvas_new(StringUtil_getInstance()->EMPTY_STRING, BasicColorFactory_getInstance()->BLACK, BasicColorFactory_getInstance()->WHITE);
        }
        return ((ProgressCanvas*) (ProgressCanvasFactory_staticInit(), ProgressCanvasFactory_PROGRESS_FORM_SCREEN));
}


PaintableInterface* ProgressCanvasFactory_getLazyInstance(void) {
        return NullPaintable_getInstance();
}

