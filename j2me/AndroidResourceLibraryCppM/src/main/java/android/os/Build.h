#ifndef ANDROID_OS_BUILD_H
#define ANDROID_OS_BUILD_H
#include "java/lang/Object.h"
#include <cstdint>
#include <string>
class BuildVersion : public virtual java::lang::Object { public: std::string SDK = "1"; };
class Build : public virtual java::lang::Object {
public:
    inline static BuildVersion* VERSION = new BuildVersion();
    inline static std::string BOARD, BRAND, DEVICE, FINGERPRINT, HOST, ID, MODEL, PRODUCT, TAGS, TYPE, USER;
    inline static int64_t TIME = 0;
};
#endif
