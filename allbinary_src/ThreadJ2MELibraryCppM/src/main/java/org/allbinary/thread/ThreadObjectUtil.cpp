
        /* Generated Code Do Not Modify */
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/TsUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullPriorityRunnable.h"
#include "PriorityRunnable.h"

class ThreadObjectUtil
            : public Object
         {

    private: static ThreadObjectUtil instance() { return ThreadObjectUtil(); }

    public: static ThreadObjectUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreadObjectUtil::instance();
    
}


    public: const PriorityRunnable NULL_PRIORITY_RUNNABLE = NullPriorityRunnable();

    public: void notifyObject(Object anyType){
anyType->notify();
    
}


                //@Throws(Exception.constructor)
            
    public: void waitObject(Object anyType){
;
    
}


                //@Throws(Exception.constructor)
            
    public: void waitObjectFor(Object anyType, int64_t delay){
TsUtil::getInstance().waitFor(anyType, delay);
    
}


    public: void processThread(Runnable runnable){

    Thread thread = Thread(runnable);;
    
thread.start();
    
}


};

            

