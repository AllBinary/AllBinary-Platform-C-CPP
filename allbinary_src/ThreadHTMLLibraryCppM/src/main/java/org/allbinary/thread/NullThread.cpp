
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLTHREAD_CPP
        #define ORG_ALLBINARY_THREAD_NULLTHREAD_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/NullThread.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Thread.h"
        
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/NullRunnable.h"


NullThread::NullThread() {
        }
        auto NullThread::NULL_THREAD_owner() -> Thread* { static std::unique_ptr<Thread> value(new Thread(NullRunnable::getInstance(), StringUtil::getInstance()->EMPTY_STRING)); return value.get(); }
Thread* NullThread::NULL_THREAD = NullThread::NULL_THREAD_owner();



        #endif //ORG_ALLBINARY_THREAD_NULLTHREAD_CPP
