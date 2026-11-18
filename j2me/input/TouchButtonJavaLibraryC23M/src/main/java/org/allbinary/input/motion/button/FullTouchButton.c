// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/FullTouchButton.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/input/motion/button/TouchButton.h"
#include "org/allbinary/input/motion/button/TouchButtonInput.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"
#if __has_include("org/allbinary/input/motion/button/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/input/motion/button/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/input/motion/button/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/input/motion/button/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/graphics/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/graphics/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#endif






void FullTouchButton_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void FullTouchButton_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("FullTouchButton", "TouchButton");
    java_register_method("FullTouchButton", "updateRectangle", (void*) FullTouchButton_updateRectangle);
}


// throws Exception
FullTouchButton* FullTouchButton_createButton(TouchButtonInput* touchButtonInput, TouchButtonResource* touchButtonResource, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
        return FullTouchButton_new(touchButtonInput, AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), touchButtonResource->RESOURCE), 0), AnimationInterfaceFactoryInterface_getInstance(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), touchButtonResource->HINT), 0), rawRectangle, cellPosition, xBorder, yBorder);
}


void FullTouchButton_init(FullTouchButton* this, TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
    FullTouchButton_register();
        TouchButton_init7(&this->base, touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder);
}

FullTouchButton* FullTouchButton_new(TouchButtonInput* touchButtonInput, Animation* animationInterface, Animation* hintAnimationInterface, Rectangle* rawRectangle, CellPosition* cellPosition, int32_t xBorder, int32_t yBorder) {
    FullTouchButton* this = java_object_alloc(sizeof(FullTouchButton), "FullTouchButton");
    FullTouchButton_init(this, touchButtonInput, animationInterface, hintAnimationInterface, rawRectangle, cellPosition, xBorder, yBorder);
    return this;
}


void FullTouchButton_updateRectangle(FullTouchButton* this) {
        JAVA_TRY {
            PointFactory* pointFactory = PointFactory_getInstance();
            int32_t x = Rectangle_getWidth(this->base.rawRectangle) * CellPosition_getColumn(this->base.cellPositionP);
            int32_t y = Rectangle_getHeight(this->base.rawRectangle) * CellPosition_getRow(this->base.cellPositionP);
            this->base.rectangleP = Rectangle_new(PointFactory_createXY(pointFactory, x, y), Rectangle_getWidth(this->base.rawRectangle) + (2 * this->base.xBorder), Rectangle_getHeight(this->base.rawRectangle) + (2 * this->base.yBorder));
            GPoint* point = Rectangle_getPoint(this->base.rectangleP);
            this->base.animationX = GPoint_getX(point) + this->base.xBorder;
            this->base.animationY = GPoint_getY(point) + this->base.yBorder;
            this->base.hintAnimationY = this->base.animationY - Rectangle_getHeight(this->base.rectangleP) >> 1;
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "updateRectangle", e);
        } JAVA_END_TRY;
}

