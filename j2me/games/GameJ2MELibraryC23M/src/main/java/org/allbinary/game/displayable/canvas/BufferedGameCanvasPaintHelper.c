// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BufferedGameCanvasPaintHelper.h"
#include "javax/microedition/lcdui/Canvas.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/NullCanvas.h"
#include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif


static constexpr int32_t BufferedGameCanvasPaintHelper_MAX_IMAGES = 4;




void BufferedGameCanvasPaintHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BufferedGameCanvasPaintHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BufferedGameCanvasPaintHelper", "ProcessPaintable");
    java_register_method("BufferedGameCanvasPaintHelper", "process", (void*) BufferedGameCanvasPaintHelper_process);
    java_register_method("BufferedGameCanvasPaintHelper", "paint", (void*) BufferedGameCanvasPaintHelper_paint);
}

static void BufferedGameCanvasPaintHelper_initFields(BufferedGameCanvasPaintHelper* this) {
    this->gameCanvas = (NullCanvas_staticInit(), NullCanvas_NULL_CANVAS);
    this->offScreenImage = ((Image**) java_array_new(sizeof(Image*), BufferedGameCanvasPaintHelper_MAX_IMAGES));
    this->previousImage = (NullImage_staticInit(), NullImage_NULL_IMAGE);
    this->circularIndexUtil = CircularIndexUtil_createInstance(BufferedGameCanvasPaintHelper_MAX_IMAGES);
    this->drawCircularIndexUtil = CircularIndexUtil_createInstanceAt(BufferedGameCanvasPaintHelper_MAX_IMAGES - 1, BufferedGameCanvasPaintHelper_MAX_IMAGES);
    this->anchor = (Anchor_staticInit(), Anchor_TOP_LEFT);
}


void BufferedGameCanvasPaintHelper_init(BufferedGameCanvasPaintHelper* this, AllBinaryGameCanvas* gameCanvas) {
    BufferedGameCanvasPaintHelper_register();
    ProcessPaintable_init(&this->base);
    BufferedGameCanvasPaintHelper_initFields(this);
        java_throw(java_exception_new("Exception", "No Longer Used"));
}

BufferedGameCanvasPaintHelper* BufferedGameCanvasPaintHelper_new(AllBinaryGameCanvas* gameCanvas) {
    BufferedGameCanvasPaintHelper* this = java_object_alloc(sizeof(BufferedGameCanvasPaintHelper), "BufferedGameCanvasPaintHelper");
    BufferedGameCanvasPaintHelper_init(this, gameCanvas);
    return this;
}


void BufferedGameCanvasPaintHelper_process(BufferedGameCanvasPaintHelper* this) {
        MyCanvas* myCanvas = (((MyCanvas*) this->gameCanvas));
        MyCanvas_draw(myCanvas, Image_getGraphics(this->offScreenImage[CircularIndexUtil_getIndex(this->circularIndexUtil)]));
        CircularIndexUtil_next(this->circularIndexUtil);
        CircularIndexUtil_next(this->drawCircularIndexUtil);
}


void BufferedGameCanvasPaintHelper_paint(BufferedGameCanvasPaintHelper* this, Graphics* graphics) {
        this->previousImage = this->offScreenImage[CircularIndexUtil_getIndex(this->drawCircularIndexUtil)];
        Graphics_drawImage(graphics, this->previousImage, 0, 0, this->anchor);
}

