
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/ThreadPool.h"

class SoundThreadPool
            : public Object
         {

    private: static ThreadPool* instance() { static std::unique_ptr<ThreadPool> value(new ThreadPool("Sound", 1, ThreadPool::NORMAL_PRIORITY)); return value.get(); }

    public: static ThreadPool* getInstance();

};

            


        #endif //ORG_ALLBINARY_THREAD_SOUNDTHREADPOOL_H
