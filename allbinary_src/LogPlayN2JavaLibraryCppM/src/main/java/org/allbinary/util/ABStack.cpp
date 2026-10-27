
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
        



        #ifndef ORG_ALLBINARY_UTIL_ABSTACK_CPP
        #define ORG_ALLBINARY_UTIL_ABSTACK_CPP

        #include "org/allbinary/util/ABStack.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/Stack.h>

      
#include <jsinterop/annotations/JsType.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

template<typename E>
ABStack<E>::ABStack() {
        }
        
    template<typename E>
auto ABStack<E>::push(E item) -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::push(item);;
    
}


    template<typename E>
auto ABStack<E>::pop() -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::pop();;
    
}


    template<typename E>
auto ABStack<E>::peek() -> E{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::peek();;
    
}


    template<typename E>
auto ABStack<E>::empty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::empty();;
    
}


    template<typename E>
auto ABStack<E>::search(Object* obj) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::search(obj);;
    
}


    template<typename E>
auto ABStack<E>::removeElement(Object* obj) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Stack<E>::removeElement(obj);;
    
}




        #endif //ORG_ALLBINARY_UTIL_ABSTACK_CPP
