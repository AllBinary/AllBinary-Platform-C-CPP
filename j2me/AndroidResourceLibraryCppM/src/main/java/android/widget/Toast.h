#ifndef ANDROID_WIDGET_TOAST_H
#define ANDROID_WIDGET_TOAST_H
#include "java/lang/Object.h"
#include <cstdint>
#include <string>
class Context;
class Toast : public virtual java::lang::Object {
public:
    static Toast* makeText(Context*, const std::string&, int32_t) { static Toast value; return &value; }
    virtual void show() {}
};
#endif
