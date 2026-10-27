
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLTHREAD_H
        #define ORG_ALLBINARY_THREAD_NULLTHREAD_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
class StringUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class NullRunnable;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullThread
            : public virtual Object
         {

    private: static Thread* NULL_THREAD_owner();
    public: static Thread* NULL_THREAD;


            
    public: NullThread();
        
};

            


        #endif //ORG_ALLBINARY_THREAD_NULLTHREAD_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_NULLTHREAD_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_NULLTHREAD_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include("org/allbinary/thread/NullRunnable.h")
#include "org/allbinary/thread/NullRunnable.h"
#endif

        #endif
    
