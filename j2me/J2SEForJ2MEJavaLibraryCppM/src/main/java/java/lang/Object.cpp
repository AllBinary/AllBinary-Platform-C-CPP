#include "Object.h"

namespace java {
namespace lang {

Object::Object() {
}

Object::~Object() {
}

bool Object::equals(Object* obj) {
    return this == obj;
}

int Object::hashCode() {
    return 0;
}

const char* Object::toString() {
    return "java.lang.Object";
}

} // namespace lang
} // namespace java
