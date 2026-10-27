
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Stack.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
template<typename E>
class ABStack: public Stack<E> {

    public: E push(E item);

    public: E pop();

    public: E peek();

    public: bool empty();

    public: int32_t search(Object* obj);

    public: bool removeElement(Object* obj);

};

            


        #endif //ORG_ALLBINARY_UTIL_ABSTACK_H
