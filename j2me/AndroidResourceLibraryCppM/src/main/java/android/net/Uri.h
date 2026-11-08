#ifndef ANDROID_NET_URI_H
#define ANDROID_NET_URI_H
#include "java/lang/Object.h"
#include <string>
class Uri : public virtual java::lang::Object {
public:
    static Uri* parse(const std::string&) { return new Uri(); }
};
#endif
