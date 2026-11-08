#ifndef ANDROID_OS_VIBRATOR_H
#define ANDROID_OS_VIBRATOR_H
#include "java/lang/Object.h"
#include <cstdint>
class Vibrator : public virtual java::lang::Object {
public:
    virtual void vibrate(int64_t) {}
};
#endif
