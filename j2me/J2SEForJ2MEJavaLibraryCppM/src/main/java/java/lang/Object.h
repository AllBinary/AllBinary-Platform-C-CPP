#ifndef JAVA_LANG_OBJECT_H
#define JAVA_LANG_OBJECT_H

namespace java {
namespace lang {

class Object {
public:
    Object();
    virtual ~Object();

    virtual bool equals(Object* obj);
    virtual int hashCode();
    virtual const char* toString();
};

} // namespace lang
} // namespace java

#endif // JAVA_LANG_OBJECT_H
