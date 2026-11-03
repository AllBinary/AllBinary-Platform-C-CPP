
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Vector.h>
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename E>
class ABVector: public Vector<E> {


            
    public: ABVector();
        
    public: void ensureCapacity(int32_t minCapacity);

    public: int32_t capacity();

    public: int32_t size();

    public: bool isEmpty();

    public: bool contains(Object* obj);
    public: bool contains(const std::string& obj) { return contains(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool contains(BoxValue obj) { return contains(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> bool contains(const std::vector<BoxElement>& obj) { return contains(JavaBoxes::toObject(obj)); }

    public: int32_t indexOf(Object* obj);
    public: int32_t indexOf(const std::string& obj) { return indexOf(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t indexOf(BoxValue obj) { return indexOf(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> int32_t indexOf(const std::vector<BoxElement>& obj) { return indexOf(JavaBoxes::toObject(obj)); }

    public: int32_t lastIndexOf(Object* obj);
    public: int32_t lastIndexOf(const std::string& obj) { return lastIndexOf(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t lastIndexOf(BoxValue obj) { return lastIndexOf(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> int32_t lastIndexOf(const std::vector<BoxElement>& obj) { return lastIndexOf(JavaBoxes::toObject(obj)); }

    public: E elementAt(int32_t index);

    public: E firstElement();

    public: E lastElement();

    public: void setElementAt(E obj, int32_t index);

    public: void removeElementAt(int32_t index);

    public: void addElement(E obj);

    public: void insertElementAt(E obj, int32_t index);

    public: bool removeElement(Object* obj);
    public: bool removeElement(const std::string& obj) { return removeElement(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool removeElement(BoxValue obj) { return removeElement(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> bool removeElement(const std::vector<BoxElement>& obj) { return removeElement(JavaBoxes::toObject(obj)); }

    public: void removeAllElements();

    public: Object* clone();

    public: std::vector<Object*> toArray();

    public: E set(int32_t index, E element);

    public: bool add(E element);

    public: bool remove(Object* obj);
    public: bool remove(const std::string& obj) { return remove(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool remove(BoxValue obj) { return remove(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> bool remove(const std::vector<BoxElement>& obj) { return remove(JavaBoxes::toObject(obj)); }

    public: void add(int32_t index, E element);

    public: E remove(int32_t index);

    public: void clear();

    public: bool equals(Object* obj);
    public: bool equals(const std::string& obj) { return equals(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool equals(BoxValue obj) { return equals(JavaBoxes::toObject(obj)); }
    public: template<typename BoxElement> bool equals(const std::vector<BoxElement>& obj) { return equals(JavaBoxes::toObject(obj)); }

    public: int32_t hashCode();

    public: std::string toString();

    /*protected*/ public: void removeRange(int32_t fromIndex, int32_t toIndex);

};

            

        #include "org/allbinary/util/ABVector.cpp"
        

        #endif //ORG_ALLBINARY_UTIL_ABVECTOR_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ABVECTOR_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ABVECTOR_H_COMPLETE
        #if __has_include(<java/util/Vector.h>)
#include <java/util/Vector.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
