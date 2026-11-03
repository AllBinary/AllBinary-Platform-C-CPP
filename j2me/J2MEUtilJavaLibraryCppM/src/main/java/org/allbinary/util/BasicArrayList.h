
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
        #define ORG_ALLBINARY_UTIL_BASICARRAYLIST_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/IndexOutOfBoundsException.h"
        
            #include "java/lang/System.h"
        
class JsType;
class StringMaker;
class CommonLabels;
class CommonSeps;
class JsMethod;
class JsConstructor;
class JsProperty;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ArrayUtil;
class BasicArrayListS;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //This is a very fast and simple resizable list.
class BasicArrayList
            : public virtual Object
         {

    private: static inline const std::string SIZE = ", Size: ";

    private: ArrayUtil* arrayUtil;

    public: std::vector<Object*> objectArray;

    private: int32_t currentIndex = 0;

public: BasicArrayList(std::vector<Object*> objectArray);

    public: void addAt(int32_t index, Object* element);
    public: void addAt(int32_t index, const std::string& element) { return addAt(index, JavaString::box(element)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addAt(int32_t index, BoxValue element) { return addAt(index, JavaBoxes::toObject(element)); }
    public: template<typename BoxElement> void addAt(int32_t index, const std::vector<BoxElement>& element) { return addAt(index, JavaBoxes::toObject(element)); }

    public: bool add(Object* anyType);
    public: bool add(const std::string& anyType) { return add(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool add(BoxValue anyType) { return add(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> bool add(const std::vector<BoxElement>& anyType) { return add(JavaBoxes::toObject(anyType)); }

    public: Object* removeAt(int32_t index);

    public: bool remove(Object* anyType);
    public: bool remove(const std::string& anyType) { return remove(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool remove(BoxValue anyType) { return remove(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> bool remove(const std::vector<BoxElement>& anyType) { return remove(JavaBoxes::toObject(anyType)); }

    public: bool removeAll2(BasicArrayList* list);

    public: bool addAll2(BasicArrayList* list);

    public: bool addAllList(BasicArrayList* list);

    public: bool addAll(std::vector<Object*> newObjectArray);

    public: void ensureCapacity(int32_t minSize);

    public: void trimToSize();

    public: int32_t indexOf(Object* anyType);
    public: int32_t indexOf(const std::string& anyType) { return indexOf(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t indexOf(BoxValue anyType) { return indexOf(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> int32_t indexOf(const std::vector<BoxElement>& anyType) { return indexOf(JavaBoxes::toObject(anyType)); }

    public: int32_t lastIndexOf(Object* anyType);
    public: int32_t lastIndexOf(const std::string& anyType) { return lastIndexOf(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t lastIndexOf(BoxValue anyType) { return lastIndexOf(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> int32_t lastIndexOf(const std::vector<BoxElement>& anyType) { return lastIndexOf(JavaBoxes::toObject(anyType)); }

    public: Object* get(int32_t index);

    public: Object* set(int32_t index, Object* element);
    public: Object* set(int32_t index, const std::string& element) { return set(index, JavaString::box(element)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Object* set(int32_t index, BoxValue element) { return set(index, JavaBoxes::toObject(element)); }
    public: template<typename BoxElement> Object* set(int32_t index, const std::vector<BoxElement>& element) { return set(index, JavaBoxes::toObject(element)); }

    public: void clear();

    public: int32_t size();

    public: bool isEmpty();

    public: bool contains(Object* anyType);
    public: bool contains(const std::string& anyType) { return contains(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool contains(BoxValue anyType) { return contains(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> bool contains(const std::vector<BoxElement>& anyType) { return contains(JavaBoxes::toObject(anyType)); }

    public: std::vector<Object*> toArray();

    public: std::vector<Object*> toArrayType(std::vector<Object*> objectArray);

    public: Object* clone();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLIST_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_BASICARRAYLIST_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_BASICARRAYLIST_H_COMPLETE
        #if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<jsinterop/annotations/JsMethod.h>)
#include <jsinterop/annotations/JsMethod.h>
#endif
#if __has_include(<jsinterop/annotations/JsConstructor.h>)
#include <jsinterop/annotations/JsConstructor.h>
#endif
#if __has_include(<jsinterop/annotations/JsProperty.h>)
#include <jsinterop/annotations/JsProperty.h>
#endif
#if __has_include("org/allbinary/util/ArrayUtil.h")
#include "org/allbinary/util/ArrayUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListS.h")
#include "org/allbinary/util/BasicArrayListS.h"
#endif

        #endif
    
