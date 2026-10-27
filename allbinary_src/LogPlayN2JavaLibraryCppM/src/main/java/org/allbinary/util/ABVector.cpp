
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABVECTOR_CPP
        #define ORG_ALLBINARY_UTIL_ABVECTOR_CPP

        #include "org/allbinary/util/ABVector.h"
        

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
ABVector<E>::ABVector() {
        }
        
    template<typename E>
auto ABVector<E>::ensureCapacity(int32_t minCapacity) -> void{
Vector<E>::ensureCapacity(minCapacity);
    
}


    template<typename E>
auto ABVector<E>::capacity() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::capacity();;
    
}


    template<typename E>
auto ABVector<E>::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::size();;
    
}


    template<typename E>
auto ABVector<E>::isEmpty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::isEmpty();;
    
}


    template<typename E>
auto ABVector<E>::contains(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::contains(obj);;
    
}


    template<typename E>
auto ABVector<E>::indexOf(Object* obj) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::indexOf(obj);;
    
}


    template<typename E>
auto ABVector<E>::lastIndexOf(Object* obj) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::lastIndexOf(obj);;
    
}


    template<typename E>
auto ABVector<E>::elementAt(int32_t index) -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::elementAt(index);;
    
}


    template<typename E>
auto ABVector<E>::firstElement() -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::firstElement();;
    
}


    template<typename E>
auto ABVector<E>::lastElement() -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::lastElement();;
    
}


    template<typename E>
auto ABVector<E>::setElementAt(E obj, int32_t index) -> void{
Vector<E>::setElementAt(obj, index);
    
}


    template<typename E>
auto ABVector<E>::removeElementAt(int32_t index) -> void{
Vector<E>::removeElementAt(index);
    
}


    template<typename E>
auto ABVector<E>::addElement(E obj) -> void{
Vector<E>::addElement(obj);
    
}


    template<typename E>
auto ABVector<E>::insertElementAt(E obj, int32_t index) -> void{
Vector<E>::insertElementAt(obj, index);
    
}


    template<typename E>
auto ABVector<E>::removeElement(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::removeElement(obj);;
    
}


    template<typename E>
auto ABVector<E>::removeAllElements() -> void{
Vector<E>::removeAllElements();
    
}


    template<typename E>
auto ABVector<E>::clone() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::clone();;
    
}


    template<typename E>
auto ABVector<E>::toArray() -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::toArray();;
    
}


    template<typename E>
auto ABVector<E>::set(int32_t index, E element) -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::set(index, element);;
    
}


    template<typename E>
auto ABVector<E>::add(E element) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::add(element);;
    
}


    template<typename E>
auto ABVector<E>::remove(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::remove(obj);;
    
}


    template<typename E>
auto ABVector<E>::add(int32_t index, E element) -> void{
Vector<E>::add(index, element);
    
}


    template<typename E>
auto ABVector<E>::remove(int32_t index) -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::remove(index);;
    
}


    template<typename E>
auto ABVector<E>::clear() -> void{
Vector<E>::clear();
    
}


    template<typename E>
auto ABVector<E>::equals(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::->equals(obj);;
    
}


    template<typename E>
auto ABVector<E>::hashCode() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::hashCode();;
    
}


    template<typename E>
auto ABVector<E>::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Vector<E>::toString();;
    
}


    template<typename E>
auto ABVector<E>::removeRange(int32_t fromIndex, int32_t toIndex) -> void{
Vector<E>::removeRange(fromIndex, toIndex);
    
}




        #endif //ORG_ALLBINARY_UTIL_ABVECTOR_CPP
