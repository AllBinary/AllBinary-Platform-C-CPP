// Generated Code Do Not Modify
#include "org/allbinary/game/ag/layer/hud/basic/score/ScoreableAddOnlyForHud.h"
#include "org/allbinary/game/ag/layer/hud/basic/score/ScoreHudWidget.h"







void ScoreableAddOnlyForHud_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScoreableAddOnlyForHud_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScoreableAddOnlyForHud", "Scoreable");
    java_register_method("ScoreableAddOnlyForHud", "removePoints", (void*) ScoreableAddOnlyForHud_removePoints);
    java_register_method("ScoreableAddOnlyForHud", "addPoints", (void*) ScoreableAddOnlyForHud_addPoints);
    java_register_method("ScoreableAddOnlyForHud", "getScoreHudWidget", (void*) ScoreableAddOnlyForHud_getScoreHudWidget);
}

static void ScoreableAddOnlyForHud_initFields(ScoreableAddOnlyForHud* this) {
    
}


void ScoreableAddOnlyForHud_init(ScoreableAddOnlyForHud* this, ScoreHudWidget* scoreVectorGraphic) {
    ScoreableAddOnlyForHud_register();
        Scoreable_init(&this->base, 0);
        ScoreableAddOnlyForHud_initFields(this);
        this->scoreHudWidget = scoreVectorGraphic;
        NumberStringHud_set(ScoreableAddOnlyForHud_getScoreHudWidget(this), 0);
}

ScoreableAddOnlyForHud* ScoreableAddOnlyForHud_new(ScoreHudWidget* scoreVectorGraphic) {
    ScoreableAddOnlyForHud* this = java_object_alloc(sizeof(ScoreableAddOnlyForHud), "ScoreableAddOnlyForHud");
    ScoreableAddOnlyForHud_init(this, scoreVectorGraphic);
    return this;
}


void ScoreableAddOnlyForHud_removePoints(ScoreableAddOnlyForHud* this, int32_t points) {
}


void ScoreableAddOnlyForHud_addPoints(ScoreableAddOnlyForHud* this, int32_t points) {
        Scoreable_addPoints((&this->base), points);
        NumberStringHud_add(ScoreableAddOnlyForHud_getScoreHudWidget(this), points);
}


ScoreHudWidget* ScoreableAddOnlyForHud_getScoreHudWidget(ScoreableAddOnlyForHud* this) {
        return this->scoreHudWidget;
}

