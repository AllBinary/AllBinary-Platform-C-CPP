#ifndef ANDROID_VIEW_VIEW_H
#define ANDROID_VIEW_VIEW_H
#include "java/lang/Object.h"
#include "java/lang/Runnable.h"
#include <cstdint>
class View : public virtual java::lang::Object {
public:
    virtual int32_t getId() { return 0; }
    virtual bool post(Runnable* runnable) { if (runnable) runnable->run(); return true; }
};
#endif
