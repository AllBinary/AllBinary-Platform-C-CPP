
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Runnable.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
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
}


                //@Throws(Exception.constructor)
            
    public waitObject(Object anyType){
}


                //@Throws(Exception.constructor)
            
    public waitObjectFor(Object anyType, int64_t delay){
}


    public processThread(Runnable runnable){
runnable.run();
    
}


};

            

