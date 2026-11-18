// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/DemoCanvasProgressUtil.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h"
#include "org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h"
#include "org/allbinary/graphics/paint/PaintableComposite.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"





void DemoCanvasProgressUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void DemoCanvasProgressUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("DemoCanvasProgressUtil", nullptr);
}

void DemoCanvasProgressUtil_init(DemoCanvasProgressUtil* this) {
    DemoCanvasProgressUtil_register();
}

DemoCanvasProgressUtil* DemoCanvasProgressUtil_new(void) {
    DemoCanvasProgressUtil* this = java_object_alloc(sizeof(DemoCanvasProgressUtil), "DemoCanvasProgressUtil");
    DemoCanvasProgressUtil_init(this);
    return this;
}


void DemoCanvasProgressUtil_showProgress(DemoCanvas* demoCanvas) {
        DemoCanvasProgressUtil_showProgressOptionallyInTheBackground(demoCanvas, false);
}


void DemoCanvasProgressUtil_showProgressOptionallyInTheBackground(DemoCanvas* demoCanvas, bool background) {
        ProgressCanvas* progressCanvas = ProgressCanvasFactory_getInstance();
        ProgressCanvas_startBackground(progressCanvas, background);
        PaintableInterface** paintableArray = ((PaintableInterface**) java_array_new(sizeof(PaintableInterface*), 2));
        paintableArray[0] = progressCanvas;
        paintableArray[1] = DemoCanvas_getDefaultPaintableInterface(demoCanvas);
        DemoCanvas_setDefaultPaintableInterface(demoCanvas, PaintableComposite_new(paintableArray));
        DemoCanvas_setPaintableInterface(demoCanvas, DemoCanvas_getDefaultPaintableInterface(demoCanvas));
}

