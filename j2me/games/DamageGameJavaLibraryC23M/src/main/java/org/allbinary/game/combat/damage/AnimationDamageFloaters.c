// Generated Code Do Not Modify
#include "org/allbinary/game/combat/damage/AnimationDamageFloaters.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/graphics/displayable/CanvasStrings.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/view/ViewPositionBase.h"
#include "org/allbinary/game/combat/damage/DamageFloaters.h"
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif
#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif






void AnimationDamageFloaters_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnimationDamageFloaters_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationDamageFloaters", "DamageFloaters");
    java_register_method("AnimationDamageFloaters", "add", (void*) AnimationDamageFloaters_add);
    java_register_method("AnimationDamageFloaters", "paint", (void*) AnimationDamageFloaters_paint);
}

static void AnimationDamageFloaters_initFields(AnimationDamageFloaters* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
}


void AnimationDamageFloaters_init(AnimationDamageFloaters* this, AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy) {
    AnimationDamageFloaters_register();
    DamageFloaters_init(&this->base);
    AnimationDamageFloaters_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        for (int32_t index = java_array_length(this->animationInterfaceArray) - 1; index >= 0; index--) {
            IndexedAnimation_setFrame(this->animationInterfaceArray[index], IndexedAnimation_getSize(this->animationInterfaceArray[index]) - 1);
        }
        this->layerInterface = layerInterface;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
        this->dx = dx;
        this->dy = dy;
}

AnimationDamageFloaters* AnimationDamageFloaters_new(AllBinaryLayer* layerInterface, IndexedAnimation** animationInterfaceArray, int32_t dx, int32_t dy) {
    AnimationDamageFloaters* this = java_object_alloc(sizeof(AnimationDamageFloaters), "AnimationDamageFloaters");
    AnimationDamageFloaters_init(this, layerInterface, animationInterfaceArray, dx, dy);
    return this;
}


void AnimationDamageFloaters_add(AnimationDamageFloaters* this, int32_t damage) {
        int32_t i = CircularIndexUtil_getIndex(this->circularIndexUtil);
        IndexedAnimation_setFrame(this->animationInterfaceArray[i], 0);
        CircularIndexUtil_next(this->circularIndexUtil);
}


void AnimationDamageFloaters_paint(AnimationDamageFloaters* this, Graphics* graphics) {
        JAVA_TRY {
            ViewPositionBase* viewPosition = AllBinaryLayer_getViewPosition(this->layerInterface);
            int32_t x = GPoint_getX(viewPosition);
            int32_t y = GPoint_getY(viewPosition);
            for (int32_t index = 0; index < java_array_length(this->animationInterfaceArray); index++) {
                IndexedAnimation* animationInterface = this->animationInterfaceArray[index];
                if (IndexedAnimation_getFrame(animationInterface) < IndexedAnimation_getAnimationSize(animationInterface) - 1) {
                    int32_t delta = IndexedAnimation_getFrame(animationInterface) * 20;
                    Animation_paintXY(animationInterface, graphics, x + this->dx, y - delta + this->dy);
                    Animation_nextFrame(animationInterface);
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            CanvasStrings* canvasStrings = CanvasStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, canvasStrings->PAINT, e);
        } JAVA_END_TRY;
}

