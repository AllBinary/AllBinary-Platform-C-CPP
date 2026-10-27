
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
                *   
                *  By agreeing to this license you and any business entity you represent are 
                *  legally bound to the AllBinary Open License Version 1 legal agreement. 
                *   
                *  You may obtain the AllBinary Open License Version 1 legal agreement from 
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
                *   
                *  Created By: Travis Berthelot    
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_ABVECTOR_H
        #define ORG_ALLBINARY_UTIL_ABVECTOR_H

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Vector.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
template<typename E>
class ABVector: public Vector<E> {

    public: void ensureCapacity(int32_t minCapacity);

    public: int32_t capacity();

    public: int32_t size();

    public: bool isEmpty();

    public: bool contains(Object* obj);

    public: int32_t indexOf(Object* obj);

    public: int32_t lastIndexOf(Object* obj);

    public: E elementAt(int32_t index);

    public: E firstElement();

    public: E lastElement();

    public: void setElementAt(E obj, int32_t index);

    public: void removeElementAt(int32_t index);

    public: void addElement(E obj);

    public: void insertElementAt(E obj, int32_t index);

    public: bool removeElement(Object* obj);

    public: void removeAllElements();

    public: Object* clone();

    public: std::vector<Object*> toArray();

    public: E set(int32_t index, E element);

    public: bool add(E element);

    public: bool remove(Object* obj);

    public: void add(int32_t index, E element);

    public: E remove(int32_t index);

    public: void clear();

    public: bool equals(Object* obj);

    public: int32_t hashCode();

    public: std::string toString();

    protected: void removeRange(int32_t fromIndex, int32_t toIndex);

};

            


        #endif //ORG_ALLBINARY_UTIL_ABVECTOR_H
