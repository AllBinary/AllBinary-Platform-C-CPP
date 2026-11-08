#ifndef ANDROID_APP_ACTIVITY_H
#define ANDROID_APP_ACTIVITY_H
#include "android/content/Context.h"
#include <cstdint>
class View;
class Activity : public Context {
public:
    virtual View* findViewById(int32_t) { return nullptr; }
};
#endif
