
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
        #define ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullPriorityRunnable.h"
#include "PriorityRunnable.h"

class ThreadObjectUtil
            : public Object
         {

    private: static ThreadObjectUtil instance() { return ThreadObjectUtil(); }

    public: static ThreadObjectUtil getInstance();

    public: const PriorityRunnable NULL_PRIORITY_RUNNABLE = NullPriorityRunnable();

    public: void notifyObject(Object anyType);

                //@Throws(Exception.constructor)
            
    public: void waitObject(Object anyType);

                //@Throws(Exception.constructor)
            
    public: void waitObjectFor(Object anyType, int64_t delay);

    public: void processThread(Runnable runnable);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADOBJECTUTIL_H
