
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H

            #include "../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PriorityRunnable.h"

class NullPriorityRunnable
            : public Object
        : public PriorityRunnable {

    public: int32_t getPriority();

    public: bool isDone();

    public: void reset();

    public: void run();

};

            


        #endif //ORG_ALLBINARY_THREAD_NULLPRIORITYRUNNABLE_H
