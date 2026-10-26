
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Thread.h"
        
            #include "java/lang/Runnable.h"
        
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GameRunnable
            : public Object
        : public Runnable {

    public: const int32_t WAIT = 240;

    public: const int32_t FAST = 60;

    public: int64_t waitInMillis = this->WAIT;

public: GameRunnable(){
}


    public: void run(){
DisplayInfoSingleton::getInstance().process();
    
}


                //@Throws(Exception.constructor)
            
    public: void processLoopSleep(){
Thread::sleep(this->waitInMillis);
    
}


};

            

