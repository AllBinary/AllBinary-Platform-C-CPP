
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
        #define ORG_ALLBINARY_UTIL_BASICARRAYLIST_H

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
        

    private: static const SIZE: string = ", Size: ";

    private: const arrayUtil: ArrayUtil = ArrayUtil.getInstance()!;

    public objectArray: std::vector<any>;

    private: currentIndex: int32_t = 0;

public constructor (std::vector<any> objectArray);

    public addAt(int32_t index, any = {} element);

    public bool add(any = {} anyType);

    public any removeAt(int32_t index);

    public bool remove(any = {} anyType);

    public bool removeAll2(BasicArrayList list);

    public bool addAll2(BasicArrayList list);

    public bool addAllList(BasicArrayList list);

    public bool addAll(std::vector<any> newObjectArray);

    public ensureCapacity(int32_t minSize);

    public trimToSize();

    public int32_t indexOf(any = {} anyType);

    public int32_t lastIndexOf(any = {} anyType);

    public any get(int32_t index);

    public any set(int32_t index, any = {} element);

    public clear();

    public int32_t size();

    public bool isEmpty();

    public bool contains(any = {} anyType);

    public std::vector<any> toArray();

    public std::vector<any> toArrayType(std::vector<any> objectArray);

    public any clone();

    public string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLIST_H
