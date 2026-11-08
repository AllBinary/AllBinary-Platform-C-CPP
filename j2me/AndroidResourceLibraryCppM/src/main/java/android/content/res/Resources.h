#ifndef ANDROID_CONTENT_RES_RESOURCES_H
#define ANDROID_CONTENT_RES_RESOURCES_H
#include "java/lang/Object.h"
#include "java/io/InputStream.h"
#include <cstdint>
class Resources : public virtual java::lang::Object {
public:
    virtual InputStream* openRawResource(int32_t) { return nullptr; }
};
#endif
