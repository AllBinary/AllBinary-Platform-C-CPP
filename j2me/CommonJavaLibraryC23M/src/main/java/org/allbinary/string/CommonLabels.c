// Generated Code Do Not Modify
#include "org/allbinary/string/CommonLabels.h"


static CommonLabels* CommonLabels_instance;


void CommonLabels_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonLabels_instance = CommonLabels_new();
}

void CommonLabels_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonLabels", nullptr);
}

static void CommonLabels_initFields(CommonLabels* this) {
    this->WIDTH_LABEL = " Width: ";
    this->HEIGHT_LABEL = " Height: ";
    this->END_LABEL = "End: ";
    this->TOTAL_LABEL = "Total: ";
    this->INDEX_LABEL = "index: ";
    this->START_LABEL = "Start: ";
    this->COMMAND_LABEL = "Command: ";
    this->NAME_LABEL = "Name: ";
    this->START = this->START_LABEL;
    this->ELAPSED = " Elapsed: ";
    this->CURRENT = " Current: ";
    this->NEXT = "Next";
    this->ITEM_LABEL = "Item: ";
    this->RESULT_ = "Result: ";
    this->COLON_SEP = ": ";
}

void CommonLabels_init(CommonLabels* this) {
    CommonLabels_register();
    CommonLabels_initFields(this);
}

CommonLabels* CommonLabels_new(void) {
    CommonLabels* this = java_object_alloc(sizeof(CommonLabels), "CommonLabels");
    CommonLabels_init(this);
    return this;
}


CommonLabels* CommonLabels_getInstance(void) {
        return (CommonLabels_staticInit(), CommonLabels_instance);
}

