
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllMotionRecognizer
            : public Object
         {

    private: static int32_t index = 0;

    private: int32_t id;

public: AllMotionRecognizer(){
this->id= AllMotionRecognizer::index++;
    
}


                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){
}


                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){
}


                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){
}


                //@Throws(Exception.constructor)
            
    public: void processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){
}


                //@Throws(Exception.constructor)
            
    public: void processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers){
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


};

            

