
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABSTACK_H
        #define ORG_ALLBINARY_UTIL_ABSTACK_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Stack.h>
class JsType;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename E>
class ABStack: public Stack<E> {


            
    public: ABStack();
        
    public: E push(E item);

    public: E pop();

    public: E peek();

    public: bool empty();

    public: int32_t search(Object* obj);
    public: int32_t search(const std::string& obj) { return search(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t search(BoxValue obj) { return search(JavaBoxes::toObject(obj)); }

    public: bool removeElement(Object* obj);
    public: bool removeElement(const std::string& obj) { return removeElement(JavaString::box(obj)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> bool removeElement(BoxValue obj) { return removeElement(JavaBoxes::toObject(obj)); }

};

            

        #include "org/allbinary/util/ABStack.cpp"
        

        #endif //ORG_ALLBINARY_UTIL_ABSTACK_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ABSTACK_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ABSTACK_H_COMPLETE
        #if __has_include(<java/util/Stack.h>)
#include <java/util/Stack.h>
#endif
#if __has_include(<jsinterop/annotations/JsType.h>)
#include <jsinterop/annotations/JsType.h>
#endif

        #endif
    
