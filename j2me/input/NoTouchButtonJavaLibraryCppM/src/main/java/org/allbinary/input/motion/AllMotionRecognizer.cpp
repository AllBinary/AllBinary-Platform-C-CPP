
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/AllMotionRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

AllMotionRecognizer::AllMotionRecognizer(){
this->id= AllMotionRecognizer::index++;
    
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{
}


                //@Throws(Exception.constructor)
            
    auto AllMotionRecognizer::processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{
}


    auto AllMotionRecognizer::getId() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_CPP
