
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicAccelerationProperties
            : public Object
         {

    private: int32_t forward= 0;

    private: int32_t reverse= 0;

public: BasicAccelerationProperties(int32_t forward, int32_t reverse){
this->setForward(forward);
    
this->setReverse(reverse);
    
}


    public: void setReverse(int32_t reverse){
this->reverse= reverse;
    
}


    public: int32_t getReverse(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->reverse;
    
}


    public: void setForward(int32_t forward){
this->forward= forward;
    
}


    public: int32_t getForward(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->forward;
    
}


};

            

