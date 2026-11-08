#ifndef ANDROID_APP_PENDINGINTENT_H
#define ANDROID_APP_PENDINGINTENT_H
#include "android/os/Parcelable.h"
class Context;
class Intent;
class PendingIntent : public Parcelable {
public:
    static PendingIntent* getActivity(Context*, int32_t, Intent*, int32_t) { return new PendingIntent(); }
};
#endif
