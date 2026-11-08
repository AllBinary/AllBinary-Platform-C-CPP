#ifndef ANDROID_CONTENT_INTENT_H
#define ANDROID_CONTENT_INTENT_H
#include "java/lang/Object.h"
#include <string>
class Uri;
class Intent : public virtual java::lang::Object {
public:
    inline static const std::string ACTION_VIEW = "android.intent.action.VIEW";
    Intent(const std::string&, Uri*) {}
};
#endif
