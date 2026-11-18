// Generated Code Do Not Modify
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/ArrayUtil.h"
#include "org/allbinary/util/BasicArrayListS.h"
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/util/Any.h")
#include "org/allbinary/util/Any.h"
#endif
#if __has_include("jsinterop/annotations/Any.h")
#include "jsinterop/annotations/Any.h"
#endif
#if __has_include("org/allbinary/logic/string/Any.h")
#include "org/allbinary/logic/string/Any.h"
#endif
#if __has_include("org/allbinary/string/Any.h")
#include "org/allbinary/string/Any.h"
#endif
#if __has_include("org/allbinary/string/Any.h")
#include "org/allbinary/string/Any.h"
#endif
#if __has_include("jsinterop/annotations/Any.h")
#include "jsinterop/annotations/Any.h"
#endif
#if __has_include("jsinterop/annotations/Any.h")
#include "jsinterop/annotations/Any.h"
#endif
#if __has_include("jsinterop/annotations/Any.h")
#include "jsinterop/annotations/Any.h"
#endif


static const char* BasicArrayList_SIZE = ", Size: ";
























void BasicArrayList_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayList_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayList", nullptr);
    java_register_method("BasicArrayList", "addAt", (void*) BasicArrayList_addAt);
    java_register_method("BasicArrayList", "add", (void*) BasicArrayList_add);
    java_register_method("BasicArrayList", "removeAt", (void*) BasicArrayList_removeAt);
    java_register_method("BasicArrayList", "remove", (void*) BasicArrayList_remove);
    java_register_method("BasicArrayList", "removeAll2", (void*) BasicArrayList_removeAll2);
    java_register_method("BasicArrayList", "addAll2", (void*) BasicArrayList_addAll2);
    java_register_method("BasicArrayList", "addAllList", (void*) BasicArrayList_addAllList);
    java_register_method("BasicArrayList", "addAll", (void*) BasicArrayList_addAll);
    java_register_method("BasicArrayList", "ensureCapacity", (void*) BasicArrayList_ensureCapacity);
    java_register_method("BasicArrayList", "trimToSize", (void*) BasicArrayList_trimToSize);
    java_register_method("BasicArrayList", "indexOf", (void*) BasicArrayList_indexOf);
    java_register_method("BasicArrayList", "lastIndexOf", (void*) BasicArrayList_lastIndexOf);
    java_register_method("BasicArrayList", "get", (void*) BasicArrayList_get);
    java_register_method("BasicArrayList", "set", (void*) BasicArrayList_set);
    java_register_method("BasicArrayList", "clear", (void*) BasicArrayList_clear);
    java_register_method("BasicArrayList", "size", (void*) BasicArrayList_size);
    java_register_method("BasicArrayList", "isEmpty", (void*) BasicArrayList_isEmpty);
    java_register_method("BasicArrayList", "contains", (void*) BasicArrayList_contains);
    java_register_method("BasicArrayList", "toArray", (void*) BasicArrayList_toArray);
    java_register_method("BasicArrayList", "toArrayType", (void*) BasicArrayList_toArrayType);
    java_register_method("BasicArrayList", "clone", (void*) BasicArrayList_clone);
    java_register_method("BasicArrayList", "toString", (void*) BasicArrayList_toString);
}

static void BasicArrayList_initFields(BasicArrayList* this) {
    this->arrayUtil = ArrayUtil_getInstance();
    
    this->currentIndex = 0;
}


void BasicArrayList_init(BasicArrayList* this, void** objectArray) {
    BasicArrayList_register();
    BasicArrayList_initFields(this);
        this->objectArray = objectArray;
}

BasicArrayList* BasicArrayList_new(void** objectArray) {
    BasicArrayList* this = java_object_alloc(sizeof(BasicArrayList), "BasicArrayList");
    BasicArrayList_init(this, objectArray);
    return this;
}


void BasicArrayList_addAt(BasicArrayList* this, int32_t index, void* element) {
        if (index > this->currentIndex || index < 0) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->INDEX_LABEL);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, BasicArrayList_SIZE);
            StringMaker_appendint(stringBuffer, this->currentIndex);
            java_throw(java_exception_new("IndexOutOfBoundsException", java_string_of(stringBuffer)));
        }
        BasicArrayList_ensureCapacity(this, this->currentIndex + 1);
        java_array_copy(this->objectArray, index, this->objectArray, index + 1, this->currentIndex - index);
        this->objectArray[index] = element;
        this->currentIndex++;
}


