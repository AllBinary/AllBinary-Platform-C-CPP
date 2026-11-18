// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonFactory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif


static TouchButtonFactory* TouchButtonFactory_SINGLETON;







void TouchButtonFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonFactory_SINGLETON = TouchButtonFactory_new();
}

void TouchButtonFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonFactory", nullptr);
    java_register_method("TouchButtonFactory", "defaultList", (void*) TouchButtonFactory_defaultList);
    java_register_method("TouchButtonFactory", "toggle", (void*) TouchButtonFactory_toggle);
    java_register_method("TouchButtonFactory", "setList", (void*) TouchButtonFactory_setList);
    java_register_method("TouchButtonFactory", "getList", (void*) TouchButtonFactory_getList);
}

static void TouchButtonFactory_initFields(TouchButtonFactory* this) {
    this->LIST = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
    this->list = this->LIST;
    this->savedList = this->LIST;
    this->saved = false;
}


TouchButtonFactory* TouchButtonFactory_getInstance(void) {
        return (TouchButtonFactory_staticInit(), TouchButtonFactory_SINGLETON);
}


void TouchButtonFactory_init(TouchButtonFactory* this) {
    TouchButtonFactory_register();
    TouchButtonFactory_initFields(this);
}

TouchButtonFactory* TouchButtonFactory_new(void) {
    TouchButtonFactory* this = java_object_alloc(sizeof(TouchButtonFactory), "TouchButtonFactory");
    TouchButtonFactory_init(this);
    return this;
}


void TouchButtonFactory_defaultList(TouchButtonFactory* this) {
        this->list = this->LIST;
        TouchButtonFactory_toggle(this, false, this->LIST);
}


// synchronized
void TouchButtonFactory_toggle(TouchButtonFactory* this, bool save, BasicArrayList* list) {
        if (list != BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance())) {
            this->savedList = list;
            if (!this->saved) {
                this->list = this->savedList;
            }
        } else {
            if (save) {
                if (!this->saved) {
                    this->saved = true;
                    this->savedList = this->list;
                    this->list = this->LIST;
                } else {
                }
            } else {
                this->list = this->savedList;
                this->saved = false;
            }
        }
}


// throws Exception
void TouchButtonFactory_setList(TouchButtonFactory* this, BasicArrayList* list) {
        if (list == nullptr) {
            java_throw(java_exception_new("Exception", "Null List"));
        }
        this->list = list;
}


BasicArrayList* TouchButtonFactory_getList(TouchButtonFactory* this) {
        return this->list;
}

