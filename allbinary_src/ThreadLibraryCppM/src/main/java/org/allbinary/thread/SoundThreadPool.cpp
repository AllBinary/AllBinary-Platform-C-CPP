
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
        



        #ifndef ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_CPP
        #define ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/SoundThreadPool.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"


SoundThreadPool::SoundThreadPool() {
        }
        auto SoundThreadPool::instance_owner() -> ThreadPool* { static std::unique_ptr<ThreadPool> value(new ThreadPool("Sound", 1, ThreadPool::NORMAL_PRIORITY)); return value.get(); }
ThreadPool* SoundThreadPool::instance = SoundThreadPool::instance_owner();

    auto SoundThreadPool::getInstance() -> ThreadPool*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SoundThreadPool::instance;
    
}




        #endif //ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_CPP
