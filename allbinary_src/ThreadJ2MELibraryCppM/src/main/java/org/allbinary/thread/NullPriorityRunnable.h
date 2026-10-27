
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/PriorityRunnable.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullPriorityRunnable
            : public virtual Object
        , public PriorityRunnable {


            
    public: NullPriorityRunnable();
        
    public: int32_t getPriority();

    public: bool isDone();

    public: void reset();

    public: void run();

};

            


        #endif //ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H_COMPLETE
        #if __has_include("org/allbinary/thread/PriorityRunnable.h")
#include "org/allbinary/thread/PriorityRunnable.h"
#endif

        #endif
    
