#ifndef ANDROID_APP_ACTIVITYMANAGER_RUNNINGSERVICEINFO_H
#define ANDROID_APP_ACTIVITYMANAGER_RUNNINGSERVICEINFO_H
#include "java/lang/Object.h"
#include "android/content/ComponentName.h"
class RunningServiceInfo : public virtual java::lang::Object {
public:
    ComponentName* service = nullptr;
};
#endif
