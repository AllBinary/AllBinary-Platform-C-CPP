// Generated Code Do Not Modify
#include "org/allbinary/input/motion/gesture/configuration/MotionGestureConfiguration.h"
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureToMotionGestureActionAssociation.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif





















void MotionGestureConfiguration_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void MotionGestureConfiguration_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MotionGestureConfiguration", nullptr);
    java_register_method("MotionGestureConfiguration", "addMotionGestureAction", (void*) MotionGestureConfiguration_addMotionGestureAction);
    java_register_method("MotionGestureConfiguration", "clearMotionGestureAction", (void*) MotionGestureConfiguration_clearMotionGestureAction);
    java_register_method("MotionGestureConfiguration", "getAssociateCommandActionsList", (void*) MotionGestureConfiguration_getAssociateCommandActionsList);
    java_register_method("MotionGestureConfiguration", "isDiagonalMotionGestureAllowed", (void*) MotionGestureConfiguration_isDiagonalMotionGestureAllowed);
    java_register_method("MotionGestureConfiguration", "isExecutingActionsAllowed", (void*) MotionGestureConfiguration_isExecutingActionsAllowed);
    java_register_method("MotionGestureConfiguration", "setExecutingActionsAllowed", (void*) MotionGestureConfiguration_setExecutingActionsAllowed);
    java_register_method("MotionGestureConfiguration", "setDiagonalMotionGestureAllowed", (void*) MotionGestureConfiguration_setDiagonalMotionGestureAllowed);
    java_register_method("MotionGestureConfiguration", "getDiagonalTolerance", (void*) MotionGestureConfiguration_getDiagonalTolerance);
    java_register_method("MotionGestureConfiguration", "setDiagonalTolerance", (void*) MotionGestureConfiguration_setDiagonalTolerance);
    java_register_method("MotionGestureConfiguration", "getMinimumMotionGesture", (void*) MotionGestureConfiguration_getMinimumMotionGesture);
    java_register_method("MotionGestureConfiguration", "setMinimumMotionGesture", (void*) MotionGestureConfiguration_setMinimumMotionGesture);
    java_register_method("MotionGestureConfiguration", "getButton", (void*) MotionGestureConfiguration_getButton);
    java_register_method("MotionGestureConfiguration", "setButton", (void*) MotionGestureConfiguration_setButton);
    java_register_method("MotionGestureConfiguration", "getColor", (void*) MotionGestureConfiguration_getColor);
    java_register_method("MotionGestureConfiguration", "setColor", (void*) MotionGestureConfiguration_setColor);
    java_register_method("MotionGestureConfiguration", "getMouseButtonMask", (void*) MotionGestureConfiguration_getMouseButtonMask);
    java_register_method("MotionGestureConfiguration", "setMouseButtonMask", (void*) MotionGestureConfiguration_setMouseButtonMask);
}

static void MotionGestureConfiguration_initFields(MotionGestureConfiguration* this) {
    this->diagonalMotionGestureAllowed = true;
    this->diagonalTolerance = 7;
    this->minimumMotionGesture = 9;
    this->button = StringUtil_getInstance()->EMPTY_STRING;
    this->color = BasicColorFactory_getInstance()->BLUE;
    this->executingActions = true;
    this->mouseButtonMask = 0;
    this->activeCommands = BasicArrayListD_new();
}


void MotionGestureConfiguration_init(MotionGestureConfiguration* this) {
    MotionGestureConfiguration_register();
    MotionGestureConfiguration_initFields(this);
}

MotionGestureConfiguration* MotionGestureConfiguration_new(void) {
    MotionGestureConfiguration* this = java_object_alloc(sizeof(MotionGestureConfiguration), "MotionGestureConfiguration");
    MotionGestureConfiguration_init(this);
    return this;
}


void MotionGestureConfiguration_addMotionGestureAction(MotionGestureConfiguration* this, BasicArrayList* list, CompleteMotionGestureInputEvent* commandAction) {
        BasicArrayList_add(this->activeCommands, MotionGestureToMotionGestureActionAssociation_new(list, commandAction));
}


void MotionGestureConfiguration_clearMotionGestureAction(MotionGestureConfiguration* this) {
        BasicArrayList_clear(this->activeCommands);
}


BasicArrayList* MotionGestureConfiguration_getAssociateCommandActionsList(MotionGestureConfiguration* this) {
        return this->activeCommands;
}


bool MotionGestureConfiguration_isDiagonalMotionGestureAllowed(MotionGestureConfiguration* this) {
        return this->diagonalMotionGestureAllowed;
}


bool MotionGestureConfiguration_isExecutingActionsAllowed(MotionGestureConfiguration* this) {
        return this->executingActions;
}


void MotionGestureConfiguration_setExecutingActionsAllowed(MotionGestureConfiguration* this, bool executingActionAllowed) {
        this->executingActions = executingActionAllowed;
}


void MotionGestureConfiguration_setDiagonalMotionGestureAllowed(MotionGestureConfiguration* this, bool diagonalMotionGestureAllowed) {
        this->diagonalMotionGestureAllowed = diagonalMotionGestureAllowed;
}


int32_t MotionGestureConfiguration_getDiagonalTolerance(MotionGestureConfiguration* this) {
        return this->diagonalTolerance;
}


void MotionGestureConfiguration_setDiagonalTolerance(MotionGestureConfiguration* this, int32_t diagonalTolerance) {
        this->diagonalTolerance = diagonalTolerance;
}


int32_t MotionGestureConfiguration_getMinimumMotionGesture(MotionGestureConfiguration* this) {
        return this->minimumMotionGesture;
}


void MotionGestureConfiguration_setMinimumMotionGesture(MotionGestureConfiguration* this, int32_t minimumMotionGesture) {
        this->minimumMotionGesture = minimumMotionGesture;
}


const char* MotionGestureConfiguration_getButton(MotionGestureConfiguration* this) {
        return this->button;
}


void MotionGestureConfiguration_setButton(MotionGestureConfiguration* this, const char* button) {
        this->button = button;
}


BasicColor* MotionGestureConfiguration_getColor(MotionGestureConfiguration* this) {
        return this->color;
}


void MotionGestureConfiguration_setColor(MotionGestureConfiguration* this, BasicColor* color) {
        this->color = color;
}


int32_t MotionGestureConfiguration_getMouseButtonMask(MotionGestureConfiguration* this) {
        return this->mouseButtonMask;
}


void MotionGestureConfiguration_setMouseButtonMask(MotionGestureConfiguration* this, int32_t mouseButtonMask) {
        this->mouseButtonMask = mouseButtonMask;
}

