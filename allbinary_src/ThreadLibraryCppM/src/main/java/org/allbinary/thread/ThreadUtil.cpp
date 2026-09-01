
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
            #include "../../../java/lang/Thread.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThreadUtil
            : public Object
         {

    private: static ThreadUtil instance() { return ThreadUtil(); }

    public: static ThreadUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreadUtil::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    public: const std::string JOIN = "join";

    public: bool isRunning(Thread thread){

                        if(thread != 
                                    nullptr
                                 && thread.isAlive())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void join(Thread thread){

                        if(ThreadUtil::getInstance().isRunning(thread))
                        
                                    {
                                    this->logUtil.putF("Waiting for Thread To Join/End", this, this->JOIN);
    
thread.join();
    

                                    }
                                
}


};

            

