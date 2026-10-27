
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class TouchButtonRecognizer;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/MotionRecognizer.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OnlyTouchButtonRecognizer: public MotionRecognizer {

    private: TouchButtonRecognizer* touchButtonRecognizer;

    private: bool touchButtonProcessing = false;

public: OnlyTouchButtonRecognizer();

                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H_COMPLETE
        #if __has_include(<org/allbinary/input/motion/button/TouchButtonRecognizer.h>)
#include <org/allbinary/input/motion/button/TouchButtonRecognizer.h>
#endif
#if __has_include("org/allbinary/input/motion/MotionRecognizer.h")
#include "org/allbinary/input/motion/MotionRecognizer.h"
#endif

        #endif
    