bool BasicArrayList_add(BasicArrayList* this, void* anyType) {
        BasicArrayList_ensureCapacity(this, this->currentIndex + 1);
        this->objectArray[this->currentIndex++] = anyType;
        return true;
}


void* BasicArrayList_removeAt(BasicArrayList* this, int32_t index) {
        if (index >= this->currentIndex) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->INDEX_LABEL);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, BasicArrayList_SIZE);
            StringMaker_appendint(stringBuffer, this->currentIndex);
            java_throw(java_exception_new("IndexOutOfBoundsException", java_string_of(stringBuffer)));
        }
        void* oldValue = this->objectArray[index];
        int32_t numMoved = this->currentIndex - index - 1;
        if (numMoved > 0) {
            java_array_copy(this->objectArray, index + 1, this->objectArray, index, numMoved);
        }
        this->objectArray[--this->currentIndex] = nullptr;
        return oldValue;
}


bool BasicArrayList_remove(BasicArrayList* this, void* anyType) {
        if (anyType == nullptr) {
            for (int32_t index = 0; index < this->currentIndex; index++) {
                if (this->objectArray[index] == nullptr) {
                    int32_t numMoved = this->currentIndex - index - 1;
                    if (numMoved > 0) {
                        java_array_copy(this->objectArray, index + 1, this->objectArray, index, numMoved);
                    }
                    this->objectArray[--this->currentIndex] = nullptr;
                    return true;
                }
            }
        } else {
            for (int32_t index = 0; index < this->currentIndex; index++) {
                if (anyType == this->objectArray[index] || (anyType == this->objectArray[index])) {
                    int32_t numMoved = this->currentIndex - index - 1;
                    if (numMoved > 0) {
                        java_array_copy(this->objectArray, index + 1, this->objectArray, index, numMoved);
                    }
                    this->objectArray[--this->currentIndex] = nullptr;
                    return true;
                }
            }
        }
        return false;
}


bool BasicArrayList_removeAll2(BasicArrayList* this, BasicArrayList* list) {
        bool result = true;
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            if (BasicArrayList_remove(this, BasicArrayList_get(list, index))) {
            } else {
                result = false;
            }
        }
        return result;
}


bool BasicArrayList_addAll2(BasicArrayList* this, BasicArrayList* list) {
        BasicArrayList_ensureCapacity(this, this->currentIndex + list->currentIndex);
        int32_t listSize = list->currentIndex;
        for (int32_t index = 0; index < listSize; index++) {
            this->objectArray[this->currentIndex++] = list->objectArray[index];
        }
        return true;
}


bool BasicArrayList_addAllList(BasicArrayList* this, BasicArrayList* list) {
        void** newObjectArray = BasicArrayList_toArray(list);
        return BasicArrayList_addAll(this, newObjectArray);
}


bool BasicArrayList_addAll(BasicArrayList* this, void** newObjectArray) {
        int32_t numSize = java_array_length(newObjectArray);
        BasicArrayList_ensureCapacity(this, this->currentIndex + numSize);
        java_array_copy(newObjectArray, 0, this->objectArray, this->currentIndex, numSize);
        this->currentIndex += numSize;
        return numSize != 0;
}


void BasicArrayList_ensureCapacity(BasicArrayList* this, int32_t minSize) {
        int32_t oldCapacity = java_array_length(this->objectArray);
        if (minSize > oldCapacity) {
            int32_t newCapacity = ((oldCapacity * 3) >> 1) + 1;
            if (newCapacity < minSize) {
                newCapacity = minSize;
            }
            this->objectArray = ArrayUtil_copyOf(this->arrayUtil, this->objectArray, newCapacity);
        }
}


void BasicArrayList_trimToSize(BasicArrayList* this) {
        int32_t oldCapacity = java_array_length(this->objectArray);
        if (this->currentIndex < oldCapacity) {
            this->objectArray = ArrayUtil_copyOf(this->arrayUtil, this->objectArray, this->currentIndex);
        }
}


