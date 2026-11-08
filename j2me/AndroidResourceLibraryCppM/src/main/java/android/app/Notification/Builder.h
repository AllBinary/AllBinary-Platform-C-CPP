#ifndef ANDROID_APP_NOTIFICATION_BUILDER_H
#define ANDROID_APP_NOTIFICATION_BUILDER_H
#include "java/lang/Object.h"
#include "android/app/Notification.h"
#include <cstdint>
#include <string>
class Context;
class PendingIntent;
class Builder : public virtual java::lang::Object {
public:
    explicit Builder(Context*) {}
    Builder* setSmallIcon(int32_t) { return this; }
    Builder* setTicker(const std::string&) { return this; }
    Builder* setWhen(int64_t) { return this; }
    Builder* setContentTitle(const std::string&) { return this; }
    Builder* setContentText(const std::string&) { return this; }
    Builder* setContentIntent(PendingIntent*) { return this; }
    Notification* build() { return new Notification(); }
};
#endif
