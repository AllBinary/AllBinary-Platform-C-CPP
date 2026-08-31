
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/InterruptedException.h"

#include <chrono>
#include <thread>
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TsUtil
            : public Object
         {
        

private:
    static TsUtil instance() { return TsUtil(); }

public:
    static TsUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TsUtil::instance();
    
}


    int32_t hashCode(Object* object){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return object == nullptr ? 0 : object->hashCode();
    
}


                //@Throws(InterruptedException.constructor)
            
    void waitFor(Object* object, int64_t timeoutMillis){
    (void) object;
    std::this_thread::sleep_for(std::chrono::milliseconds(timeoutMillis));
    
}


};

            

