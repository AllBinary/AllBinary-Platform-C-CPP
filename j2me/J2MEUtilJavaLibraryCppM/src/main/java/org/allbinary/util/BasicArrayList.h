
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
        #define ORG_ALLBINARY_UTIL_BASICARRAYLIST_H

            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/IndexOutOfBoundsException.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ArrayUtil.h"
#include "BasicArrayListS.h"
//This is a very fast and simple resizable list.
class BasicArrayList
            : public Object
         {

    private: static const std::string SIZE = ", Size: ";

    private: const ArrayUtil arrayUtil = ArrayUtil::getInstance();

    public: std::vector<Object*> objectArray;

    private: int32_t currentIndex = 0;

public: BasicArrayList(std::vector<Object*> objectArray);

    public: void addAt(int32_t index, Object* element);

    public: bool add(Object* anyType);

    public: Object* removeAt(int32_t index);

    public: bool remove(Object* anyType);

    public: bool removeAll2(BasicArrayList list);

    public: bool addAll2(BasicArrayList list);

    public: bool addAllList(BasicArrayList list);

    public: bool addAll(std::vector<Object*> newObjectArray);

    public: void ensureCapacity(int32_t minSize);

    public: void trimToSize();

    public: int32_t indexOf(Object* anyType);

    public: int32_t lastIndexOf(Object* anyType);

    public: Object* get(int32_t index);

    public: Object* set(int32_t index, Object* element);

    public: void clear();

    public: int32_t size();

    public: bool isEmpty();

    public: bool contains(Object* anyType);

    public: std::vector<Object*> toArray();

    public: std::vector<Object*> toArrayType(std::vector<Object*> objectArray);

    public: Object* clone();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
