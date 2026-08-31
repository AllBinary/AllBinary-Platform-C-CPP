
        /* Generated Code Do Not Modify */
        



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

    public static ThreadObjectUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreadObjectUtil.instance;
    
}


    public const NULL_PRIORITY_RUNNABLE: PriorityRunnable = new NullPriorityRunnable();

    public notifyObject(Object anyType){
anyType!.notify();
    
}


                //@Throws(Exception.constructor)
            
    public waitObject(Object anyType){
anyType!.wait();
    
}


                //@Throws(Exception.constructor)
            
    public waitObjectFor(Object anyType, int64_t delay){
TsUtil.getInstance()!.waitFor(anyType, delay);
    
}


    public processThread(Runnable runnable){

    thread: Thread = new Thread(runnable);;
    
thread.start();
    
}


};

            

