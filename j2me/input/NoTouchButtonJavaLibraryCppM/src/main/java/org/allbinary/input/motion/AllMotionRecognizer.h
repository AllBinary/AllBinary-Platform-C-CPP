
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
        #define ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllMotionRecognizer
            : public Object
         {
        

    private: static index: int32_t = 0;

    private: const id: int32_t;

public constructor ();

                //@Throws(Exception.constructor)
            
    public processStartMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processEndMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processDraggedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processMovedMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

                //@Throws(Exception.constructor)
            
    public processScrolledMotionEvent(int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

    public int32_t getId();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
