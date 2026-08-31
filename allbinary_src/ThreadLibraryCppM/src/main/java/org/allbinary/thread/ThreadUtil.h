
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
        



        #ifndef ORG_ALLBINARY_THREAD_THREADUTIL_H
        #define ORG_ALLBINARY_THREAD_THREADUTIL_H

            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThreadUtil
            : public Object
         {
        

    private: static const instance: ThreadUtil = new ThreadUtil();

    public static ThreadUtil getInstance();

    const logUtil: LogUtil = LogUtil.getInstance()!;

    public const JOIN: string = "join";

    public bool isRunning(Thread thread);

                //@Throws(Exception.constructor)
            
    public join(Thread thread);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADUTIL_H
