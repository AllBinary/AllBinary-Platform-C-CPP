#ifndef ANDROID_APP_ACTIVITYMANAGER_H
#define ANDROID_APP_ACTIVITYMANAGER_H
#include "java/lang/Object.h"
#include "java/util/List.h"
#include "android/app/ActivityManager/RunningServiceInfo.h"
#include <cstdint>
class ActivityManager : public virtual java::lang::Object {
public:
    virtual List<RunningServiceInfo*>* getRunningServices(int32_t) {
        static List<RunningServiceInfo*> value;
        return &value;
    }
};
#endif
