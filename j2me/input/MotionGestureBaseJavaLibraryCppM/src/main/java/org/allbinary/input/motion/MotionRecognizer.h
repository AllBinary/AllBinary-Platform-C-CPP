
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_MOTIONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_MOTIONRECOGNIZER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MotionRecognizer
            : public virtual Object
         {


            
    public: MotionRecognizer();
        
                //@Throws(Exception.constructor)
            
    public: void processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public: void processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_MOTIONRECOGNIZER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_MOTIONRECOGNIZER_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_MOTIONRECOGNIZER_H_COMPLETE
        
        #endif
    
