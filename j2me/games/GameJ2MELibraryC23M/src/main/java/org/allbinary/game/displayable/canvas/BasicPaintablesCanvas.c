// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/BasicPaintablesCanvas.h"
#include "javax/microedition/lcdui/CommandListener.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/paint/ColorFillBasePaintable.h"
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#include "org/allbinary/game/displayable/canvas/GameCommandCanvas.h"
#if __has_include("org/allbinary/game/paint/ColorFillPaintableFactory.h")
#include "org/allbinary/game/paint/ColorFillPaintableFactory.h"
#endif
#if __has_include("org/allbinary/graphics/paint/Paintable.h")
#include "org/allbinary/graphics/paint/Paintable.h"
#endif





void BasicPaintablesCanvas_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicPaintablesCanvas_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicPaintablesCanvas", "GameCommandCanvas");
    java_register_method("BasicPaintablesCanvas", "paint", (void*) BasicPaintablesCanvas_paint);
}

static void BasicPaintablesCanvas_initFields(BasicPaintablesCanvas* this) {
    
    
}


void BasicPaintablesCanvas_init(BasicPaintablesCanvas* this, CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray) {
    BasicPaintablesCanvas_register();
        GameCommandCanvas_init(&this->base, cmdListener, name, AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), AllBinaryGameLayerManager_getForegroundBasicColor(allBinaryGameLayerManager));
        BasicPaintablesCanvas_initFields(this);
        this->paintableArray = paintableArray;
        this->colorFillPaintable = ColorFillPaintableFactory_getInstance(ColorFillPaintableFactory_getInstance(), AllBinaryGameLayerManager_getBackgroundBasicColor(allBinaryGameLayerManager), false);
}

BasicPaintablesCanvas* BasicPaintablesCanvas_new(CommandListener* cmdListener, const char* name, AllBinaryGameLayerManager* allBinaryGameLayerManager, Paintable** paintableArray) {
    BasicPaintablesCanvas* this = java_object_alloc(sizeof(BasicPaintablesCanvas), "BasicPaintablesCanvas");
    BasicPaintablesCanvas_init(this, cmdListener, name, allBinaryGameLayerManager, paintableArray);
    return this;
}


void BasicPaintablesCanvas_paint(BasicPaintablesCanvas* this, Graphics* graphics) {
        ColorFillBasePaintable_paint(this->colorFillPaintable, graphics);
        Graphics_setColor(graphics, this->base.foregroundColor);
        for (int32_t index = java_array_length(this->paintableArray) - 1; index >= 0; index--) {
            Paintable_paint(this->paintableArray[index], graphics);
        }
        GameCommandCanvas_paint((&this->base), graphics);
}

