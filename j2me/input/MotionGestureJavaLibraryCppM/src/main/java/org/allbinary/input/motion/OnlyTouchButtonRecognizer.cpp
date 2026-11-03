
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_CPP
        #define ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/motion/OnlyTouchButtonRecognizer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"


OnlyTouchButtonRecognizer::OnlyTouchButtonRecognizer(){
this->touchButtonRecognizer= new TouchButtonRecognizer();
    
}


                //@Throws(Exception.constructor)
            
    auto OnlyTouchButtonRecognizer::processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonRecognizer->pressTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    this->touchButtonProcessing= true;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto OnlyTouchButtonRecognizer::processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonProcessing= false;
    

                                    }
                                

                        if(this->touchButtonRecognizer->releaseTouchButtonInput(x, y, deviceId))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto OnlyTouchButtonRecognizer::processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) -> void{

                        if(this->touchButtonProcessing)
                        
                                    {
                                    this->touchButtonRecognizer->pressTouchButtonInput(x, y, deviceId);
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_CPP
