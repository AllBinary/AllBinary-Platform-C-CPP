// Generated Code Do Not Modify
#include "org/allbinary/game/displayable/canvas/PopupCommandFormInputProcessor.h"
#include "org/allbinary/graphics/displayable/MyCanvas.h"
#include "org/allbinary/graphics/form/ScrollSelectionForm.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/displayable/canvas/CommandFormInputProcessor.h"
#include "org/allbinary/game/displayable/canvas/PopupMenuInputProcessor.h"






void PopupCommandFormInputProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PopupCommandFormInputProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PopupCommandFormInputProcessor", "CommandFormInputProcessor");
    java_register_method("PopupCommandFormInputProcessor", "processInput", (void*) PopupCommandFormInputProcessor_processInput);
    java_register_method("PopupCommandFormInputProcessor", "processMotionInput", (void*) PopupCommandFormInputProcessor_processMotionInput);
}


void PopupCommandFormInputProcessor_init(PopupCommandFormInputProcessor* this, BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor) {
    PopupCommandFormInputProcessor_register();
        CommandFormInputProcessor_init(&this->base, gameKeyEventList, playerInputId, gameCanvas, form);
}

PopupCommandFormInputProcessor* PopupCommandFormInputProcessor_new(BasicArrayList* gameKeyEventList, int32_t playerInputId, MyCanvas* gameCanvas, ScrollSelectionForm* form, PopupMenuInputProcessor* popupMenuInputProcessor) {
    PopupCommandFormInputProcessor* this = java_object_alloc(sizeof(PopupCommandFormInputProcessor), "PopupCommandFormInputProcessor");
    PopupCommandFormInputProcessor_init(this, gameKeyEventList, playerInputId, gameCanvas, form, popupMenuInputProcessor);
    return this;
}


// throws Exception
int32_t PopupCommandFormInputProcessor_processInput(PopupCommandFormInputProcessor* this, int32_t key) {
        return CommandFormInputProcessor_processInput((&this->base), key);
}


// throws Exception
void PopupCommandFormInputProcessor_processMotionInput(PopupCommandFormInputProcessor* this, MotionGestureEvent* motionGestureEvent) {
        CommandFormInputProcessor_processMotionInput((&this->base), motionGestureEvent);
}

