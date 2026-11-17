// Generated Code Do Not Modify
#include "org/allbinary/logic/math/MathData.h"
#include "org/allbinary/string/CommonPhoneStrings.h"
#include "org/allbinary/string/CommonSeps.h"


static MathData* MathData_instance;



void MathData_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    MathData_instance = MathData_new();
}

void MathData_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("MathData", nullptr);
}

static void MathData_initFields(MathData* this) {
    
    this->PLUS = "+";
    this->GREATER_THAN = ">";
    
    
    
}


MathData* MathData_getInstance(void) {
        return (MathData_staticInit(), MathData_instance);
}


void MathData_init(MathData* this) {
    MathData_register();
    MathData_initFields(this);
        CommonSeps* commonSeps = CommonSeps_getInstance();
        this->EQUALS = commonSeps->EQUALS;
        this->MINUS = commonSeps->DASH;
        this->DIVIDE = commonSeps->FORWARD_SLASH;
        this->MULTIPLY = CommonPhoneStrings_getInstance()->STAR;
}

MathData* MathData_new(void) {
    MathData* this = java_object_alloc(sizeof(MathData), "MathData");
    MathData_init(this);
    return this;
}

