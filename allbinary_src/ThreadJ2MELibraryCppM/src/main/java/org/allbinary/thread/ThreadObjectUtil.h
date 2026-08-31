
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
        #define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Thread.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullPriorityRunnable.h"
#include "PriorityRunnable.h"

class ThreadObjectUtil
            : public Object
         {
        

    private: static const instance: ThreadObjectUtil = new ThreadObjectUtil();

    public static ThreadObjectUtil getInstance();

    public const NULL_PRIORITY_RUNNABLE: PriorityRunnable = new NullPriorityRunnable();

    public notifyObject(Object anyType);

                //@Throws(Exception.constructor)
            
    public waitObject(Object anyType);

                //@Throws(Exception.constructor)
            
    public waitObjectFor(Object anyType, int64_t delay);

    public processThread(Runnable runnable);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
