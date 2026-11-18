// Generated Code Do Not Modify
#include "org/allbinary/game/ag/ai/BoundBounceAI.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/bounds/BoundsVisitorInterface.h"
#include "org/allbinary/bounds/LayerBounds.h"
#include "org/allbinary/game/input/GameInput.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#if __has_include("org/allbinary/game/ag/ai/GPoint.h")
#include "org/allbinary/game/ag/ai/GPoint.h"
#endif
#if __has_include("javax/microedition/lcdui/GPoint.h")
#include "javax/microedition/lcdui/GPoint.h"
#endif
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/game/ai/GPoint.h")
#include "org/allbinary/game/ai/GPoint.h"
#endif
#if __has_include("org/allbinary/game/input/GPoint.h")
#include "org/allbinary/game/input/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/layer/GPoint.h")
#include "org/allbinary/layer/GPoint.h"
#endif
#if __has_include("org/allbinary/layer/GPoint.h")
#include "org/allbinary/layer/GPoint.h"
#endif
#if __has_include("org/allbinary/game/ag/ai/GPoint.h")
#include "org/allbinary/game/ag/ai/GPoint.h"
#endif
#if __has_include("javax/microedition/lcdui/GPoint.h")
#include "javax/microedition/lcdui/GPoint.h"
#endif
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/bounds/GPoint.h")
#include "org/allbinary/bounds/GPoint.h"
#endif
#if __has_include("org/allbinary/game/ai/GPoint.h")
#include "org/allbinary/game/ai/GPoint.h"
#endif
#if __has_include("org/allbinary/game/input/GPoint.h")
#include "org/allbinary/game/input/GPoint.h"
#endif
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/layer/GPoint.h")
#include "org/allbinary/layer/GPoint.h"
#endif
#if __has_include("org/allbinary/layer/GPoint.h")
#include "org/allbinary/layer/GPoint.h"
#endif






void BoundBounceAI_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BoundBounceAI_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BoundBounceAI", "BasicAI");
    java_register_method("BoundBounceAI", "paint", (void*) BoundBounceAI_paint);
    java_register_method("BoundBounceAI", "processAI", (void*) BoundBounceAI_processAI);
}

static void BoundBounceAI_initFields(BoundBounceAI* this) {
    this->currentRelativeAngle = 0;
    
    
}


void BoundBounceAI_init(BoundBounceAI* this, AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface) {
    BoundBounceAI_register();
        BasicAI_init(&this->base, ownerLayerInterface, gameInput);
        BoundBounceAI_initFields(this);
        this->layerBounds = layerBounds;
        this->boundsVisitorInterface = boundsVisitorInterface;
}

BoundBounceAI* BoundBounceAI_new(AllBinaryLayer* ownerLayerInterface, GameInput* gameInput, LayerBounds* layerBounds, BoundsVisitorInterface* boundsVisitorInterface) {
    BoundBounceAI* this = java_object_alloc(sizeof(BoundBounceAI), "BoundBounceAI");
    BoundBounceAI_init(this, ownerLayerInterface, gameInput, layerBounds, boundsVisitorInterface);
    return this;
}


void BoundBounceAI_paint(BoundBounceAI* this, Graphics* graphics) {
        Rectangle* rectange = LayerBounds_getRectangleP(this->layerBounds);
        Graphics_drawRect(graphics, GPoint_getX(Rectangle_getPoint(rectange)), GPoint_getY(Rectangle_getPoint(rectange)), Rectangle_getWidth(rectange), Rectangle_getHeight(rectange));
}


// throws Exception
void BoundBounceAI_processAI(BoundBounceAI* this, AllBinaryLayerManager* allBinaryLayerManager) {
        LayerBounds_visit(this->layerBounds, this->boundsVisitorInterface);
}