int32_t BasicArrayList_indexOf(BasicArrayList* this, void* anyType) {
        if (anyType == nullptr) {
            for (int32_t i = 0; i < this->currentIndex; i++) {
                if (this->objectArray[i] == nullptr) {
                    return i;
                }
            }
        } else {
            for (int32_t i = 0; i < this->currentIndex; i++) {
                if ((anyType == this->objectArray[i])) {
                    return i;
                }
            }
        }
        return -1;
}


int32_t BasicArrayList_lastIndexOf(BasicArrayList* this, void* anyType) {
        if (anyType == nullptr) {
            for (int32_t i = this->currentIndex - 1; i >= 0; i--) {
                if (this->objectArray[i] == nullptr) {
                    return i;
                }
            }
        } else {
            for (int32_t i = this->currentIndex - 1; i >= 0; i--) {
                if ((anyType == this->objectArray[i])) {
                    return i;
                }
            }
        }
        return -1;
}


void* BasicArrayList_get(BasicArrayList* this, int32_t index) {
        if (index >= this->currentIndex) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->INDEX_LABEL);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, BasicArrayList_SIZE);
            StringMaker_appendint(stringBuffer, this->currentIndex);
            java_throw(java_exception_new("IndexOutOfBoundsException", java_string_of(stringBuffer)));
        }
        return this->objectArray[index];
}


void* BasicArrayList_set(BasicArrayList* this, int32_t index, void* element) {
        if (index >= this->currentIndex) {
            StringMaker* stringBuffer = StringMaker_new();
            StringMaker_append(stringBuffer, CommonLabels_getInstance()->INDEX_LABEL);
            StringMaker_appendint(stringBuffer, index);
            StringMaker_append(stringBuffer, BasicArrayList_SIZE);
            StringMaker_appendint(stringBuffer, this->currentIndex);
            java_throw(java_exception_new("IndexOutOfBoundsException", java_string_of(stringBuffer)));
        }
        void* oldValue = this->objectArray[index];
        this->objectArray[index] = element;
        return oldValue;
}


void BasicArrayList_clear(BasicArrayList* this) {
        for (int32_t i = 0; i < this->currentIndex; i++) {
            this->objectArray[i] = nullptr;
        }
        this->currentIndex = 0;
}


int32_t BasicArrayList_size(BasicArrayList* this) {
        return this->currentIndex;
}


bool BasicArrayList_isEmpty(BasicArrayList* this) {
        return this->currentIndex == 0;
}


bool BasicArrayList_contains(BasicArrayList* this, void* anyType) {
        return BasicArrayList_indexOf(this, anyType) >= 0;
}


void** BasicArrayList_toArray(BasicArrayList* this) {
        return ArrayUtil_copyOf(this->arrayUtil, this->objectArray, this->currentIndex);
}


void** BasicArrayList_toArrayType(BasicArrayList* this, void** objectArray) {
        if (java_array_length(objectArray) < this->currentIndex) {
            return ArrayUtil_copyOfType(this->arrayUtil, this->objectArray, this->currentIndex, java_class_of(objectArray));
        }
        java_array_copy(this->objectArray, 0, objectArray, 0, this->currentIndex);
        if (java_array_length(objectArray) > this->currentIndex) {
            objectArray[this->currentIndex] = nullptr;
        }
        return objectArray;
}


void* BasicArrayList_clone(BasicArrayList* this) {
        int32_t size = BasicArrayList_size(this);
        BasicArrayList* list = BasicArrayListS_new(size);
        void* anyType = nullptr;
        for (int32_t index = 0; index < size; index++) {
            anyType = this->objectArray[index];
            BasicArrayList_add(list, anyType);
        }
        return list;
}


const char* BasicArrayList_toString(BasicArrayList* this) {
        const char* COMMA_SEP = CommonSeps_getInstance()->COMMA_SEP;
        StringMaker* stringBuffer = StringMaker_new();
        for (int32_t index = 0; index < this->currentIndex; index++) {
            StringMaker_append(stringBuffer, java_string_of(this->objectArray[index]));
            StringMaker_append(stringBuffer, COMMA_SEP);
        }
        return java_string_of(stringBuffer);
}

