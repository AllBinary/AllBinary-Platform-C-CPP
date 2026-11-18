// Generated Code Do Not Modify
#include "org/allbinary/canvas/Processor.h"


static Processor* Processor_SINGLETON;




void Processor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    Processor_SINGLETON = Processor_new();
}

void Processor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("Processor", nullptr);
    java_register_method("Processor", "process", (void*) Processor_process);
    java_register_method("Processor", "processt", (void*) Processor_processt);
}

void Processor_init(Processor* this) {
    Processor_register();
}

Processor* Processor_new(void) {
    Processor* this = java_object_alloc(sizeof(Processor), "Processor");
    Processor_init(this);
    return this;
}


Processor* Processor_getInstance(void) {
        return (Processor_staticInit(), Processor_SINGLETON);
}


// throws Exception
void Processor_process(Processor* this) {
}


// throws Exception
void Processor_processt(Processor* this, int64_t timeDelta) {
}

