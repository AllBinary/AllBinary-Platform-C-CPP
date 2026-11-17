// Generated Code Do Not Modify
#include "org/allbinary/string/CommonPhoneStrings.h"


static CommonPhoneStrings* CommonPhoneStrings_instance;


void CommonPhoneStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonPhoneStrings_instance = CommonPhoneStrings_new();
}

void CommonPhoneStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonPhoneStrings", nullptr);
}

static void CommonPhoneStrings_initFields(CommonPhoneStrings* this) {
    this->UP = "UP";
    this->DOWN = "DOWN";
    this->LEFT = "LEFT";
    this->RIGHT = "RIGHT";
    this->ZERO = "0";
    this->ONE = "1";
    this->TWO = "2";
    this->THREE = "3";
    this->FOUR = "4";
    this->FIVE = "5";
    this->SIX = "6";
    this->SEVEN = "7";
    this->EIGHT = "8";
    this->NINE = "9";
    this->POUND = "#";
    this->STAR = "*";
    this->FIRE = "FIRE";
}

void CommonPhoneStrings_init(CommonPhoneStrings* this) {
    CommonPhoneStrings_register();
    CommonPhoneStrings_initFields(this);
}

CommonPhoneStrings* CommonPhoneStrings_new(void) {
    CommonPhoneStrings* this = java_object_alloc(sizeof(CommonPhoneStrings), "CommonPhoneStrings");
    CommonPhoneStrings_init(this);
    return this;
}


CommonPhoneStrings* CommonPhoneStrings_getInstance(void) {
        return (CommonPhoneStrings_staticInit(), CommonPhoneStrings_instance);
}

