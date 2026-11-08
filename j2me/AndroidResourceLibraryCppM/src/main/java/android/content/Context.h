#ifndef ANDROID_CONTENT_CONTEXT_H
#define ANDROID_CONTENT_CONTEXT_H
#include "java/lang/Object.h"
#include <string>
class Intent;
class Context : public virtual java::lang::Object {
public:
    inline static const std::string VIBRATOR_SERVICE = "vibrator";
    inline static const std::string ACTIVITY_SERVICE = "activity";
    inline static const std::string NOTIFICATION_SERVICE = "notification";
    virtual java::lang::Object* getSystemService(const std::string&) { return nullptr; }
    virtual void startActivity(Intent*) {}
};
#endif
