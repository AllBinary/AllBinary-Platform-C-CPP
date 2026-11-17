// Generated Code Do Not Modify
#include "org/allbinary/string/CommonStrings.h"


static CommonStrings* CommonStrings_instance;


void CommonStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CommonStrings_instance = CommonStrings_new();
}

void CommonStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CommonStrings", nullptr);
}

static void CommonStrings_initFields(CommonStrings* this) {
    this->EMPTY = "Empty";
    this->CREATE_IMAGE = "createImage";
    this->PLEASE_WAIT = "Please Wait";
    this->PLEASE_WAIT_FOR_SERVER = "Please Wait Getting Data From Server...";
    this->PERIODS = "...";
    this->LOADING = "Loading...";
    this->CONSTRUCTOR = "Constructor";
    this->START = "Start";
    this->END = "End";
    this->EXCEPTION = "Exception";
    this->EXCEPTION_LABEL = "Exception: ";
    this->CLEANUP = "cleanup";
    this->INIT = "init";
    this->CLOSE = "close";
    this->UP = "up";
    this->DOWN = "down";
    this->LEFT = "left";
    this->RIGHT = "right";
    this->DIRECTION_NAME = ((const char**) java_array_from(sizeof(const char*), sizeof((const char*[]){ this->DOWN, this->LEFT, this->RIGHT, this->UP }) / sizeof(const char*), (const char*[]){ this->DOWN, this->LEFT, this->RIGHT, this->UP }));
    this->CREATE = "Create";
    this->REMOVE = "Remove";
    this->UPDATE = "Update";
    this->DELETE = "Delete";
    this->delete = "delete";
    this->LOAD = "load";
    this->SAVE = "save";
    this->ADD = "Add";
    this->DROP = "Drop";
    this->INSERT = "Insert";
    this->VISIT = "visit";
    this->START_METHOD_NAME = this->START;
    this->END_METHOD_NAME = "end";
    this->GET = "get";
    this->PROCESS = "process";
    this->GET_INSTANCE = "getInstance";
    this->GET_LIST = "getList";
    this->RUN = "run";
    this->START_RUNNABLE = "Start Runnable";
    this->RUNNING = "Running";
    this->END_RUNNABLE = "End Runnable";
    this->DISABLE = "disable";
    this->ENABLE = "enable";
    this->SUCCESS = "Command Success";
    this->FAILURE = "Command Failed";
    this->NOT_IMPLEMENTED = "Not Implemented";
    this->UNKNOWN = "Unknown";
    this->ON_EVENT = "onEvent";
    this->IS_VALID = "isValid";
    this->TOSTRING = "toString";
    this->ADD_LISTENER = "addListener";
    this->REMOVE_LISTENER = "removeListener";
    this->SIZE = "size";
}

void CommonStrings_init(CommonStrings* this) {
    CommonStrings_register();
    CommonStrings_initFields(this);
}

CommonStrings* CommonStrings_new(void) {
    CommonStrings* this = java_object_alloc(sizeof(CommonStrings), "CommonStrings");
    CommonStrings_init(this);
    return this;
}


CommonStrings* CommonStrings_getInstance(void) {
        return (CommonStrings_staticInit(), CommonStrings_instance);
}

