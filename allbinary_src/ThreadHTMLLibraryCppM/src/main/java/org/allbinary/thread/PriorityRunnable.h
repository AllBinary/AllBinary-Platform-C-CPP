
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PriorityRunnable: public virtual Runnable {

    public: virtual int32_t getPriority() = 0;

    public: virtual bool isDone() = 0;

    public: virtual void reset() = 0;

};

            


        #endif //ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_PRIORITYRUNNABLE_H_COMPLETE
        
        #endif
    
