
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
        



        #ifndef ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H
        #define ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class RunnableInterface: public Runnable {

    public: virtual bool isRunning() = 0;

    public: virtual void setRunning(bool isRunning) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void setThread(Thread* thread) = 0;

};

            


        #endif //ORG_ALLBINARY_THREAD_RUNNABLEINTERFACE_H
