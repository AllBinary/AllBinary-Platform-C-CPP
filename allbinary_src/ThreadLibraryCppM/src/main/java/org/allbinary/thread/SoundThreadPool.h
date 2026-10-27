
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
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
        



        #ifndef ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H
        #define ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ThreadPool;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class SoundThreadPool
            : public virtual Object
         {

    private: static ThreadPool* instance_owner();
    private: static ThreadPool* instance;

    public: static ThreadPool* getInstance();


            
    public: SoundThreadPool();
        
};

            


        #endif //ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H_COMPLETE
        #if __has_include("org/allbinary/thread/ThreadPool.h")
#include "org/allbinary/thread/ThreadPool.h"
#endif

        #endif
    
