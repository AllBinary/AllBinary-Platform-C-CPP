
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_CPP
        #define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/thread/ThreadObjectUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/thread/NullPriorityRunnable.h"
#include "org/allbinary/thread/PriorityRunnable.h"


ThreadObjectUtil::ThreadObjectUtil() : NULL_PRIORITY_RUNNABLE(new NullPriorityRunnable()) {
        }
        auto ThreadObjectUtil::instance_owner() -> ThreadObjectUtil* { static std::unique_ptr<ThreadObjectUtil> value(new ThreadObjectUtil()); return value.get(); }
ThreadObjectUtil* ThreadObjectUtil::instance = ThreadObjectUtil::instance_owner();

    auto ThreadObjectUtil::getInstance() -> ThreadObjectUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreadObjectUtil::instance;
    
}


    auto ThreadObjectUtil::notifyObject(Object* anyType) -> void{
anyType->notify();
    
}


                //@Throws(Exception.constructor)
            
    auto ThreadObjectUtil::waitObject(Object* anyType) -> void{
anyType->wait();
    
}


                //@Throws(Exception.constructor)
            
    auto ThreadObjectUtil::waitObjectFor(Object* anyType, int64_t delay) -> void{
TsUtil::getInstance()->waitFor(anyType, delay);
    
}


    auto ThreadObjectUtil::processThread(Runnable* runnable) -> void{

    Thread* thread = new Thread(runnable);;
    
thread->start();
    
}




        #endif //ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_CPP
