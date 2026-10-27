
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreadUtil
            : public virtual Object
         {

    private: static ThreadUtil* instance_owner();
    private: static ThreadUtil* instance;

    public: static ThreadUtil* getInstance();


            
    public: ThreadUtil();
        
    /*protected*/ public: LogUtil* logUtil;

    public: const std::string JOIN = "join";

    public: bool isRunning(Thread* thread);

                //@Throws(Exception.constructor)
            
    public: void join(Thread* thread);

};

            


        #endif //ORG_ALLBINARY_THREAD_THREADUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_THREAD_THREADUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_THREAD_THREADUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    
