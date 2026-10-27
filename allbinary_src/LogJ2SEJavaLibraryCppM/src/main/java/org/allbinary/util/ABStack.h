
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

        
#include <java/util/Stack.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
template<typename E>
class ABStack: public Stack<E> {


            
    public: ABStack();
        
};

            

        #include "org/allbinary/util/ABStack.cpp"
        

        #endif //ORG_ALLBINARY_UTIL_ABSTACK_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_UTIL_ABSTACK_H_COMPLETE)
        #define ORG_ALLBINARY_UTIL_ABSTACK_H_COMPLETE
        #if __has_include(<java/util/Stack.h>)
#include <java/util/Stack.h>
#endif

        #endif
    
