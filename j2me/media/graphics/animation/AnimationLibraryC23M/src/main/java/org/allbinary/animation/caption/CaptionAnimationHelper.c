// Generated Code Do Not Modify
#include "org/allbinary/animation/caption/CaptionAnimationHelper.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/text/TextAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/animation/caption/CaptionAnimation.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/caption/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/caption/GameTickTimeDelayHelper.h"
#endif
#if __has_include("javax/microedition/lcdui/GameTickTimeDelayHelper.h")
#include "javax/microedition/lcdui/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/text/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/text/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/color/GameTickTimeDelayHelper.h")
#include "org/allbinary/graphics/color/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/logic/string/GameTickTimeDelayHelper.h")
#include "org/allbinary/logic/string/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif








void CaptionAnimationHelper_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CaptionAnimationHelper_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CaptionAnimationHelper", "CaptionAnimationHelperBase");
    java_register_method("CaptionAnimationHelper", "isShowing", (void*) CaptionAnimationHelper_isShowing);
    java_register_method("CaptionAnimationHelper", "tick", (void*) CaptionAnimationHelper_tick);
    java_register_method("CaptionAnimationHelper", "update", (void*) CaptionAnimationHelper_update);
    java_register_method("CaptionAnimationHelper", "paintXY", (void*) CaptionAnimationHelper_paintXY);
}

static void CaptionAnimationHelper_initFields(CaptionAnimationHelper* this) {
    this->timeHelper = TimeDelayHelper_new(620);
    this->textAnimation = TextAnimation_new(StringUtil_getInstance()->EMPTY_STRING, AnimationBehavior_getInstance());
    
    this->animation = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
}


void CaptionAnimationHelper_init(CaptionAnimationHelper* this, Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimationHelper_register();
    CaptionAnimationHelperBase_init(&this->base);
    CaptionAnimationHelper_initFields(this);
        this->captionAnimation = CaptionAnimation_new(captionAnimation, this->textAnimation, captionDx, captionDy, dx, dy);
}

CaptionAnimationHelper* CaptionAnimationHelper_new(Animation* captionAnimation, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy) {
    CaptionAnimationHelper* this = java_object_alloc(sizeof(CaptionAnimationHelper), "CaptionAnimationHelper");
    CaptionAnimationHelper_init(this, captionAnimation, captionDx, captionDy, dx, dy);
    return this;
}


bool CaptionAnimationHelper_isShowing(CaptionAnimationHelper* this) {
        if (this->animation == this->captionAnimation) {
            return true;
        } else {
            return false;
        }
}


void CaptionAnimationHelper_tick(CaptionAnimationHelper* this) {
        if (TimeDelayHelper_isTime(this->timeHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            this->animation = NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
        }
}


void CaptionAnimationHelper_update(CaptionAnimationHelper* this, const char* message, BasicColor* basicColor) {
        Animation_setBasicColorP(this->textAnimation, basicColor);
        TextAnimation_setText(this->textAnimation, message);
        this->animation = this->captionAnimation;
        TimeDelayHelper_setStartTimeTNT(this->timeHelper);
}


void CaptionAnimationHelper_paintXY(CaptionAnimationHelper* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animation, graphics, x, y);
}

