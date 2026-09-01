
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
        



        #ifndef ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H
        #define ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H

















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ABRunnable.h"

class NullABRunnable: public ABRunnable {

    private: static NullABRunnable instance() { return NullABRunnable(); }

    public: static NullABRunnable getInstance();
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: bool isRunning();

};

            


        #endif //ORG_ALLBINARY_THREAD_NULLABRUNNABLE_H
